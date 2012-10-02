#ifdef RCS
static char rcsid[]="$Id: cpp4.c,v 1.3 1994/06/02 08:50:52 start Exp $";
#endif
/******************************************************************************
 *                               FREXXWARE
 * ----------------------------------------------------------------------------
 *
 * Project: Frexx C Preprocessor
 * $Source: /home/user/start/cpp/RCS/cpp4.c,v $
 * $Revision: 1.3 $
 * $Date: 1994/06/02 08:50:52 $
 * $Author: start $
 * $State: Exp $
 * $Locker:  $
 *
 * ----------------------------------------------------------------------------
 * $Log: cpp4.c,v $
 * Revision 1.3  1994/06/02  08:50:52  start
 * Changed a few things to make the initial function routine to run
 *
 * Revision 1.2  1994/01/24  09:34:03  start
 * Made a bunch of functions FILE_LOCAL and INLINE.
 *
 * Revision 1.1  1993/11/03  09:13:08  start
 * Initial revision
 *
 *
 *****************************************************************************/
/*
 *			    C P P 4 . C
 *		M a c r o  D e f i n i t i o n s
 *
 * Edit History
 * 31-Aug-84	MM	USENET net.sources release
 * 04-Oct-84	MM	__LINE__ and __FILE__ must call ungetstring()
 *			so they work correctly with token concatenation.
 *			Added string formal recognition.
 * 25-Oct-84	MM	"Short-circuit" evaluate #if's so that we
 *			don't print unnecessary error messages for
 *			#if !defined(FOO) && FOO != 0 && 10 / FOO ...
 * 31-Oct-84	ado/MM	Added token concatenation
 *  6-Nov-84	MM	Split off eval stuff
 * 21-Oct-85	RMS	Rename `token' to `tokenbuf'.
 *			In doundef, don't complain if arg already not defined.
 * 14-Mar-86	FNF	Incorporate macro based C debugging package.
 *			Port to Commodore AMIGA.
 * 21-Aug-88	Ois	Changed concatenation operator to ##. Changed hand-
 *			ling of tokens following ##. Added new meaning of #.
 */

#include	<stdio.h>
#include	<ctype.h>
#include	"cppdef.h"
#include	"cpp.h"

INLINE FILE_LOCAL ReturnCode checkparm(struct Global *, int, DEFBUF *, int);
INLINE FILE_LOCAL ReturnCode stparmscan(struct Global *, int);
INLINE FILE_LOCAL ReturnCode textput(struct Global *, char *);
FILE_LOCAL ReturnCode charput(struct Global *, int);
INLINE FILE_LOCAL ReturnCode expcollect(struct Global *);
INLINE FILE_LOCAL char *doquoting(char *, char *);


ReturnCode dodefine(struct Global *global)
{
  /*
   * Called from control when a #define is scanned.  This module
   * parses formal parameters and the replacement string.  When
   * the formal parameter name is encountered in the replacement
   * string, it is replaced by a character in the range 128 to
   * 128+NPARAM (this allows up to 32 parameters within the
   * Dec Multinational range).  If cpp is ported to an EBCDIC
   * machine, you will have to make other arrangements.
   *
   * There is some special case code to distinguish
   *	#define foo	bar
   * from #define foo()   bar
   *
   * Also, we make sure that
   *	#define foo	foo
   * expands to "foo" but doesn't put cpp into an infinite loop.
   *
   * A warning message is printed if you redefine a symbol to a
   * different text.  I.e,
   *	#define foo	123
   *	#define foo	123
   * is ok, but
   *	#define foo	123
   *	#define foo	+123
   * is not.
   *
   * The following subroutines are called from define():
   * checkparm	called when a token is scanned.  It checks through the
   *		array of formal parameters.  If a match is found, the
   *		token is replaced by a control byte which will be used
   *		to locate the parameter when the macro is expanded.
   * textput	puts a string in the macro work area (parm[]), updating
   *		parmp to point to the first free byte in parm[].
   *		textput() tests for work buffer overflow.
   * charput	puts a single character in the macro work area (parm[])
   *		in a manner analogous to textput().
   */
  int c;
  DEFBUF *dp;	/* -> new definition	*/
  int isredefine;	/* TRUE if redefined	*/
  char *old;		/* Remember redefined	*/
  ReturnCode ret;
#if OK_CONCAT
  int quoting;	/* Remember we saw a #	*/
#endif

  if (type[(c = skipws(global))] != LET) {
	cerror(global, ERROR_DEFINE_SYNTAX);
	global->inmacro = FALSE;		/* Stop <newline> hack	*/
	return(FPP_OK);
  }
  isredefine = FALSE;			/* Set if redefining	*/
  if ((dp = lookid(global, c)) == NULL) { /* If not known now     */
	dp = defendel(global, global->tokenbuf, FALSE); /* Save the name  */
	if(!dp)
	  return(FPP_OUT_OF_MEMORY);
  } else {				/* It's known:          */
	isredefine = TRUE;			/* Remember this fact	*/
	old = dp->repl;			/* Remember replacement */
	dp->repl = NULL;			/* No replacement now	*/
  }
  global->parlist[0] = global->parmp = global->parm; /* Setup parm buffer */
  if ((c = get(global)) == '(') {       /* With arguments?      */
	global->nargs = 0;			/* Init formals counter */
	do {				/* Collect formal parms */
	  if (global->nargs >= LASTPARM) {
	cfatal(global, FATAL_TOO_MANY_ARGUMENTS_MACRO);
	return(FPP_TOO_MANY_ARGUMENTS);
	  } else if ((c = skipws(global)) == ')')
	break;			/* Got them all 	*/
	  else if (type[c] != LET) {         /* Bad formal syntax    */
	cerror(global, ERROR_DEFINE_SYNTAX);
	global->inmacro = FALSE;		/* Stop <newline> hack	*/
	return(FPP_OK);
	  }
	  scanid(global, c);                        /* Get the formal param */
	  global->parlist[global->nargs++] = global->parmp; /* Save its start */
	  ret=textput(global, global->tokenbuf); /* Save text in parm[]  */
	  if(ret)
	return(ret);
	} while ((c = skipws(global)) == ',');    /* Get another argument */
	if (c != ')') {                     /* Must end at )        */
	  cerror(global, ERROR_DEFINE_SYNTAX);
	  global->inmacro = FALSE;		/* Stop <newline> hack	*/
	  return(FPP_OK);
	}
	c = ' ';                            /* Will skip to body    */
  }
  else {
	/*
	 * DEF_NOARGS is needed to distinguish between
	 * "#define foo" and "#define foo()".
	 */
	global->nargs = DEF_NOARGS;		/* No () parameters     */
  }
  if (type[c] == SPA)                   /* At whitespace?       */
	c = skipws(global);                 /* Not any more.        */
  global->workp = global->work;		/* Replacement put here */
  global->inmacro = TRUE;		/* Keep \<newline> now	*/
  quoting = 0;				/* No # seen yet.	*/
  while (c != EOF_CHAR && c != '\n') {  /* Compile macro body   */
#if OK_CONCAT
	if (c == '#') {                     /* Token concatenation? */
	  if ((c = get(global)) != '#') {   /* No, not really       */
	quoting = 1;		        /* Maybe quoting op.	*/
	continue;
	  }
	  while (global->workp > global->work && type[global->workp[-1]] == SPA)
	--global->workp;		/* Erase leading spaces */
	  if(ret=save(global, TOK_SEP))     /* Stuff a delimiter    */
	return(ret);
	  c = skipws(global);               /* Eat whitespace       */
	  continue;
	}
#endif
	switch (type[c]) {
	case LET:
#if OK_CONCAT
	  ret=checkparm(global, c, dp, quoting);      /* Might be a formal    */
#else
	  ret=checkparm(c, dp);               /* Might be a formal    */
#endif
	  if(ret)
	return(ret);
	  break;

	case DIG:				/* Number in mac. body	*/
	case DOT:				/* Maybe a float number */
	  ret=scannumber(global, c, save);  /* Scan it off          */
	  if(ret)
	return(ret);
	  break;

	case QUO:				/* String in mac. body	*/
	  ret=stparmscan(global, c);
	  if(ret)
	return(ret);
	  break;

	case BSH:				/* Backslash		*/
	  ret=save(global, '\\');
	  if(ret)
	return(ret);
	  if ((c = get(global)) == '\n')
	global->wrongline = TRUE;
	  ret=save(global, c);
	  if(ret)
	return(ret);
	  break;

	case SPA:				/* Absorb whitespace	*/
	  /*
	   * Note: the "end of comment" marker is passed on
	   * to allow comments to separate tokens.
	   */
	  if (global->workp[-1] == ' ')   /* Absorb multiple      */
	break;			/* spaces		*/
	  else if (c == '\t')
	c = ' ';                      /* Normalize tabs       */
	  /* Fall through to store character			*/
	default:				/* Other character	*/
	  ret=save(global, c);
	  if(ret)
	return(ret);
	  break;
	}
	c = get(global);
	quoting = 0;			/* Only when immediately*/
	/* preceding a formal	*/
  }
  global->inmacro = FALSE;		/* Stop newline hack	*/
  unget(global);                            /* For control check    */
  if (global->workp > global->work && global->workp[-1] == ' ') /* Drop trailing blank  */
	global->workp--;
  *global->workp = EOS;		/* Terminate work	*/
  dp->repl = savestring(global, global->work); /* Save the string      */
  dp->nargs = global->nargs;			/* Save arg count	*/
  if (isredefine) {                   /* Error if redefined   */
	if ((old != NULL && dp->repl != NULL && !streq(old, dp->repl))
	|| (old == NULL && dp->repl != NULL)
	|| (old != NULL && dp->repl == NULL)) {
	  cerror(global, ERROR_REDEFINE, dp->name);
	}
	if (old != NULL)                  /* We don't need the    */
	  Freemem(old);                   /* old definition now.  */
  }
  return(FPP_OK);
}

INLINE FILE_LOCAL
ReturnCode checkparm(struct Global *global,
			 int c,
			 DEFBUF *dp,
			 int quoting)	/* Preceded by a # ?	*/
{
  /*
   * Replace this param if it's defined.  Note that the macro name is a
   * possible replacement token. We stuff DEF_MAGIC in front of the token
   * which is treated as a LETTER by the token scanner and eaten by
   * the output routine. This prevents the macro expander from
   * looping if someone writes "#define foo foo".
   */

  int i;
  char *cp;
  ReturnCode ret=FPP_OK;

  scanid(global, c);                /* Get parm to tokenbuf */
  for (i = 0; i < global->nargs; i++) {     /* For each argument    */
	if (streq(global->parlist[i], global->tokenbuf)) {  /* If it's known */
#if OK_CONCAT
	  if (quoting) {                    /* Special handling of  */
	ret=save(global, QUOTE_PARM);     /* #formal inside defn  */
	if(ret)
	  return(ret);
	  }
#endif
	  ret=save(global, i + MAC_PARM);     /* Save a magic cookie  */
	  return(ret);		      /* And exit the search	*/
	}
  }
  if (streq(dp->name, global->tokenbuf))    /* Macro name in body?  */
	ret=save(global, DEF_MAGIC);            /* Save magic marker    */
  for (cp = global->tokenbuf; *cp != EOS;)  /* And save             */
	ret=save(global, *cp++);                /* The token itself     */
  return(ret);
}

INLINE FILE_LOCAL
ReturnCode stparmscan(struct Global *global, int delim)
{
  /*
   * Normal string parameter scan.
   */

  unsigned char	*wp;
  int i;
  ReturnCode ret;

  wp = (unsigned char *)global->workp;	/* Here's where it starts       */
  ret=scanstring(global, delim, save);
  if(ret)
	return(ret);		/* Exit on scanstring error	*/
  global->workp[-1] = EOS;		/* Erase trailing quote 	*/
  wp++;				/* -> first string content byte */
  for (i = 0; i < global->nargs; i++) {
	if (streq(global->parlist[i], (char *)wp)) {
	  *wp++ = MAC_PARM + PAR_MAC;	/* Stuff a magic marker */
	  *wp++ = (i + MAC_PARM);         /* Make a formal marker */
	  *wp = wp[-3];			/* Add on closing quote */
	  global->workp = (char *)wp + 1; 	/* Reset string end	*/
	  return(FPP_OK);
	}
  }
  global->workp[-1] = wp[-1];	/* Nope, reset end quote.	*/
  return(FPP_OK);
}

void doundef(struct Global *global)
  /*
   * Remove the symbol from the defined list.
   * Called from the #control processor.
   */
{
  int c;
  if (type[(c = skipws(global))] != LET)
	cerror(global, ERROR_ILLEGAL_UNDEF);
  else {
	scanid(global, c);                         /* Get name to tokenbuf */
	(void) defendel(global, global->tokenbuf, TRUE);
  }
}

INLINE FILE_LOCAL
ReturnCode textput(struct Global *global, char *text)
{
  /*
   * Put the string in the parm[] buffer.
   */

  int size;

  size = strlen(text) + 1;
  if ((global->parmp + size) >= &global->parm[NPARMWORK]) {
	cfatal(global, FATAL_MACRO_AREA_OVERFLOW);
	return(FPP_WORK_AREA_OVERFLOW);
  } else {
	strcpy(global->parmp, text);
	global->parmp += size;
  }
  return(FPP_OK);
}

FILE_LOCAL
ReturnCode charput(struct Global *global, int c)
{
  /*
   * Put the byte in the parm[] buffer.
   */

  if (global->parmp >= &global->parm[NPARMWORK]) {
	cfatal(global, FATAL_MACRO_AREA_OVERFLOW);
	return(FPP_WORK_AREA_OVERFLOW);
  }
  *global->parmp++ = c;
  return(FPP_OK);
}

/*
 *		M a c r o   E x p a n s i o n
 */

ReturnCode expand(struct Global *global, DEFBUF *tokenp)
{
  /*
   * Expand a macro.  Called from the cpp mainline routine (via subroutine
   * macroid()) when a token is found in the symbol table.  It calls
   * expcollect() to parse actual parameters, checking for the correct number.
   * It then creates a "file" containing a single line containing the
   * macro with actual parameters inserted appropriately.  This is
   * "pushed back" onto the input stream.  (When the get() routine runs
   * off the end of the macro line, it will dismiss the macro itself.)
   */
  int c;
  FILEINFO *file;
  ReturnCode ret=FPP_OK;

  /*
   * If no macro is pending, save the name of this macro
   * for an eventual error message.
   */
  if (global->recursion++ == 0)
	global->macro = tokenp;
  else if (global->recursion == RECURSION_LIMIT) {
	cerror(global, ERROR_RECURSIVE_MACRO, tokenp->name, global->macro->name);
	if (global->rec_recover) {
	  do {
	c = get(global);
	  } while (global->infile != NULL && global->infile->fp == NULL);
	  unget(global);
	  global->recursion = 0;
	  return(FPP_OK);
	}
  }
  /*
   * Here's a macro to expand.
   */
  global->nargs = 0;			/* Formals counter	*/
  global->parmp = global->parm;		/* Setup parm buffer	*/
  switch (tokenp->nargs) {
  case (-2):                              /* __LINE__             */
	  if(global->infile->fp)
	  /* This is a file */
	  sprintf(global->work, "%d", global->line);
	  else
	  /* This is a macro! Find out the file line number! */
	  for (file = global->infile; file != NULL; file = file->parent) {
		  if (file->fp != NULL) {
		  sprintf(global->work, "%d", file->line);
		  break;
		  }
	  }
	  ret=ungetstring(global, global->work);
	  if(ret)
	  return(ret);
	  break;

  case (-3):                              /* __FILE__             */
	for (file = global->infile; file != NULL; file = file->parent) {
	  if (file->fp != NULL) {
	sprintf(global->work, "\"%s\"", (file->progname != NULL)
		? file->progname : file->filename);
	ret=ungetstring(global, global->work);
	if(ret)
	  return(ret);
	break;
	  }
	}
	break;

  case (-4):				/* __FUNC__ */
	sprintf(global->work, "\"%s\"", global->functionname[0]?
		global->functionname : "<unknown function>");
	ret=ungetstring(global, global->work);
	if(ret)
	return(ret);
	break;

  case (-5):                              /* __FUNC_LINE__ */
	sprintf(global->work, "%d", global->funcline);
	ret=ungetstring(global, global->work);
	if(ret)
	  return(ret);
	break;

  default:
	/*
	 * Nothing funny about this macro.
	 */
	if (tokenp->nargs < 0) {
	  cfatal(global, FATAL_ILLEGAL_MACRO, tokenp->name);
	  return(FPP_ILLEGAL_MACRO);
	}
	while ((c = skipws(global)) == '\n')      /* Look for (, skipping */
	  global->wrongline = TRUE;		/* spaces and newlines	*/
	if (c != '(') {
	  /*
	   * If the programmer writes
	   *	#define foo() ...
	   *	...
	   *	foo [no ()]
	   * just write foo to the output stream.
	   */
	  unget(global);
	  cwarn(global, WARN_MACRO_NEEDS_ARGUMENTS, tokenp->name);

	  /* fputs(tokenp->name, stdout); */
	  Putstring(global, tokenp->name);
	  return(FPP_OK);
	} else if (!(ret=expcollect(global))) {     /* Collect arguments    */
	  if (tokenp->nargs != global->nargs) {     /* Should be an error?  */
	cwarn(global, WARN_WRONG_NUMBER_ARGUMENTS, tokenp->name);
	  }
	} else {				/* Collect arguments		*/
	  return(ret); /* We failed in argument colleting! */
	}
  case DEF_NOARGS:			/* No parameters just stuffs	*/
	ret=expstuff(global, tokenp->name, tokenp->repl); /* expand macro   */
  }					/* nargs switch 		*/
  return(ret);
}

INLINE FILE_LOCAL
ReturnCode expcollect(struct Global *global)
{
  /*
   * Collect the actual parameters for this macro.
   */

  int c;
  int paren;		    /* For embedded ()'s    */
  ReturnCode ret;

  for (;;) {
	paren = 0;			    /* Collect next arg.    */
	while ((c = skipws(global)) == '\n')/* Skip over whitespace */
	  global->wrongline = TRUE;		/* and newlines.	*/
	if (c == ')') {                     /* At end of all args?  */
	  /*
	   * Note that there is a guard byte in parm[]
	   * so we don't have to check for overflow here.
	   */
	  *global->parmp = EOS;	    /* Make sure terminated */
	  break;			    /* Exit collection loop */
	}
	else if (global->nargs >= LASTPARM) {
	  cfatal(global, FATAL_TOO_MANY_ARGUMENTS_EXPANSION);
	  return(FPP_TOO_MANY_ARGUMENTS);
	}
	global->parlist[global->nargs++] = global->parmp; /* At start of new arg */
	for (;; c = cget(global)) {               /* Collect arg's bytes  */
	  if (c == EOF_CHAR) {
	cerror(global, ERROR_EOF_IN_ARGUMENT);
	return(FPP_EOF_IN_MACRO); /* Sorry.               */
	  }
	  else if (c == '\\') {             /* Quote next character */
	charput(global, c);             /* Save the \ for later */
	charput(global, cget(global));  /* Save the next char.  */
	continue;			/* And go get another   */
	  }
	  else if (type[c] == QUO) {        /* Start of string?     */
	ret=scanstring(global, c, (ReturnCode (*)(struct Global *, int))charput); /* Scan it off    */
	if(ret)
	  return(ret);
	continue;			    /* Go get next char     */
	  }
	  else if (c == '(')                /* Worry about balance  */
	paren++;			/* To know about commas */
	  else if (c == ')') {              /* Other side too       */
	if (paren == 0) {               /* At the end?          */
	  unget(global);                /* Look at it later     */
	  break;			/* Exit arg getter.     */
	}
	paren--;			/* More to come.        */
	  }
	  else if (c == ',' && paren == 0)  /* Comma delimits args  */
	break;
	  else if (c == '\n')               /* Newline inside arg?  */
	global->wrongline = TRUE;	/* We'll need a #line   */
	  charput(global, c);               /* Store this one       */
	}				        /* Collect an argument  */
	charput(global, EOS);               /* Terminate argument   */
  }				        /* Collect all args.    */
  return(FPP_OK);                       /* Normal return        */
}


#if OK_CONCAT

INLINE FILE_LOCAL
char *doquoting(char *to, char *from)
{
  *to++ = '"';
  while (*from) {
	if (*from == '\\' || *from == '"')
	  *to++ = '\\';
	*to++ = *from++;
  }
  *to++ = '"';

  return to;
}

#endif

ReturnCode expstuff(struct Global *global,
			char *MacroName,
			char *MacroReplace)
{
  /*
   * Stuff the macro body, replacing formal parameters by actual parameters.
   */
  int c;		/* Current character	*/
  char *inp;		/* -> repl string	*/
  char *defp;		/* -> macro output buff */
  int size;		/* Actual parm. size	*/
  char *defend;		/* -> output buff end	*/
  int string_magic;	/* String formal hack	*/
  FILEINFO *file;	/* Funny #include	*/
  ReturnCode ret;
#if OK_CONCAT
  char quoting;	/* Quote macro argument */
#endif

  ret = getfile(global, NBUFF, MacroName, &file);
  if(ret)
	return(ret);
  inp = MacroReplace;			/* -> macro replacement */
  defp = file->buffer;			/* -> output buffer	*/
  defend = defp + (NBUFF - 1);              /* Note its end         */
  if (inp != NULL) {
	quoting = 0;
	while ((c = (*inp++ & 0xFF)) != EOS) {
#if OK_CONCAT
	  if (c == QUOTE_PARM) {                /* Special token for #  */
	quoting = 1;			/* set flag, for later	*/
	continue;				/* Get next character	*/
	  }
#endif
	  if (c >= MAC_PARM && c <= (MAC_PARM + PAR_MAC)) {
	string_magic = (c == (MAC_PARM + PAR_MAC));
	if (string_magic)
	  c = (*inp++ & 0xFF);
	/*
	 * Replace formal parameter by actual parameter string.
	 */
	if ((c -= MAC_PARM) < global->nargs) {
	  size = strlen(global->parlist[c]);
#if OK_CONCAT
	  if (quoting) {
		size++;
		size *= 2;		/* worst case condition */
	  }
#endif
	  if ((defp + size) >= defend) {
		cfatal(global, FATAL_OUT_OF_SPACE_IN_ARGUMENT, MacroName);
		return(FPP_OUT_OF_SPACE_IN_MACRO_EXPANSION);
	  }
	  /*
	   * Erase the extra set of quotes.
	   */
	  if (string_magic && defp[-1] == global->parlist[c][0]) {
		strcpy(defp-1, global->parlist[c]);
		defp += (size - 2);
	  }
#if OK_CONCAT
else if (quoting)
  defp = doquoting(defp, global->parlist[c]);
#endif
else {
  strcpy(defp, global->parlist[c]);
  defp += size;
}
	}
	  }
	  else if (defp >= defend) {
	cfatal(global, FATAL_OUT_OF_SPACE_IN_ARGUMENT, MacroName);
	return(FPP_OUT_OF_SPACE_IN_MACRO_EXPANSION);
	  } else
	*defp++ = c;
	  quoting = 0;
	}
  }
  *defp = EOS;
  return(FPP_OK);
}
