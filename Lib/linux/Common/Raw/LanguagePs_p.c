

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Mon May 29 12:02:23 2006
 */
/* Compiler settings for C:\fw\Output\Common\LanguagePs.idl:
	Oicf, W1, Zp8, env=Win32 (32b run)
	protocol : dce , ms_ext, c_ext, robust
	error checks: allocation ref bounds_check enum stub_data
	VC __declspec() decoration level:
		 __declspec(uuid()), __declspec(selectany), __declspec(novtable)
		 DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "LanguagePs.h"

#define TYPE_FORMAT_STRING_SIZE   2681
#define PROC_FORMAT_STRING_SIZE   21625
#define TRANSMIT_AS_TABLE_SIZE    0
#define WIRE_MARSHAL_TABLE_SIZE   2

typedef struct _MIDL_TYPE_FORMAT_STRING
	{
	short          Pad;
	unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
	} MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
	{
	short          Pad;
	unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
	} MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFwCustomExport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFwCustomExport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFwTool_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFwTool_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUndoAction_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUndoAction_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IActionHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IActionHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdvInd_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAdvInd_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdvInd2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAdvInd2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdvInd3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAdvInd3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDebugReportSink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDebugReportSink_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDebugReport_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDebugReport_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHelpTopicProvider_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IHelpTopicProvider_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFwFldSpec_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFwFldSpec_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUndoGrouper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUndoGrouper_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsString_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsString_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsTextProps_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsTextProps_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsStrFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsStrFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsPropsFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsPropsFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsStrBldr_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsStrBldr_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsIncStrBldr_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsIncStrBldr_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsPropsBldr_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsPropsBldr_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsMultiString_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsMultiString_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITsStreamWrapper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITsStreamWrapper_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleDbCommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOleDbCommand_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleDbEncap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOleDbEncap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFwMetaDataCache_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFwMetaDataCache_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDbAdmin_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDbAdmin_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimpleInit_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimpleInit_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVwGraphics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVwGraphics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVwGraphicsWin32_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVwGraphicsWin32_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVwTextSource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVwTextSource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVwJustifier_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVwJustifier_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgSegment_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgSegment_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRenderEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRenderEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRenderingFeatures_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRenderingFeatures_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IJustifyingRenderer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJustifyingRenderer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgCollation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgCollation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgWritingSystem_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgWritingSystem_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgInputMethodEditor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgInputMethodEditor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgFontManager_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgFontManager_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgCollatingEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgCollatingEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgCharacterPropertyEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgCharacterPropertyEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgSearchEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgSearchEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgStringConverter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgStringConverter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgTokenizer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgTokenizer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgSpellChecker_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgSpellChecker_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgSpellCheckFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgSpellCheckFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgNumericEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgNumericEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgWritingSystemFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgWritingSystemFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgWritingSystemFactoryBuilder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgWritingSystemFactoryBuilder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgTsStringPlusWss_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgTsStringPlusWss_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgTsDataObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgTsDataObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgKeymanHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgKeymanHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgTextServices_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgTextServices_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgCodePageEnumerator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgCodePageEnumerator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgLanguageEnumerator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgLanguageEnumerator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgIcuConverterEnumerator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgIcuConverterEnumerator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgIcuTransliteratorEnumerator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgIcuTransliteratorEnumerator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgIcuLocaleEnumerator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgIcuLocaleEnumerator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILgIcuResourceBundle_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILgIcuResourceBundle_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
	{
		0,
		{

	/* Procedure Init */


	/* Procedure CopyDatabase */


	/* Procedure BeginUndoTask */


	/* Procedure SetLabelStyles */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPath */


	/* Parameter bstrSrcPathName */


	/* Parameter bstrUndo */


	/* Parameter bstrLabel */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter locale */


	/* Parameter bstrDstPathName */


	/* Parameter bstrRedo */


	/* Parameter bstrSubLabel */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */


	/* Procedure AddFlidCharStyleMapping */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */


	/* Parameter flid */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */


	/* Parameter bstrStyle */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BuildSubItemsString */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 94 */	NdrFcShort( 0x10 ),	/* 16 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pffsp */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hvoRec */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 126 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BuildObjRefSeqString */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x6 ),	/* 6 */
/* 146 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 148 */	NdrFcShort( 0x10 ),	/* 16 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pffsp */

/* 162 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hvoRec */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 184 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BuildObjRefAtomicString */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x7 ),	/* 7 */
/* 200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pffsp */

/* 216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hvoRec */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 234 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BuildExpandableString */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 256 */	NdrFcShort( 0x10 ),	/* 16 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pffsp */

/* 270 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 274 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hvoRec */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 288 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 292 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEnumString */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x9 ),	/* 9 */
/* 308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 310 */	NdrFcShort( 0x10 ),	/* 16 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 316 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flid */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter itss */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */

/* 336 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActualLevel */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xa ),	/* 10 */
/* 356 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLevel */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hvoRec */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnActualLevel */

/* 390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BuildRecordTags */

/* 402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0xb ),	/* 11 */
/* 410 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 412 */	NdrFcShort( 0x18 ),	/* 24 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 418 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 420 */	NdrFcShort( 0x2 ),	/* 2 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLevel */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hvo */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter clid */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrStartTag */

/* 444 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 448 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pbstrEndTag */

/* 450 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 454 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPageSetupInfo */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0xc ),	/* 12 */
/* 470 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x120 ),	/* 288 */
/* 476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xd,		/* 13 */
/* 478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnOrientation */

/* 486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnPaperSize */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdxmpLeftMargin */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdxmpRightMargin */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdympTopMargin */

/* 510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdympBottomMargin */

/* 516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 518 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdympHeaderMargin */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdympFooterMargin */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdxmpPageWidth */

/* 534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 536 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdympPageHeight */

/* 540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 542 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptssHeader */

/* 546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 548 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 550 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pptssFooter */

/* 552 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 554 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 556 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostProcessFile */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0xd ),	/* 13 */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 580 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrInputFile */

/* 588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstrOutputFile */

/* 594 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 598 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanUndo */


	/* Procedure IncludeObjectData */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0xe ),	/* 14 */
/* 614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x22 ),	/* 34 */
/* 620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfCanUndo */


	/* Parameter pbWriteObjData */

/* 630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewMainWnd */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x3 ),	/* 3 */
/* 650 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 652 */	NdrFcShort( 0x28 ),	/* 40 */
/* 654 */	NdrFcShort( 0x40 ),	/* 64 */
/* 656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 658 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x2 ),	/* 2 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrServerName */

/* 666 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 670 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDbName */

/* 672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 676 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hvoLangProj */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hvoMainObj */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter encUi */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nTool */

/* 696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nParam */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppidNew */

/* 708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phtool */

/* 714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 716 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewMainWndWithSel */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 736 */	NdrFcShort( 0x48 ),	/* 72 */
/* 738 */	NdrFcShort( 0x40 ),	/* 64 */
/* 740 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x10,		/* 16 */
/* 742 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x4 ),	/* 4 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrServerName */

/* 750 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 754 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDbName */

/* 756 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 760 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hvoLangProj */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hvoMainObj */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter encUi */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nTool */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nParam */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prghvo */

/* 792 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 794 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 796 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Parameter chvo */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgflid */

/* 804 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 806 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 808 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter cflid */

/* 810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 812 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichCur */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nView */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppidNew */

/* 828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 830 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phtool */

/* 834 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 836 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsLetter */


	/* Procedure CloseMainWnd */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x5 ),	/* 5 */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	NdrFcShort( 0x22 ),	/* 34 */
/* 860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */


	/* Parameter htool */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */


	/* Parameter pfCancelled */

/* 876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseDbAndWindows */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x6 ),	/* 6 */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	NdrFcShort( 0x6 ),	/* 6 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 904 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x2 ),	/* 2 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSvrName */

/* 912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDbName */

/* 918 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fOkToClose */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Undo */

/* 936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x3 ),	/* 3 */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x22 ),	/* 34 */
/* 950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSuccess */

/* 960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Redo */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x22 ),	/* 34 */
/* 986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSuccess */

/* 996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ContinueUndoTask */


	/* Procedure Commit */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HideLabel */


	/* Procedure IsDataChange */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfHide */


	/* Parameter pfRet */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FontIsValid */


	/* Procedure CommitTrans */


	/* Procedure NextStage */


	/* Procedure EndUndoTask */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShutdownAllFactories */


	/* Procedure RefreshFontList */


	/* Procedure EndOuterUndoTask */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1120 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BreakUndoTask */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1150 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrUndo */

/* 1158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRedo */

/* 1164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartSeq */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrUndo */

/* 1200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1204 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRedo */

/* 1206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1210 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter puact */

/* 1212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1216 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddAction */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puact */

/* 1248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1252 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WinCollation */


	/* Procedure get_FwDatabaseDir */


	/* Procedure SetSavePoint */


	/* Procedure GetUndoText */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0xa ),	/* 10 */
/* 1268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1276 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstr */


	/* Parameter pbstr */


	/* Parameter pbstrUndoText */

/* 1284 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StringEx */


	/* Procedure GetUndoTextN */

/* 1296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0xb ),	/* 11 */
/* 1304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1312 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irb */


	/* Parameter iAct */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstrUndoText */

/* 1326 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1330 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IcuResourceName */


	/* Procedure get_ClassName */


	/* Procedure GetRedoText */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0xc ),	/* 12 */
/* 1346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1354 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstrClsName */


	/* Parameter pbstrRedoText */

/* 1362 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldLabel */


	/* Procedure GetRedoTextN */

/* 1374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0xd ),	/* 13 */
/* 1382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1388 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1390 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */


	/* Parameter iAct */

/* 1398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrFieldLabel */


	/* Parameter pbstrRedoText */

/* 1404 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1408 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanRedo */

/* 1416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0xf ),	/* 15 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfCanRedo */

/* 1440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1444 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Undo */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pures */

/* 1476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Redo */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pures */

/* 1512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveWritingSystems */


	/* Procedure Commit */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 1554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserWs */


	/* Procedure get_FontDescent */


	/* Procedure get_ClassCount */


	/* Procedure Mark */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pws */


	/* Parameter pyRet */


	/* Parameter pcclid */


	/* Parameter phMark */

/* 1608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CollapseToMark */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1636 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hMark */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrUndo */

/* 1650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1654 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRedo */

/* 1656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscardToMark */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hMark */

/* 1692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XUnitsPerInch */


	/* Procedure get_TopMarkHandle */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pxInch */


	/* Parameter phMark */

/* 1728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TasksSinceMark */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1748 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1750 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1752 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fUndo */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pf */

/* 1770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_YUnitsPerInch */


	/* Procedure get_UndoableActionCount */

/* 1782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1790 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1796 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1798 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pyInch */


	/* Parameter pcSeq */

/* 1806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UndoableSequenceCount */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcSeq */

/* 1842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RedoableSequenceCount */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcSeq */

/* 1878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UndoGrouper */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppundg */

/* 1914 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 1920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UndoGrouper */

/* 1926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1942 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pundg */

/* 1950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1954 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Visibility */


	/* Procedure Step */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1976 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1978 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nVis */


	/* Parameter nStepAmt */

/* 1986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetReplacePattern */


	/* Procedure Append */


	/* Procedure put_Title */

/* 1998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2014 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPattern */


	/* Parameter bstrIns */


	/* Parameter bstrTitle */

/* 2022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2026 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DetachDatabase */


	/* Procedure put_Contents */


	/* Procedure put_Message */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2050 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrDatabaseName */


	/* Parameter bstr */


	/* Parameter bstrMessage */

/* 2058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveEngine */


	/* Procedure put_Position */

/* 2070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */


	/* Parameter nPos */

/* 2094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_StepSize */

/* 2106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2120 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nStepInc */

/* 2130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRange */

/* 2142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2158 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMin */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMax */

/* 2172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Report */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2200 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nReportType */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter szMsg */

/* 2214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */


	/* Procedure ShowAssertMessageBox */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2236 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fForce */


	/* Parameter fShowMessageBox */

/* 2250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2254 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSink */

/* 2262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSink */

/* 2286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2290 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHelpString */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2306 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2314 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPropName */

/* 2322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter iKey */

/* 2328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrPropValue */

/* 2334 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2338 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NLayout */


	/* Procedure GetClipboardType */


	/* Procedure get_NameWsCount */


	/* Procedure get_Length */


	/* Procedure get_Length */


	/* Procedure get_Length */


	/* Procedure get_Visibility */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2360 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2362 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclayout */


	/* Parameter type */


	/* Parameter pcws */


	/* Parameter pcch */


	/* Parameter pcch */


	/* Parameter pcch */


	/* Parameter pnVis */

/* 2370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HideLabel */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2392 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fHide */

/* 2406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Label */

/* 2418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ptssLabel */

/* 2442 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Label */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptssLabel */

/* 2478 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Locale */


	/* Procedure put_WinLCID */


	/* Procedure put_FieldId */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLocale */


	/* Parameter nCode */


	/* Parameter flid */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */


	/* Procedure get_FieldId */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0xa ),	/* 10 */
/* 2534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2540 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2542 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcrb */


	/* Parameter pflid */

/* 2550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_WinCollation */


	/* Procedure put_ClassName */

/* 2562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0xb ),	/* 11 */
/* 2570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2576 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2578 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */


	/* Parameter bstrClsName */

/* 2586 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2590 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 2592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IcuResourceName */


	/* Procedure put_FieldName */

/* 2598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0xd ),	/* 13 */
/* 2606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2614 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */


	/* Parameter bstrFieldName */

/* 2622 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2626 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 2628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IcuResourceText */


	/* Procedure get_Database */


	/* Procedure get_FieldName */

/* 2634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0xe ),	/* 14 */
/* 2642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2648 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2650 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstrDb */


	/* Parameter pbstrFieldName */

/* 2658 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2662 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IcuResourceText */


	/* Procedure put_Style */

/* 2670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0xf ),	/* 15 */
/* 2678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2686 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */


	/* Parameter bstrStyle */

/* 2694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2698 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 2700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Style */

/* 2706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2722 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrStyle */

/* 2730 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2734 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 2736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_WritingSystem */


	/* Procedure ColValWasNull */


	/* Procedure get_StringCount */


	/* Procedure get_IntPropCount */


	/* Procedure get_IntPropCount */


	/* Procedure BeginGroup */

/* 2742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2758 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclocale */


	/* Parameter pctrans */


	/* Parameter pcconv */


	/* Parameter pws */


	/* Parameter pfIsNull */


	/* Parameter pctss */


	/* Parameter pcv */


	/* Parameter pcv */


	/* Parameter phndl */

/* 2766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetOptions */


	/* Procedure put_ForeColor */


	/* Procedure EndGroup */

/* 2778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2792 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2794 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter grfsplc */


	/* Parameter clr */


	/* Parameter hndl */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BackColor */


	/* Procedure CancelGroup */

/* 2814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2828 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2830 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clr */


	/* Parameter hndl */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */


	/* Procedure get_Text */


	/* Procedure get_Text */

/* 2850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2864 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2866 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstr */


	/* Parameter pbstr */

/* 2874 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2878 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameWsCount */


	/* Procedure get_SegDatMaxLength */


	/* Procedure get_RunCount */


	/* Procedure get_RunCount */

/* 2886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2902 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcws */


	/* Parameter cb */


	/* Parameter pcrun */


	/* Parameter pcrun */

/* 2910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInt */


	/* Procedure get_RunAt */


	/* Procedure get_RunAt */

/* 2922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2934 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2936 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2938 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iColIndex */


	/* Parameter ich */


	/* Parameter ich */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnValue */


	/* Parameter pirun */


	/* Parameter pirun */

/* 2952 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MinOfRun */

/* 2964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2976 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2978 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 2988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMin */

/* 2994 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LimOfRun */

/* 3006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3014 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3018 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3022 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 3030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 3036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBoundsOfRun */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3056 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3060 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMin */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfoAt */

/* 3096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0xa ),	/* 10 */
/* 3104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3108 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3110 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 3120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 3126 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 3132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3136 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 3138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfo */

/* 3144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0xb ),	/* 11 */
/* 3152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3156 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 3168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 3174 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3178 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 3180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldName */


	/* Procedure get_RunText */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0xc ),	/* 12 */
/* 3200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3208 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */


	/* Parameter irun */

/* 3216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrFieldName */


	/* Parameter pbstr */

/* 3222 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3226 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 3228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChars */

/* 3234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0xd ),	/* 13 */
/* 3242 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3250 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 3264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 3270 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3274 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertiesAt */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 3306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppttp */

/* 3312 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 3318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Properties */

/* 3324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3338 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 3348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppttp */

/* 3354 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3358 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBldr */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptsb */

/* 3390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Return value */

/* 3396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIncBldr */

/* 3402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptisb */

/* 3426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3430 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBldrClsid */


	/* Procedure GetFactoryClsid */

/* 3438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */


	/* Parameter pclsid */

/* 3462 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3466 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */


	/* Return value */

/* 3468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeFmt */


	/* Procedure SerializeFmt */

/* 3474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */


	/* Parameter pstrm */

/* 3498 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3502 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */


	/* Return value */

/* 3504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeFmtRgb */


	/* Procedure SerializeFmtRgb */

/* 3510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3518 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3522 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3524 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3526 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgb */


	/* Parameter prgb */

/* 3534 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3538 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbMax */


	/* Parameter cbMax */

/* 3540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */


	/* Parameter pcbNeeded */

/* 3546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Equals */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ptss */

/* 3582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pfEqual */

/* 3588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAsXml */

/* 3600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3608 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3610 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 3624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3628 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pwsf */

/* 3630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3634 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter cchIndent */

/* 3636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 3642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fWriteObjData */

/* 3648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3650 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3652 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3656 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsNormalizedForm */

/* 3660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3672 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nm */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3688 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 3690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3694 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NormalizedForm */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3716 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nm */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3730 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pptssRet */

/* 3732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3736 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIntProp */


	/* Procedure GetIntProp */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3752 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3756 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 3760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iv */


	/* Parameter iv */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptpt */


	/* Parameter ptpt */

/* 3774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnVar */


	/* Parameter pnVar */

/* 3780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnVal */


	/* Parameter pnVal */

/* 3786 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIntPropValues */


	/* Procedure GetIntPropValues */

/* 3798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3804 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3806 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3810 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */


	/* Parameter tpt */

/* 3822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnVar */


	/* Parameter pnVar */

/* 3828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnVal */


	/* Parameter pnVal */

/* 3834 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FieldCount */


	/* Procedure get_StrPropCount */


	/* Procedure get_StrPropCount */

/* 3846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcflid */


	/* Parameter pcv */


	/* Parameter pcv */

/* 3870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStrProp */


	/* Procedure GetStrProp */

/* 3882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3894 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3896 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3898 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iv */


	/* Parameter iv */

/* 3906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptpt */


	/* Parameter ptpt */

/* 3912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrVal */


	/* Parameter pbstrVal */

/* 3918 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3922 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 3924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStrFromWs */


	/* Procedure GetOwnClsName */


	/* Procedure GetStrPropValue */


	/* Procedure GetStrPropValue */

/* 3930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3946 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wsId */


	/* Parameter luFlid */


	/* Parameter tpt */


	/* Parameter tpt */

/* 3954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstrOwnClsName */


	/* Parameter pbstrVal */


	/* Parameter pbstrVal */

/* 3960 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3964 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBldr */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3986 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptpb */

/* 3996 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4000 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFactoryClsid */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0xa ),	/* 10 */
/* 4016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */

/* 4032 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4036 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 4038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 4044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0xb ),	/* 11 */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 4068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4072 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeRgb */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0xc ),	/* 12 */
/* 4088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4096 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgb */

/* 4104 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbMax */

/* 4110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcb */

/* 4116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeRgPropsRgb */

/* 4128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0xd ),	/* 13 */
/* 4136 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4138 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4144 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cpttp */

/* 4152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpttp */

/* 4158 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 4160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4162 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Parameter rgich */

/* 4164 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 4166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgb */

/* 4170 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4174 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */

	/* Parameter cbMax */

/* 4176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcb */

/* 4182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4190 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAsXml */

/* 4194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0xe ),	/* 14 */
/* 4202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4210 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 4218 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4222 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pwsf */

/* 4224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4228 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter cchIndent */

/* 4230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeStringStreams */

/* 4242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4256 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrmTxt */

/* 4266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4270 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pstrmFmt */

/* 4272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4276 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pptss */

/* 4278 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4282 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeString */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4306 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTxt */

/* 4314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pstrmFmt */

/* 4320 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pptss */

/* 4326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4330 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeStringRgb */

/* 4338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4346 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4354 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTxt */

/* 4362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4366 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter prgbFmt */

/* 4368 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4372 */	NdrFcShort( 0x190 ),	/* Type Offset=400 */

	/* Parameter cbFmt */

/* 4374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 4380 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4384 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeStringRgch */

/* 4392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4400 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4402 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4404 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchTxt */

/* 4416 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4420 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Parameter pcchTxt */

/* 4422 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgbFmt */

/* 4428 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4432 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Parameter pcbFmt */

/* 4434 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 4440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4442 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4444 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4448 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeString */

/* 4452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4468 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 4476 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4480 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ws */

/* 4482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 4488 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4492 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeStringRgch */

/* 4500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4508 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4510 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4514 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4516 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgch */

/* 4524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4528 */	NdrFcShort( 0x1bc ),	/* Type Offset=444 */

	/* Parameter cch */

/* 4530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 4536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 4542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4546 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeStringWithPropsRgch */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4562 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4570 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgch */

/* 4578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4582 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Parameter cch */

/* 4584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pttp */

/* 4590 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4594 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter pptss */

/* 4596 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4598 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4600 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4604 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBldr */

/* 4608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0xa ),	/* 10 */
/* 4616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptsb */

/* 4632 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4636 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIncBldr */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0xb ),	/* 11 */
/* 4652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptisb */

/* 4668 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RunCount */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0xc ),	/* 12 */
/* 4688 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4696 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgbFmt */

/* 4704 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4708 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbFmt */

/* 4710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcrun */

/* 4716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4724 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfoAt */

/* 4728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4734 */	NdrFcShort( 0xd ),	/* 13 */
/* 4736 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4738 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4740 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4742 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4744 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgbFmt */

/* 4752 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4756 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbFmt */

/* 4758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ich */

/* 4764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 4770 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4772 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4774 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 4776 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4778 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4780 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfo */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0xe ),	/* 14 */
/* 4796 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4800 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4802 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4804 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgbFmt */

/* 4812 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbFmt */

/* 4818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter irun */

/* 4824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 4830 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4834 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 4836 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4838 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4840 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 4842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4844 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeProps */

/* 4848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4856 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4862 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 4872 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4876 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter ppttp */

/* 4878 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4882 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 4884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializePropsRgb */

/* 4890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4898 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4900 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4902 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4904 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4906 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgb */

/* 4914 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4918 */	NdrFcShort( 0x1d4 ),	/* Type Offset=468 */

	/* Parameter pcb */

/* 4920 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppttp */

/* 4926 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4930 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 4932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeserializeRgPropsRgb */

/* 4938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4946 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4950 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4952 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4954 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4956 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cpttpMax */

/* 4962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgb */

/* 4968 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4972 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter pcb */

/* 4974 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcpttpRet */

/* 4980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpttp */

/* 4986 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4988 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4990 */	NdrFcShort( 0x1f4 ),	/* Type Offset=500 */

	/* Parameter rgich */

/* 4992 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4994 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4996 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 4998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5000 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeProps */

/* 5004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5012 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5014 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5018 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5020 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrStyle */

/* 5028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5032 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ws */

/* 5034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ows */

/* 5040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppttp */

/* 5046 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5050 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5054 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakePropsRgch */

/* 5058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5066 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5068 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5072 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5074 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchStyle */

/* 5082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5086 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Parameter cch */

/* 5088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 5094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ows */

/* 5100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppttp */

/* 5106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5108 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5110 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropsBldr */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptpb */

/* 5142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5146 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Return value */

/* 5148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBoundsOfRun */

/* 5154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5166 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 5178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMin */

/* 5184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 5190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfoAt */

/* 5202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5210 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5214 */	NdrFcShort( 0x38 ),	/* 56 */
/* 5216 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 5226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 5232 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 5234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5236 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 5238 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5242 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FetchRunInfo */

/* 5250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5258 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5262 */	NdrFcShort( 0x38 ),	/* 56 */
/* 5264 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 5274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptri */

/* 5280 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 5282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5284 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter ppttp */

/* 5286 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5290 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RunText */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0xa ),	/* 10 */
/* 5306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5314 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 5322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 5328 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5332 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 5334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChars */

/* 5340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0xb ),	/* 11 */
/* 5348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5350 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5356 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 5376 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5380 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 5382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertiesAt */

/* 5388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0xd ),	/* 13 */
/* 5396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5402 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 5412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pttp */

/* 5418 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5422 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Properties */

/* 5430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0xe ),	/* 14 */
/* 5438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5444 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5446 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter irun */

/* 5454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pttp */

/* 5460 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5464 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 5466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Replace */

/* 5472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0xf ),	/* 15 */
/* 5480 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5482 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5486 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5488 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrIns */

/* 5508 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5512 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pttp */

/* 5514 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5518 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 5520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceTsString */

/* 5526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5534 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5536 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5540 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5542 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptssIns */

/* 5562 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5566 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceRgch */

/* 5574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5582 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5584 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5588 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5590 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchIns */

/* 5610 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5614 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter cchIns */

/* 5616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pttp */

/* 5622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5624 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5626 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 5628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5630 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProperties */

/* 5634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5640 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5642 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5644 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5650 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pttp */

/* 5670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5674 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 5676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetIntPropValues */

/* 5682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5690 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5692 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5696 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tpt */

/* 5718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVar */

/* 5724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVal */

/* 5730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStrPropValue */

/* 5742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5748 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5750 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5752 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5756 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5758 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 5766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 5772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tpt */

/* 5778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5788 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5792 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 5796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5802 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5810 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5812 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptss */

/* 5820 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5824 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 5826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReleaseDC */


	/* Procedure Clear */

/* 5832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 5856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AppendTsString */

/* 5862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5868 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5876 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5878 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ptssIns */

/* 5886 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5888 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5890 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5894 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AppendRgch */

/* 5898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5904 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5906 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5912 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5914 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIns */

/* 5922 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5924 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5926 */	NdrFcShort( 0x236 ),	/* Type Offset=566 */

	/* Parameter cchIns */

/* 5928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5930 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5936 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetIntPropValues */

/* 5940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5948 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5950 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */

/* 5964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVar */

/* 5970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVal */

/* 5976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStrPropValue */

/* 5988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5996 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6004 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */

/* 6012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 6018 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6022 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 6030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6036 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6038 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6046 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptss */

/* 6054 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6058 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 6060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlushIgnoreList */


	/* Procedure Clear */

/* 6066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0xa ),	/* 10 */
/* 6074 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6080 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6082 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 6090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIncBldrClsid */

/* 6096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6102 */	NdrFcShort( 0xb ),	/* 11 */
/* 6104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x4c ),	/* 76 */
/* 6110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */

/* 6120 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 6122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6124 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 6126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeFmt */

/* 6132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6138 */	NdrFcShort( 0xc ),	/* 12 */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 6156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6160 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */

/* 6162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SerializeFmtRgb */

/* 6168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0xd ),	/* 13 */
/* 6176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6180 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6184 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgb */

/* 6192 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 6194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6196 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbMax */

/* 6198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 6204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6212 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetIntPropValues */

/* 6216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6222 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */

/* 6240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVar */

/* 6246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nVal */

/* 6252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStrPropValue */

/* 6264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6270 */	NdrFcShort( 0xa ),	/* 10 */
/* 6272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */

/* 6288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 6294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6298 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStrPropValueRgch */

/* 6306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0xb ),	/* 11 */
/* 6314 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6316 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6322 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tpt */

/* 6330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgchVal */

/* 6336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6340 */	NdrFcShort( 0x190 ),	/* Type Offset=400 */

	/* Parameter nValLength */

/* 6342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextProps */

/* 6354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0xc ),	/* 12 */
/* 6362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppttp */

/* 6378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6382 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 6384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStringFromIndex */

/* 6390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iws */

/* 6414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pws */

/* 6420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 6426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6430 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 6432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 6438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6444 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6452 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 6462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 6468 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6472 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 6474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_String */

/* 6480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6486 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 6504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptss */

/* 6510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6514 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 6516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Stream */

/* 6522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6528 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppstrm */

/* 6546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6550 */	NdrFcShort( 0x23e ),	/* Type Offset=574 */

	/* Return value */

/* 6552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */


	/* Procedure get_InitializationData */


	/* Procedure get_Contents */

/* 6558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6564 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6572 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6574 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrKey */


	/* Parameter pbstr */


	/* Parameter pbstr */

/* 6582 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6586 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteTssAsXml */

/* 6594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6602 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6604 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6608 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6610 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ptss */

/* 6618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6622 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pwsf */

/* 6624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6628 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter cchIndent */

/* 6630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ws */

/* 6636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6638 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fWriteObjData */

/* 6642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6644 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6646 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6650 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTssFromXml */

/* 6654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 6678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6682 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter pptss */

/* 6684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6688 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 6690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecCommand */

/* 6696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6712 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSqlStatement */

/* 6720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6724 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nStatementType */

/* 6726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColValue */

/* 6738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6744 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6746 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6748 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6750 */	NdrFcShort( 0x3e ),	/* 62 */
/* 6752 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 6754 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iluColIndex */

/* 6762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgluDataBuffer */

/* 6768 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 6770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6772 */	NdrFcShort( 0x246 ),	/* Type Offset=582 */

	/* Parameter cbBufferLength */

/* 6774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbAmtBuffUsed */

/* 6780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfIsNull */

/* 6786 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6790 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cbPad */

/* 6792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParameter */

/* 6804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6810 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6812 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6816 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6818 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6820 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iluColIndex */

/* 6828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgluDataBuffer */

/* 6834 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 6836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6838 */	NdrFcShort( 0x246 ),	/* Type Offset=582 */

	/* Parameter cluBufferLength */

/* 6840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfIsNull */

/* 6846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6848 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6850 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6854 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRowset */

/* 6858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRowsBuffered */

/* 6882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */

/* 6894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6900 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6902 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6908 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punkSession */

/* 6918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6922 */	NdrFcShort( 0x252 ),	/* Type Offset=594 */

	/* Parameter pfistLog */

/* 6924 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6928 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */

/* 6930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NextRow */

/* 6936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6942 */	NdrFcShort( 0xa ),	/* 10 */
/* 6944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6948 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfMoreRows */

/* 6960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6964 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetParameter */

/* 6972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0xb ),	/* 11 */
/* 6980 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6982 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6988 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6992 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iluParamIndex */

/* 6996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 7002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrParamName */

/* 7008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7012 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nDataType */

/* 7014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7016 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7018 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter prgluDataBuffer */

/* 7020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7022 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7024 */	NdrFcShort( 0x268 ),	/* Type Offset=616 */

	/* Parameter cluBufferLength */

/* 7026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7028 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetByteBuffParameter */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0xc ),	/* 12 */
/* 7046 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7048 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iluParamIndex */

/* 7062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 7068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrParamName */

/* 7074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7078 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter prgbDataBuffer */

/* 7080 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7084 */	NdrFcShort( 0x278 ),	/* Type Offset=632 */

	/* Parameter cluBufferLength */

/* 7086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7094 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStringParameter */

/* 7098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7104 */	NdrFcShort( 0xd ),	/* 13 */
/* 7106 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7108 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7112 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7114 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7118 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iluParamIndex */

/* 7122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 7128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrParamName */

/* 7134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7138 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter prgchDataBuffer */

/* 7140 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7144 */	NdrFcShort( 0x288 ),	/* Type Offset=648 */

	/* Parameter cluBufferLength */

/* 7146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */


	/* Procedure Init */


	/* Procedure Setup */


	/* Procedure BeginTrans */

/* 7158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7164 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCommand */

/* 7188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7194 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7202 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppodc */

/* 7212 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7216 */	NdrFcShort( 0x294 ),	/* Type Offset=660 */

	/* Return value */

/* 7218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */

/* 7224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7232 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7240 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7244 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrServer */

/* 7248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7252 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDatabase */

/* 7254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7258 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pfistLog */

/* 7260 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7264 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter olt */

/* 7266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7270 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter nmsTimeout */

/* 7272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7280 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsTransactionOpen */

/* 7284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfTransactionOpen */

/* 7308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7312 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RollbackTrans */

/* 7320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RollbackSavePoint */

/* 7350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7366 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSavePoint */

/* 7374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7378 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FwTemplateDir */


	/* Procedure SetSavePointOrBeginTrans */

/* 7386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7392 */	NdrFcShort( 0xb ),	/* 11 */
/* 7394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7400 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7402 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */


	/* Parameter pbstr */

/* 7410 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7414 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 7416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitMSDE */

/* 7422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7428 */	NdrFcShort( 0xc ),	/* 12 */
/* 7430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7432 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfistLog */

/* 7446 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7450 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter fForce */

/* 7452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7456 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Server */

/* 7464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7470 */	NdrFcShort( 0xd ),	/* 13 */
/* 7472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7480 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrSvr */

/* 7488 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7492 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 7494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFreeLogKb */

/* 7500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0xf ),	/* 15 */
/* 7508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nReservespace */

/* 7524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnKbFree */

/* 7530 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */

/* 7542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7548 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7556 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7558 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pode */

/* 7566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7570 */	NdrFcShort( 0x2aa ),	/* Type Offset=682 */

	/* Return value */

/* 7572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reload */

/* 7578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7588 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7592 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7594 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pode */

/* 7602 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7606 */	NdrFcShort( 0x2aa ),	/* Type Offset=682 */

	/* Parameter fKeepVirtuals */

/* 7608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7612 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitXml */

/* 7620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7628 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7630 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7636 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPathname */

/* 7644 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7648 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fClearPrevCache */

/* 7650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7654 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldIds */

/* 7662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7668 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7676 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7678 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cflid */

/* 7686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgflid */

/* 7692 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 7694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7696 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 7698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDstClsName */

/* 7704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7718 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7720 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrDstClsName */

/* 7734 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7738 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 7740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwnClsId */

/* 7746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0xa ),	/* 10 */
/* 7754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pluOwnClsid */

/* 7776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDstClsId */

/* 7788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0xb ),	/* 11 */
/* 7796 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pluDstClsid */

/* 7818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldHelp */

/* 7830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0xe ),	/* 14 */
/* 7838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7846 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrFieldHelp */

/* 7860 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7864 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 7866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldXml */

/* 7872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7878 */	NdrFcShort( 0xf ),	/* 15 */
/* 7880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7888 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrFieldXml */

/* 7902 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7906 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 7908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldListRoot */

/* 7914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7920 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter piListRoot */

/* 7944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldWs */

/* 7956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7962 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 7980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter piWs */

/* 7986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WritingSystem */


	/* Procedure GetFieldType */

/* 7998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8004 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8010 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8012 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8014 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */


	/* Parameter luFlid */

/* 8022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pws */


	/* Parameter piType */

/* 8028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsValidClass */

/* 8040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8048 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8050 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8052 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luFlid */

/* 8064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter luClid */

/* 8070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfValid */

/* 8076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8080 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassIds */

/* 8088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8094 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8104 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cclid */

/* 8112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgclid */

/* 8118 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8122 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 8124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassName */

/* 8130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8136 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8144 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8146 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrClassName */

/* 8160 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8164 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 8166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAbstract */

/* 8172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8180 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8184 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfAbstract */

/* 8202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8206 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToTitleCh */


	/* Procedure GetBaseClsId */

/* 8214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8220 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8222 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8230 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */


	/* Parameter luClid */

/* 8238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pch */


	/* Parameter pluClid */

/* 8244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBaseClsName */

/* 8256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8262 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8270 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8272 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrBaseClsName */

/* 8286 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8290 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 8292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFields */

/* 8298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8304 */	NdrFcShort( 0x1a ),	/* 26 */
/* 8306 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8308 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8310 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 8314 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fIncludeSuperclasses */

/* 8328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8332 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter grfcpt */

/* 8334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cflidMax */

/* 8340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgflid */

/* 8346 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8350 */	NdrFcShort( 0x2c0 ),	/* Type Offset=704 */

	/* Parameter pcflid */

/* 8352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8354 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8360 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassId */

/* 8364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0x1b ),	/* 27 */
/* 8372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8380 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrClassName */

/* 8388 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8392 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pluClid */

/* 8394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldId */

/* 8406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8412 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8414 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8416 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8418 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8422 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrClassName */

/* 8430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8434 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFieldName */

/* 8436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8440 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fIncludeBaseClasses */

/* 8442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8446 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pluFlid */

/* 8448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8456 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldId2 */

/* 8460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8466 */	NdrFcShort( 0x1d ),	/* 29 */
/* 8468 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8470 */	NdrFcShort( 0xe ),	/* 14 */
/* 8472 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8476 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrFieldName */

/* 8490 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8494 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fIncludeBaseClasses */

/* 8496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8500 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pluFlid */

/* 8502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8510 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDirectSubclasses */

/* 8514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8522 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8524 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8526 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8528 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8530 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cluMax */

/* 8544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcluOut */

/* 8550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgluSubclasses */

/* 8556 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8560 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Return value */

/* 8562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllSubclasses */

/* 8568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x1f ),	/* 31 */
/* 8576 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8578 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8584 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter luClid */

/* 8592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cluMax */

/* 8598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcluOut */

/* 8604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgluSubclasses */

/* 8610 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8612 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8614 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Return value */

/* 8616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8618 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddVirtualProp */

/* 8622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8628 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8630 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8636 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8638 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8642 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrClass */

/* 8646 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8650 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrField */

/* 8652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8656 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter luFlid */

/* 8658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 8664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8666 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8672 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachDatabase */

/* 8676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8682 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8684 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8696 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrDatabaseName */

/* 8700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8704 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPathName */

/* 8706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenameDatabase */

/* 8718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8724 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8726 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8728 */	NdrFcShort( 0xc ),	/* 12 */
/* 8730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8732 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 8734 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8738 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrDirName */

/* 8742 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8744 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8746 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOldName */

/* 8748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8752 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrNewName */

/* 8754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8758 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fDetachBefore */

/* 8760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8762 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8764 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fAttachAfter */

/* 8766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8768 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8770 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8774 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_LogStream */

/* 8778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8784 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8794 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 8802 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8806 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Return value */

/* 8808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FwRootDir */

/* 8814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8828 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8830 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 8838 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8842 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 8844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FwMigrationScriptDir */

/* 8850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8864 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8866 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 8874 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8878 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 8880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitNew */

/* 8886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8892 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8902 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgb */

/* 8910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8914 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cb */

/* 8916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvertRect */

/* 8928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8934 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8936 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8938 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8942 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 8944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xLeft */

/* 8952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yTop */

/* 8958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xRight */

/* 8964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yBottom */

/* 8970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8978 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetGlyphAttributeInt */


	/* Procedure DrawRectangle */

/* 8982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8990 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8992 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 8998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iGlyph */


	/* Parameter xLeft */

/* 9006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter kjgatId */


	/* Parameter yTop */

/* 9012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLevel */


	/* Parameter xRight */

/* 9018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */


	/* Parameter yBottom */

/* 9024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 9030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9032 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawHorzLine */

/* 9036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9042 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9044 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9046 */	NdrFcShort( 0x44 ),	/* 68 */
/* 9048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 9052 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xLeft */

/* 9060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xRight */

/* 9066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 9072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dyHeight */

/* 9078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9080 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cdx */

/* 9084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9086 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgdx */

/* 9090 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9092 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9094 */	NdrFcShort( 0x2e6 ),	/* Type Offset=742 */

	/* Parameter pdxStart */

/* 9096 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 9098 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9104 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawLine */

/* 9108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9116 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9118 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 9124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xLeft */

/* 9132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yTop */

/* 9138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xRight */

/* 9144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yBottom */

/* 9150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 9162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9170 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9172 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9178 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 9186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 9192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cch */

/* 9198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 9204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9208 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter xStretch */

/* 9210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9218 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawTextExt */

/* 9222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0xa ),	/* 10 */
/* 9230 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9232 */	NdrFcShort( 0x70 ),	/* 112 */
/* 9234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 9238 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 9246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 9252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cch */

/* 9258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchw */

/* 9264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9268 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter uOptions */

/* 9270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prect */

/* 9276 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 9278 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9280 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter prgdx */

/* 9282 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 9284 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9290 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextExtent */

/* 9294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9300 */	NdrFcShort( 0xb ),	/* 11 */
/* 9302 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9306 */	NdrFcShort( 0x40 ),	/* 64 */
/* 9308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9310 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cch */

/* 9318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 9324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9328 */	NdrFcShort( 0x314 ),	/* Type Offset=788 */

	/* Parameter px */

/* 9330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter py */

/* 9336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextLeadWidth */

/* 9348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0xc ),	/* 12 */
/* 9356 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9364 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cch */

/* 9372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 9378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9382 */	NdrFcShort( 0x314 ),	/* Type Offset=788 */

	/* Parameter ich */

/* 9384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xStretch */

/* 9390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter px */

/* 9396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9404 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClipRect */

/* 9408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9414 */	NdrFcShort( 0xd ),	/* 13 */
/* 9416 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0x78 ),	/* 120 */
/* 9422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 9424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pxLeft */

/* 9432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyTop */

/* 9438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pxRight */

/* 9444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyBottom */

/* 9450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFontEmSquare */

/* 9462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0xe ),	/* 14 */
/* 9470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pxyFontEmSquare */

/* 9486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGlyphMetrics */

/* 9498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9504 */	NdrFcShort( 0xf ),	/* 15 */
/* 9506 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9510 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 9512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x8,		/* 8 */
/* 9514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter chw */

/* 9522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter psBoundingWidth */

/* 9528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyBoundingHeight */

/* 9534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pxBoundingX */

/* 9540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyBoundingY */

/* 9546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9548 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pxAdvanceX */

/* 9552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9554 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyAdvanceY */

/* 9558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9560 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9566 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFontData */

/* 9570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 9586 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nTableId */

/* 9594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbTableSz */

/* 9600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrTableData */

/* 9606 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9610 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 9612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFontDataRgch */

/* 9618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9624 */	NdrFcShort( 0x11 ),	/* 17 */
/* 9626 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9628 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9630 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 9634 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nTableId */

/* 9642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbTableSz */

/* 9648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 9654 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 9656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9658 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchMax */

/* 9660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure XYFromGlyphPoint */

/* 9672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9678 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9680 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9684 */	NdrFcShort( 0x40 ),	/* 64 */
/* 9686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 9688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter chw */

/* 9696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nPoint */

/* 9702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pxRet */

/* 9708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyRet */

/* 9714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9716 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9722 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FontAscent */

/* 9726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9732 */	NdrFcShort( 0x13 ),	/* 19 */
/* 9734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter py */

/* 9750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FontCharProperties */

/* 9762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9768 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9774 */	NdrFcShort( 0x13c ),	/* 316 */
/* 9776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pchrp */

/* 9786 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 9788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9790 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Return value */

/* 9792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_XUnitsPerInch */

/* 9798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter xInch */

/* 9822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_YUnitsPerInch */

/* 9834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9840 */	NdrFcShort( 0x1a ),	/* 26 */
/* 9842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9850 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter yInch */

/* 9858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetupGraphics */

/* 9870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0x1b ),	/* 27 */
/* 9878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9880 */	NdrFcShort( 0x134 ),	/* 308 */
/* 9882 */	NdrFcShort( 0x13c ),	/* 316 */
/* 9884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pchrp */

/* 9894 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 9896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9898 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Return value */

/* 9900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PushClipRect */

/* 9906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0x1c ),	/* 28 */
/* 9914 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9916 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rcClip */

/* 9930 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 9932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9934 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Return value */

/* 9936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9938 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PopClipRect */

/* 9942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9948 */	NdrFcShort( 0x1d ),	/* 29 */
/* 9950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawPolygon */

/* 9972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9978 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9988 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cvpnt */

/* 9996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgvpnt */

/* 10002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10006 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Return value */

/* 10008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenderPicture */

/* 10014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10020 */	NdrFcShort( 0x1f ),	/* 31 */
/* 10022 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 10024 */	NdrFcShort( 0x74 ),	/* 116 */
/* 10026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 10030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppic */

/* 10038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10042 */	NdrFcShort( 0x372 ),	/* Type Offset=882 */

	/* Parameter x */

/* 10044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 10050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cx */

/* 10056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cy */

/* 10062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10064 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 10068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 10074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10076 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxSrc */

/* 10080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10082 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cySrc */

/* 10086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10088 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prcWBounds */

/* 10092 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 10094 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 10096 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Return value */

/* 10098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10100 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakePicture */

/* 10104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10110 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10112 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10120 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbData */

/* 10128 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10132 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cbData */

/* 10134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppic */

/* 10140 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10142 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10144 */	NdrFcShort( 0x384 ),	/* Type Offset=900 */

	/* Return value */

/* 10146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClipRect */

/* 10152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10162 */	NdrFcShort( 0x34 ),	/* 52 */
/* 10164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prcClip */

/* 10176 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 10178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10180 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Return value */

/* 10182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Fetch */

/* 10188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10194 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10202 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10204 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichMin */

/* 10212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 10218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchBuf */

/* 10224 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 10226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10228 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 10230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCharProps */

/* 10236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10242 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10248 */	NdrFcShort( 0x174 ),	/* 372 */
/* 10250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 10252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 10260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pchrp */

/* 10266 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 10268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10270 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Parameter pichMin */

/* 10272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 10278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParaProps */

/* 10290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10296 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10298 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10302 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 10306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 10314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pchrp */

/* 10320 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10324 */	NdrFcShort( 0x39c ),	/* Type Offset=924 */

	/* Parameter pichMin */

/* 10326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 10332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10340 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCharStringProp */

/* 10344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10352 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10356 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 10360 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 10368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nId */

/* 10374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 10380 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10384 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pichMin */

/* 10386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 10392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10394 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10400 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParaStringProp */

/* 10404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10412 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10414 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10416 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 10420 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 10428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nId */

/* 10434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 10440 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10444 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pichMin */

/* 10446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 10452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10454 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10460 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AdjustGlyphWidths */

/* 10464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10470 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10472 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10474 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10478 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pjren */

/* 10488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10492 */	NdrFcShort( 0x3a8 ),	/* Type Offset=936 */

	/* Parameter iGlyphMin */

/* 10494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iGlyphLim */

/* 10500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dxCurrentWidth */

/* 10506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10510 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter dxDesiredWidth */

/* 10512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10514 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10516 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 10518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10520 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawText */

/* 10524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10530 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10532 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 10534 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10538 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10558 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 10560 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 10562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10564 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 10566 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 10568 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10570 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter dxdWidth */

/* 10572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10574 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10580 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 10582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Recompute */

/* 10584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10590 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10598 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10614 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10618 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Return value */

/* 10620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 10626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10632 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10634 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10638 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10656 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10660 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter px */

/* 10662 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RightOverhang */

/* 10674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10680 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10690 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10704 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10708 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter px */

/* 10710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LeftOverhang */

/* 10722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10728 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10730 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10734 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10752 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10756 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter px */

/* 10758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 10770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10778 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10800 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10804 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter py */

/* 10806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10814 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Ascent */

/* 10818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10824 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10826 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10830 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10848 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10852 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter py */

/* 10854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extent */

/* 10866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10872 */	NdrFcShort( 0xa ),	/* 10 */
/* 10874 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10878 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10880 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10896 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10900 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter px */

/* 10902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter py */

/* 10908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10916 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BoundingRect */

/* 10920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10926 */	NdrFcShort( 0xb ),	/* 11 */
/* 10928 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 10930 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10932 */	NdrFcShort( 0x3c ),	/* 60 */
/* 10934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 10944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 10950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10954 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 10956 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 10958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10960 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 10962 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 10964 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10966 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter prcBounds */

/* 10968 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 10970 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10972 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Return value */

/* 10974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10976 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 10978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActualWidth */

/* 10980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10986 */	NdrFcShort( 0xc ),	/* 12 */
/* 10988 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 10990 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10992 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10994 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11014 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 11016 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11020 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 11022 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11024 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11026 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter dxdWidth */

/* 11028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11030 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11036 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 11038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AscentOverhang */

/* 11040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11046 */	NdrFcShort( 0xd ),	/* 13 */
/* 11048 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11052 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11070 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11074 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter py */

/* 11076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DescentOverhang */

/* 11088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11094 */	NdrFcShort( 0xe ),	/* 14 */
/* 11096 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11100 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11102 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11118 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11122 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter py */

/* 11124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11132 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsTitle */


	/* Procedure get_RightToLeft */

/* 11136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11142 */	NdrFcShort( 0xf ),	/* 15 */
/* 11144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11148 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */


	/* Parameter ichBase */

/* 11160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */


	/* Parameter pfResult */

/* 11166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11170 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 11172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DirectionDepth */

/* 11178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11186 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11190 */	NdrFcShort( 0x3e ),	/* 62 */
/* 11192 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnDepth */

/* 11208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfWeak */

/* 11214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11218 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11222 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDirectionDepth */

/* 11226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11232 */	NdrFcShort( 0x11 ),	/* 17 */
/* 11234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11236 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichwBase */

/* 11250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nNewDepth */

/* 11256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Lim */

/* 11268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11274 */	NdrFcShort( 0x13 ),	/* 19 */
/* 11276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdich */

/* 11298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LimInterest */

/* 11310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11316 */	NdrFcShort( 0x14 ),	/* 20 */
/* 11318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11322 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdich */

/* 11340 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EndLine */

/* 11352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11358 */	NdrFcShort( 0x15 ),	/* 21 */
/* 11360 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11362 */	NdrFcShort( 0xe ),	/* 14 */
/* 11364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11382 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11386 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter fNewVal */

/* 11388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11392 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_StartLine */

/* 11400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11406 */	NdrFcShort( 0x16 ),	/* 22 */
/* 11408 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11410 */	NdrFcShort( 0xe ),	/* 14 */
/* 11412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11414 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11434 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter fNewVal */

/* 11436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11440 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StartBreakWeight */

/* 11448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x17 ),	/* 23 */
/* 11456 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11478 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11482 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter plb */

/* 11484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11488 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EndBreakWeight */

/* 11496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11502 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11504 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11526 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11530 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter plb */

/* 11532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11536 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Stretch */

/* 11544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11550 */	NdrFcShort( 0x19 ),	/* 25 */
/* 11552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11556 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pxs */

/* 11574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Stretch */

/* 11586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11592 */	NdrFcShort( 0x1a ),	/* 26 */
/* 11594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11596 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xs */

/* 11616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidInsertionPoint */

/* 11628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11634 */	NdrFcShort( 0x1b ),	/* 27 */
/* 11636 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11638 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11640 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11642 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11662 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter ich */

/* 11664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pipvr */

/* 11670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11672 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11674 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11678 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoBoundariesCoincide */

/* 11682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11688 */	NdrFcShort( 0x1c ),	/* 28 */
/* 11690 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11692 */	NdrFcShort( 0x14 ),	/* 20 */
/* 11694 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11696 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 11698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11712 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11716 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter fBoundaryEnd */

/* 11718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11722 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fBoundaryRight */

/* 11724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11728 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pfResult */

/* 11730 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11734 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 11740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawInsertionPoint */

/* 11742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11748 */	NdrFcShort( 0x1d ),	/* 29 */
/* 11750 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 11752 */	NdrFcShort( 0x64 ),	/* 100 */
/* 11754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11756 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 11758 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11772 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11776 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 11778 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11782 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 11784 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11786 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11788 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter ich */

/* 11790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11792 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAssocPrev */

/* 11796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11798 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 11800 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fOn */

/* 11802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11804 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 11806 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dm */

/* 11808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11810 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 11812 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11816 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 11818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PositionsOfIP */

/* 11820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11826 */	NdrFcShort( 0x1e ),	/* 30 */
/* 11828 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 11830 */	NdrFcShort( 0x5e ),	/* 94 */
/* 11832 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 11834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 11836 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11850 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11854 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 11856 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11860 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 11862 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11864 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11866 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter ich */

/* 11868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11870 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAssocPrev */

/* 11874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11876 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 11878 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dm */

/* 11880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11882 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 11884 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter rectPrimary */

/* 11886 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 11888 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 11890 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rectSecondary */

/* 11892 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 11894 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 11896 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter pfPrimaryHere */

/* 11898 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11900 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 11902 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pfSecHere */

/* 11904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11906 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 11908 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11912 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 11914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawRange */

/* 11916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11922 */	NdrFcShort( 0x1f ),	/* 31 */
/* 11924 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 11926 */	NdrFcShort( 0x6e ),	/* 110 */
/* 11928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11930 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 11932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 11940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 11946 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11950 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 11952 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11956 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 11958 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11960 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 11962 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter ichMin */

/* 11964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11966 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 11968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 11970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11972 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 11974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ydTop */

/* 11976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11978 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 11980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ydBottom */

/* 11982 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11984 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 11986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bOn */

/* 11988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11990 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 11992 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11996 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 11998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PositionOfRange */

/* 12000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12006 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12008 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 12010 */	NdrFcShort( 0x9c ),	/* 156 */
/* 12012 */	NdrFcShort( 0x22 ),	/* 34 */
/* 12014 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 12016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 12024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 12030 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12034 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 12036 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12038 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12040 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 12042 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12044 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12046 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter ichMin */

/* 12048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12050 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 12052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichim */

/* 12054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12056 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 12058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ydTop */

/* 12060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12062 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 12064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ydBottom */

/* 12066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12068 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 12070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rsBounds */

/* 12072 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 12074 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 12076 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter pfAnythingToDraw */

/* 12078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12080 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 12082 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12086 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 12088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PointToChar */

/* 12090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12096 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12098 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 12100 */	NdrFcShort( 0x60 ),	/* 96 */
/* 12102 */	NdrFcShort( 0x3e ),	/* 62 */
/* 12104 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 12106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 12114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 12120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12124 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter rcSrc */

/* 12126 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12130 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 12132 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12134 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12136 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter ptdClickPosition */

/* 12138 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12140 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 12142 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Parameter pich */

/* 12144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12146 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 12148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfAssocPrev */

/* 12150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12152 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 12154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12158 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 12160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ArrowKeyPosition */

/* 12162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12168 */	NdrFcShort( 0x22 ),	/* 34 */
/* 12170 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 12172 */	NdrFcShort( 0x4a ),	/* 74 */
/* 12174 */	NdrFcShort( 0x58 ),	/* 88 */
/* 12176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 12178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 12186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 12192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12196 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter pich */

/* 12198 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 12200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfAssocPrev */

/* 12204 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 12206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12208 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fRight */

/* 12210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12214 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fMovingIn */

/* 12216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12218 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12220 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pfResult */

/* 12222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12224 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12226 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12230 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 12232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendSelectionPosition */

/* 12234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12240 */	NdrFcShort( 0x23 ),	/* 35 */
/* 12242 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 12244 */	NdrFcShort( 0x44 ),	/* 68 */
/* 12246 */	NdrFcShort( 0x3e ),	/* 62 */
/* 12248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 12250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 12258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 12264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12268 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter pich */

/* 12270 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 12272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAssocPrevMatch */

/* 12276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12280 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fAssocPrevNeeded */

/* 12282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12286 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ichAnchor */

/* 12288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12290 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fRight */

/* 12294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12296 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12298 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fMovingIn */

/* 12300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12302 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 12304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 12306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12308 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 12310 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12314 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 12316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCharPlacement */

/* 12318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12326 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 12328 */	NdrFcShort( 0x66 ),	/* 102 */
/* 12330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12332 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xd,		/* 13 */
/* 12334 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12336 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichBase */

/* 12342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 12348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12352 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter ichMin */

/* 12354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 12360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rcSrc */

/* 12366 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12370 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter rcDst */

/* 12372 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12374 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 12376 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter fSkipSpace */

/* 12378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12380 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 12382 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cxdMax */

/* 12384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12386 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 12388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcxd */

/* 12390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12392 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 12394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgxdLefts */

/* 12396 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 12398 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 12400 */	NdrFcShort( 0x3d8 ),	/* Type Offset=984 */

	/* Parameter prgxdRights */

/* 12402 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 12404 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 12406 */	NdrFcShort( 0x3d8 ),	/* Type Offset=984 */

	/* Parameter prgydUnderTops */

/* 12408 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 12410 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 12412 */	NdrFcShort( 0x3d8 ),	/* Type Offset=984 */

	/* Return value */

/* 12414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12416 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 12418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitRenderer */

/* 12420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12426 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12436 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvg */

/* 12444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12448 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter bstrData */

/* 12450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12454 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 12456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindBreakPoint */

/* 12462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12468 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12470 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 12472 */	NdrFcShort( 0x4a ),	/* 74 */
/* 12474 */	NdrFcShort( 0x5c ),	/* 92 */
/* 12476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x13,		/* 19 */
/* 12478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvg */

/* 12486 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12490 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter pts */

/* 12492 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12496 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter pvjus */

/* 12498 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12502 */	NdrFcShort( 0x3f6 ),	/* Type Offset=1014 */

	/* Parameter ichMin */

/* 12504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 12510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLimBacktrack */

/* 12516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12518 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fNeedFinalBreak */

/* 12522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12524 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12526 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fStartLine */

/* 12528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12530 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 12532 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dxMaxWidth */

/* 12534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12536 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 12538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lbPref */

/* 12540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12542 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 12544 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter lbMax */

/* 12546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12548 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 12550 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter twsh */

/* 12552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12554 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 12556 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter fParaRightToLeft */

/* 12558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12560 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 12562 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppsegRet */

/* 12564 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12566 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 12568 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter pdichLimSeg */

/* 12570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12572 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 12574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdxWidth */

/* 12576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12578 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 12580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pest */

/* 12582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12584 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 12586 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter psegPrev */

/* 12588 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12590 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 12592 */	NdrFcShort( 0x40c ),	/* Type Offset=1036 */

	/* Return value */

/* 12594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12596 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 12598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hvo */


	/* Procedure get_ScriptDirection */

/* 12600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12606 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12612 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phvo */


	/* Parameter pgrfsdc */

/* 12624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 12630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ClassId */

/* 12636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12648 */	NdrFcShort( 0x4c ),	/* 76 */
/* 12650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguid */

/* 12660 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 12662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12664 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 12666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InterpretChrp */

/* 12672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12678 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12682 */	NdrFcShort( 0x134 ),	/* 308 */
/* 12684 */	NdrFcShort( 0x13c ),	/* 316 */
/* 12686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pchrp */

/* 12696 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 12698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12700 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Return value */

/* 12702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WritingSystemFactory */

/* 12708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12714 */	NdrFcShort( 0xa ),	/* 10 */
/* 12716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwsf */

/* 12732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12736 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Return value */

/* 12738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_WritingSystemFactory */

/* 12744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12750 */	NdrFcShort( 0xb ),	/* 11 */
/* 12752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 12768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12772 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 12774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureIDs */

/* 12780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12786 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 12796 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cMax */

/* 12804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgFids */

/* 12810 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 12812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12814 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Parameter pcfid */

/* 12816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12824 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureLabel */

/* 12828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 12844 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fid */

/* 12852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLanguage */

/* 12858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrLabel */

/* 12864 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12868 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 12870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureValues */

/* 12876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12882 */	NdrFcShort( 0x5 ),	/* 5 */
/* 12884 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 12886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12888 */	NdrFcShort( 0x40 ),	/* 64 */
/* 12890 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 12892 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fid */

/* 12900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cfvalMax */

/* 12906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgfval */

/* 12912 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 12914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12916 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter pcfval */

/* 12918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfvalDefault */

/* 12924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12926 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12932 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFeatureValueLabel */

/* 12936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12942 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12944 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12946 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 12952 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fid */

/* 12960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fval */

/* 12966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLanguage */

/* 12972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrLabel */

/* 12978 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12982 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 12984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12986 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGlyphAttributeFloat */

/* 12990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12996 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12998 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13000 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13002 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13004 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 13006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iGlyph */

/* 13014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter kjgatId */

/* 13020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLevel */

/* 13026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueRet */

/* 13032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13036 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 13038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGlyphAttributeInt */

/* 13044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13052 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13054 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13056 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 13060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iGlyph */

/* 13068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter kjgatId */

/* 13074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLevel */

/* 13080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueRet */

/* 13086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13094 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetGlyphAttributeFloat */

/* 13098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13104 */	NdrFcShort( 0x5 ),	/* 5 */
/* 13106 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13108 */	NdrFcShort( 0x20 ),	/* 32 */
/* 13110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 13114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iGlyph */

/* 13122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter kjgatId */

/* 13128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nLevel */

/* 13134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 13140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13144 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 13146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IntToString */


	/* Procedure get_Name */

/* 13152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13158 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13166 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13168 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter n */


	/* Parameter ws */

/* 13176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */


	/* Parameter pbstr */

/* 13182 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13186 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 13188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameWss */

/* 13194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13200 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13202 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13210 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cws */

/* 13218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgws */

/* 13224 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 13226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13228 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 13230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_KeymanWindowsMessage */


	/* Procedure get_Locale */


	/* Procedure get_WinLCID */

/* 13236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 13250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwm */


	/* Parameter pnLocale */


	/* Parameter pnCode */

/* 13260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 13266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dirty */

/* 13272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13284 */	NdrFcShort( 0x22 ),	/* 34 */
/* 13286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pf */

/* 13296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13300 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 13302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Dirty */

/* 13308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13314 */	NdrFcShort( 0x11 ),	/* 17 */
/* 13316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fDirty */

/* 13332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13336 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 13338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAsXml */

/* 13344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13350 */	NdrFcShort( 0x12 ),	/* 18 */
/* 13352 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 13368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13372 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter cchIndent */

/* 13374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 13386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13392 */	NdrFcShort( 0x13 ),	/* 19 */
/* 13394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 13410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13414 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 13416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserialize */

/* 13422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13428 */	NdrFcShort( 0x14 ),	/* 20 */
/* 13430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 13446 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13450 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 13452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IcuRules */

/* 13458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13464 */	NdrFcShort( 0x15 ),	/* 21 */
/* 13466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13472 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13474 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 13482 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13486 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 13488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IcuRules */

/* 13494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13500 */	NdrFcShort( 0x16 ),	/* 22 */
/* 13502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13508 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13510 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 13512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 13518 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13522 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 13524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WritingSystemFactory */

/* 13530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13536 */	NdrFcShort( 0x17 ),	/* 23 */
/* 13538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13544 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwsf */

/* 13554 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13558 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Return value */

/* 13560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_WritingSystemFactory */

/* 13566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13572 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13580 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13582 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 13590 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13594 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 13596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameWss */

/* 13602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13608 */	NdrFcShort( 0x5 ),	/* 5 */
/* 13610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13616 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13618 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cws */

/* 13626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgws */

/* 13632 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 13634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13636 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 13638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Country */


	/* Procedure get_Name */

/* 13644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13650 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13660 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iloc */


	/* Parameter ws */

/* 13668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */


	/* Parameter pbstrName */

/* 13674 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13678 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 13680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */

/* 13686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13692 */	NdrFcShort( 0x7 ),	/* 7 */
/* 13694 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13702 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 13704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 13710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrName */

/* 13716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 13718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13720 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 13722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ConverterFrom */

/* 13728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13734 */	NdrFcShort( 0xa ),	/* 10 */
/* 13736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13742 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 13752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppstrconv */

/* 13758 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13762 */	NdrFcShort( 0x448 ),	/* Type Offset=1096 */

	/* Return value */

/* 13764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NormalizeEngine */

/* 13770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13776 */	NdrFcShort( 0xb ),	/* 11 */
/* 13778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppstrconv */

/* 13794 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13798 */	NdrFcShort( 0x448 ),	/* Type Offset=1096 */

	/* Return value */

/* 13800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WordBreakEngine */

/* 13806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13812 */	NdrFcShort( 0xc ),	/* 12 */
/* 13814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13820 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13822 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pptoker */

/* 13830 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13834 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 13836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SpellingFactory */

/* 13842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13848 */	NdrFcShort( 0xd ),	/* 13 */
/* 13850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13856 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppspfact */

/* 13866 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13870 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 13872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SpellCheckEngine */

/* 13878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13884 */	NdrFcShort( 0xe ),	/* 14 */
/* 13886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppspchk */

/* 13902 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13906 */	NdrFcShort( 0x48a ),	/* Type Offset=1162 */

	/* Return value */

/* 13908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SearchEngine */

/* 13914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13920 */	NdrFcShort( 0xf ),	/* 15 */
/* 13922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13928 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppsrcheng */

/* 13938 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13942 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 13944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Shutdown */


	/* Procedure CompileEngines */

/* 13950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 13966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 13974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dirty */

/* 13980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13986 */	NdrFcShort( 0x11 ),	/* 17 */
/* 13988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13992 */	NdrFcShort( 0x22 ),	/* 34 */
/* 13994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pf */

/* 14004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14008 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Dirty */

/* 14016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14022 */	NdrFcShort( 0x12 ),	/* 18 */
/* 14024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14026 */	NdrFcShort( 0x6 ),	/* 6 */
/* 14028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fDirty */

/* 14040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14044 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WritingSystemFactory */

/* 14052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14058 */	NdrFcShort( 0x13 ),	/* 19 */
/* 14060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14066 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwsf */

/* 14076 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14080 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Return value */

/* 14082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_WritingSystemFactory */

/* 14088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14094 */	NdrFcShort( 0x14 ),	/* 20 */
/* 14096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14102 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 14112 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14116 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 14118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAsXml */

/* 14124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14130 */	NdrFcShort( 0x15 ),	/* 21 */
/* 14132 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstrm */

/* 14148 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14152 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter cchIndent */

/* 14154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 14166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14172 */	NdrFcShort( 0x16 ),	/* 22 */
/* 14174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14180 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 14190 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14194 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 14196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserialize */

/* 14202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14208 */	NdrFcShort( 0x17 ),	/* 23 */
/* 14210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14216 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 14226 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14230 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 14232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RightToLeft */

/* 14238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14244 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14250 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14252 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14254 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfRightToLeft */

/* 14262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14266 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RightToLeft */

/* 14274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14280 */	NdrFcShort( 0x19 ),	/* 25 */
/* 14282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14284 */	NdrFcShort( 0x6 ),	/* 6 */
/* 14286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14290 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fRightToLeft */

/* 14298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14302 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Renderer */

/* 14310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14316 */	NdrFcShort( 0x1a ),	/* 26 */
/* 14318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14324 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvg */

/* 14334 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14338 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter ppreneng */

/* 14340 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14344 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 14346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FontVariation */

/* 14352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14358 */	NdrFcShort( 0x1b ),	/* 27 */
/* 14360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14366 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14368 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 14376 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14380 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FontVariation */

/* 14388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14394 */	NdrFcShort( 0x1c ),	/* 28 */
/* 14396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14404 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 14412 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14416 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 14418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SansFontVariation */

/* 14424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14430 */	NdrFcShort( 0x1d ),	/* 29 */
/* 14432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14440 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 14448 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14452 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SansFontVariation */

/* 14460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14466 */	NdrFcShort( 0x1e ),	/* 30 */
/* 14468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14476 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 14484 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14488 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 14490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DefaultSerif */

/* 14496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14502 */	NdrFcShort( 0x1f ),	/* 31 */
/* 14504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14510 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14512 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 14520 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14524 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DefaultSerif */

/* 14532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14538 */	NdrFcShort( 0x20 ),	/* 32 */
/* 14540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14546 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14548 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 14556 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14560 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 14562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DefaultSansSerif */

/* 14568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14574 */	NdrFcShort( 0x21 ),	/* 33 */
/* 14576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14584 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 14592 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14596 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DefaultSansSerif */

/* 14604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14610 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14618 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14620 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 14628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14632 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 14634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DefaultMonospace */

/* 14640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14646 */	NdrFcShort( 0x23 ),	/* 35 */
/* 14648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14654 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 14656 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 14664 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14668 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DefaultMonospace */

/* 14676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14682 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 14692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 14700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14704 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 14706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_KeyMan */

/* 14712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14718 */	NdrFcShort( 0x25 ),	/* 37 */
/* 14720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14724 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfKeyMan */

/* 14736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14740 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_KeyMan */

/* 14748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14754 */	NdrFcShort( 0x26 ),	/* 38 */
/* 14756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14758 */	NdrFcShort( 0x6 ),	/* 6 */
/* 14760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fKeyMan */

/* 14772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14776 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 14778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UiName */

/* 14784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14790 */	NdrFcShort( 0x27 ),	/* 39 */
/* 14792 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14798 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 14800 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 14808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 14814 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14818 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 14820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CollationCount */

/* 14826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14832 */	NdrFcShort( 0x28 ),	/* 40 */
/* 14834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14838 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14840 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14842 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pccoll */

/* 14850 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Collation */

/* 14862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14868 */	NdrFcShort( 0x29 ),	/* 41 */
/* 14870 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14876 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 14878 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter icoll */

/* 14886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14888 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppcoll */

/* 14892 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14894 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14896 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 14898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Collation */

/* 14904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14910 */	NdrFcShort( 0x2a ),	/* 42 */
/* 14912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14918 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter icoll */

/* 14928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcoll */

/* 14934 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14938 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Return value */

/* 14940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveCollation */

/* 14946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14952 */	NdrFcShort( 0x2b ),	/* 43 */
/* 14954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14962 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter icoll */

/* 14970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Abbr */

/* 14982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14988 */	NdrFcShort( 0x2c ),	/* 44 */
/* 14990 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 14998 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 15006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 15012 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15016 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Abbr */

/* 15024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15030 */	NdrFcShort( 0x2d ),	/* 45 */
/* 15032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15038 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15040 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 15042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 15048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 15054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15058 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 15060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AbbrWsCount */

/* 15066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15072 */	NdrFcShort( 0x2e ),	/* 46 */
/* 15074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15078 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15080 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15082 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcws */

/* 15090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AbbrWss */

/* 15102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15108 */	NdrFcShort( 0x2f ),	/* 47 */
/* 15110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 15118 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cws */

/* 15126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgws */

/* 15132 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 15134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15136 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 15138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Description */

/* 15144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15150 */	NdrFcShort( 0x30 ),	/* 48 */
/* 15152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 15160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 15168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pptss */

/* 15174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 15176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15178 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 15180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Description */

/* 15186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15192 */	NdrFcShort( 0x31 ),	/* 49 */
/* 15194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 15210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptss */

/* 15216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15220 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 15222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DescriptionWsCount */

/* 15228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15234 */	NdrFcShort( 0x32 ),	/* 50 */
/* 15236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcws */

/* 15252 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DescriptionWss */

/* 15264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15270 */	NdrFcShort( 0x33 ),	/* 51 */
/* 15272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15278 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 15280 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cws */

/* 15288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgws */

/* 15294 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 15296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15298 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 15300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CollatingEngine */

/* 15306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15312 */	NdrFcShort( 0x34 ),	/* 52 */
/* 15314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15320 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppcoleng */

/* 15330 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 15332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15334 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 15336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CharPropEngine */

/* 15342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15348 */	NdrFcShort( 0x35 ),	/* 53 */
/* 15350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropeng */

/* 15366 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 15368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15370 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 15372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTracing */

/* 15378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15384 */	NdrFcShort( 0x36 ),	/* 54 */
/* 15386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter n */

/* 15402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InterpretChrp */

/* 15414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15420 */	NdrFcShort( 0x37 ),	/* 55 */
/* 15422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15424 */	NdrFcShort( 0x134 ),	/* 308 */
/* 15426 */	NdrFcShort( 0x13c ),	/* 316 */
/* 15428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pchrp */

/* 15438 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 15440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15442 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Return value */

/* 15444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IcuLocale */

/* 15450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15456 */	NdrFcShort( 0x38 ),	/* 56 */
/* 15458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15464 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15466 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15474 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15478 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IcuLocale */

/* 15486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15492 */	NdrFcShort( 0x39 ),	/* 57 */
/* 15494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 15502 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 15504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 15510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15514 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 15516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIcuLocaleParts */

/* 15522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15528 */	NdrFcShort( 0x3a ),	/* 58 */
/* 15530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 15538 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15540 */	NdrFcShort( 0x3 ),	/* 3 */
/* 15542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrLanguage */

/* 15546 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15550 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pbstrCountry */

/* 15552 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15556 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pbstrVariant */

/* 15558 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15562 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LegacyMapping */

/* 15570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15576 */	NdrFcShort( 0x3b ),	/* 59 */
/* 15578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15586 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15594 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15598 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LegacyMapping */

/* 15606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15612 */	NdrFcShort( 0x3c ),	/* 60 */
/* 15614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 15622 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 15624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 15630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15634 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 15636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_KeymanKbdName */

/* 15642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15648 */	NdrFcShort( 0x3d ),	/* 61 */
/* 15650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15656 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15658 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15666 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15670 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_KeymanKbdName */

/* 15678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15684 */	NdrFcShort( 0x3e ),	/* 62 */
/* 15686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15692 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 15694 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 15696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 15702 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15706 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 15708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LanguageName */

/* 15714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15720 */	NdrFcShort( 0x3f ),	/* 63 */
/* 15722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15728 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15730 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15738 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15742 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CountryName */

/* 15750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15756 */	NdrFcShort( 0x40 ),	/* 64 */
/* 15758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15764 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15766 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15774 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15778 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VariantName */

/* 15786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15792 */	NdrFcShort( 0x41 ),	/* 65 */
/* 15794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15800 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15802 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15810 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15814 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LanguageAbbr */

/* 15822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15828 */	NdrFcShort( 0x42 ),	/* 66 */
/* 15830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15836 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15838 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15846 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15850 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CountryAbbr */

/* 15858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15864 */	NdrFcShort( 0x43 ),	/* 67 */
/* 15866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15872 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15874 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15882 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15886 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VariantAbbr */

/* 15894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15900 */	NdrFcShort( 0x44 ),	/* 68 */
/* 15902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15908 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 15910 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 15918 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15922 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 15924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveIfDirty */

/* 15930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15936 */	NdrFcShort( 0x45 ),	/* 69 */
/* 15938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 15946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pode */

/* 15954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15958 */	NdrFcShort( 0x2aa ),	/* Type Offset=682 */

	/* Return value */

/* 15960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InstallLanguage */

/* 15966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15972 */	NdrFcShort( 0x46 ),	/* 70 */
/* 15974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15976 */	NdrFcShort( 0x6 ),	/* 6 */
/* 15978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fForce */

/* 15990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15994 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 15996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LastModified */

/* 16002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16008 */	NdrFcShort( 0x47 ),	/* 71 */
/* 16010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16014 */	NdrFcShort( 0x2c ),	/* 44 */
/* 16016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdate */

/* 16026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16030 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 16032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LastModified */

/* 16038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16044 */	NdrFcShort( 0x48 ),	/* 72 */
/* 16046 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter date */

/* 16062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16066 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 16068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentInputLanguage */

/* 16074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16080 */	NdrFcShort( 0x49 ),	/* 73 */
/* 16082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16086 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnLangId */

/* 16098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentInputLanguage */

/* 16110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16116 */	NdrFcShort( 0x4a ),	/* 74 */
/* 16118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLangId */

/* 16134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Backspace */

/* 16146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16152 */	NdrFcShort( 0x5 ),	/* 5 */
/* 16154 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 16156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16158 */	NdrFcShort( 0x78 ),	/* 120 */
/* 16160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 16162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pichStart */

/* 16170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cactBackspace */

/* 16176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptsbOld */

/* 16182 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16186 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter pichModMin */

/* 16188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichModLim */

/* 16194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichIP */

/* 16200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16202 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcactBsRemaining */

/* 16206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16208 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 16210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16214 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 16216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteForward */

/* 16218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16224 */	NdrFcShort( 0x6 ),	/* 6 */
/* 16226 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 16228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16230 */	NdrFcShort( 0x78 ),	/* 120 */
/* 16232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 16234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pichStart */

/* 16242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cactDelForward */

/* 16248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptsbInOut */

/* 16254 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16258 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter pichModMin */

/* 16260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichModLim */

/* 16266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichIP */

/* 16272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcactDfRemaining */

/* 16278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16280 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 16282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16286 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 16288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidInsertionPoint */

/* 16290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16296 */	NdrFcShort( 0x7 ),	/* 7 */
/* 16298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16302 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ich */

/* 16314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptss */

/* 16320 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16324 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pfValid */

/* 16326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsFontAvailable */

/* 16338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16344 */	NdrFcShort( 0x3 ),	/* 3 */
/* 16346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16350 */	NdrFcShort( 0x22 ),	/* 34 */
/* 16352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16354 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 16362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16366 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pfAvail */

/* 16368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16372 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 16374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsFontAvailableRgch */

/* 16380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 16388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16390 */	NdrFcShort( 0x22 ),	/* 34 */
/* 16392 */	NdrFcShort( 0x22 ),	/* 34 */
/* 16394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cch */

/* 16404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchName */

/* 16410 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 16412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16414 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pfAvail */

/* 16416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16420 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 16422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */


	/* Procedure get_Text */


	/* Procedure AvailableFonts */

/* 16428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16434 */	NdrFcShort( 0x5 ),	/* 5 */
/* 16436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16444 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 16446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrString */


	/* Parameter pbstr */


	/* Parameter pbstrNames */

/* 16452 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 16454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16456 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 16458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SortKey */

/* 16464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16470 */	NdrFcShort( 0x3 ),	/* 3 */
/* 16472 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16478 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16480 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 16482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrValue */

/* 16488 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16492 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter colopt */

/* 16494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16498 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pbstrKey */

/* 16500 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 16502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16504 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 16506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SortKeyRgch */

/* 16512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16518 */	NdrFcShort( 0x4 ),	/* 4 */
/* 16520 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 16522 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16524 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16526 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 16528 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 16530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pch */

/* 16536 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 16538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16540 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 16542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter colopt */

/* 16548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16552 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter cchMaxOut */

/* 16554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pchKey */

/* 16560 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 16562 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16564 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */

	/* Parameter pcchOut */

/* 16566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16568 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16574 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 16576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Compare */

/* 16578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16584 */	NdrFcShort( 0x5 ),	/* 5 */
/* 16586 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16590 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16592 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16594 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16598 */	NdrFcShort( 0x2 ),	/* 2 */
/* 16600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrValue1 */

/* 16602 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16606 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrValue2 */

/* 16608 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16612 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter colopt */

/* 16614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16618 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pnVal */

/* 16620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16622 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WritingSystemFactory */

/* 16632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16638 */	NdrFcShort( 0x6 ),	/* 6 */
/* 16640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16646 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwsf */

/* 16656 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 16658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16660 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Return value */

/* 16662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_WritingSystemFactory */

/* 16668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16674 */	NdrFcShort( 0x7 ),	/* 7 */
/* 16676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 16692 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16696 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 16698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SortKeyVariant */

/* 16704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16712 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16718 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16720 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 16722 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrValue */

/* 16728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16732 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter colopt */

/* 16734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16738 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter psaKey */

/* 16740 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 16742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16744 */	NdrFcShort( 0x91a ),	/* Type Offset=2330 */

	/* Return value */

/* 16746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16748 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CompareVariant */

/* 16752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16758 */	NdrFcShort( 0x9 ),	/* 9 */
/* 16760 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 16762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16764 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16766 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16768 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16772 */	NdrFcShort( 0x40 ),	/* 64 */
/* 16774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter saValue1 */

/* 16776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16780 */	NdrFcShort( 0x928 ),	/* Type Offset=2344 */

	/* Parameter saValue2 */

/* 16782 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16784 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16786 */	NdrFcShort( 0x928 ),	/* Type Offset=2344 */

	/* Parameter colopt */

/* 16788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16790 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 16792 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pnVal */

/* 16794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16796 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 16798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16802 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 16804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 16806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16812 */	NdrFcShort( 0xa ),	/* 10 */
/* 16814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16822 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrLocale */

/* 16830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16834 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 16836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 16842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16848 */	NdrFcShort( 0xb ),	/* 11 */
/* 16850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16856 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 16866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GeneralCategory */

/* 16872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16878 */	NdrFcShort( 0x3 ),	/* 3 */
/* 16880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 16896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcc */

/* 16902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16906 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 16908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BidiCategory */

/* 16914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 16922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 16928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 16938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbic */

/* 16944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16948 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 16950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsWordForming */

/* 16956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16962 */	NdrFcShort( 0x6 ),	/* 6 */
/* 16964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16968 */	NdrFcShort( 0x22 ),	/* 34 */
/* 16970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 16980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 16986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 16988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16990 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 16992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsPunctuation */

/* 16998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17004 */	NdrFcShort( 0x7 ),	/* 7 */
/* 17006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17010 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17012 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17014 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17032 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsNumber */

/* 17040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17052 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17074 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsSeparator */

/* 17082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17088 */	NdrFcShort( 0x9 ),	/* 9 */
/* 17090 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17094 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17116 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsSymbol */

/* 17124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17130 */	NdrFcShort( 0xa ),	/* 10 */
/* 17132 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17136 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17138 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17158 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsMark */

/* 17166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17172 */	NdrFcShort( 0xb ),	/* 11 */
/* 17174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17178 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17200 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsOther */

/* 17208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17214 */	NdrFcShort( 0xc ),	/* 12 */
/* 17216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17220 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17242 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsUpper */

/* 17250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17256 */	NdrFcShort( 0xd ),	/* 13 */
/* 17258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17262 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17284 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsLower */

/* 17292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17298 */	NdrFcShort( 0xe ),	/* 14 */
/* 17300 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17304 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17326 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsModifier */

/* 17334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17340 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17346 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17368 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsOtherLetter */

/* 17376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17382 */	NdrFcShort( 0x11 ),	/* 17 */
/* 17384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17388 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17410 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsOpen */

/* 17418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17424 */	NdrFcShort( 0x12 ),	/* 18 */
/* 17426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17430 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17452 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsClose */

/* 17460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17466 */	NdrFcShort( 0x13 ),	/* 19 */
/* 17468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17472 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17494 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsWordMedial */

/* 17502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17508 */	NdrFcShort( 0x14 ),	/* 20 */
/* 17510 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17514 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17518 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17536 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsControl */

/* 17544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17550 */	NdrFcShort( 0x15 ),	/* 21 */
/* 17552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17556 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 17574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17578 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 17580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToLowerCh */

/* 17586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17592 */	NdrFcShort( 0x16 ),	/* 22 */
/* 17594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17598 */	NdrFcShort( 0x24 ),	/* 36 */
/* 17600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pch */

/* 17616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToUpperCh */

/* 17628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17634 */	NdrFcShort( 0x17 ),	/* 23 */
/* 17636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17640 */	NdrFcShort( 0x24 ),	/* 36 */
/* 17642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 17652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pch */

/* 17658 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToLower */

/* 17670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17676 */	NdrFcShort( 0x19 ),	/* 25 */
/* 17678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17684 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17686 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 17694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 17696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17698 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstr */

/* 17700 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 17702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17704 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 17706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToUpper */

/* 17712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17718 */	NdrFcShort( 0x1a ),	/* 26 */
/* 17720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17726 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17728 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 17736 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 17738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17740 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstr */

/* 17742 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 17744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17746 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 17748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToTitle */

/* 17754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17760 */	NdrFcShort( 0x1b ),	/* 27 */
/* 17762 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17768 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17770 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 17778 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 17780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17782 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstr */

/* 17784 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 17786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17788 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 17790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToLowerRgch */

/* 17796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17802 */	NdrFcShort( 0x1c ),	/* 28 */
/* 17804 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17808 */	NdrFcShort( 0x24 ),	/* 36 */
/* 17810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 17812 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 17820 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 17822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17824 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 17826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 17832 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 17834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17836 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchOut */

/* 17838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRet */

/* 17844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17846 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17852 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToUpperRgch */

/* 17856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17862 */	NdrFcShort( 0x1d ),	/* 29 */
/* 17864 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17866 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17868 */	NdrFcShort( 0x24 ),	/* 36 */
/* 17870 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 17872 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 17880 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 17882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17884 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 17886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 17892 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 17894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17896 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchOut */

/* 17898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRet */

/* 17904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17906 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17912 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToTitleRgch */

/* 17916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17922 */	NdrFcShort( 0x1e ),	/* 30 */
/* 17924 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17928 */	NdrFcShort( 0x24 ),	/* 36 */
/* 17930 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 17932 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 17934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 17938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 17940 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 17942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17944 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 17946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 17952 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 17954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17956 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchOut */

/* 17958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRet */

/* 17964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 17966 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17972 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsUserDefinedClass */

/* 17976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17982 */	NdrFcShort( 0x1f ),	/* 31 */
/* 17984 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17986 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17988 */	NdrFcShort( 0x22 ),	/* 34 */
/* 17990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 17992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter chClass */

/* 18006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfRet */

/* 18012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18016 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 18018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SoundAlikeKey */

/* 18024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18030 */	NdrFcShort( 0x20 ),	/* 32 */
/* 18032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18038 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 18040 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrValue */

/* 18048 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 18050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18052 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstrKey */

/* 18054 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18058 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CharacterName */

/* 18066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18072 */	NdrFcShort( 0x21 ),	/* 33 */
/* 18074 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18080 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 18082 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */

/* 18096 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18100 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Decomposition */

/* 18108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18114 */	NdrFcShort( 0x22 ),	/* 34 */
/* 18116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 18124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 18138 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18142 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DecompositionRgch */

/* 18150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18156 */	NdrFcShort( 0x23 ),	/* 35 */
/* 18158 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18162 */	NdrFcShort( 0x58 ),	/* 88 */
/* 18164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 18166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cchMax */

/* 18180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 18186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18190 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pcch */

/* 18192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfHasDecomp */

/* 18198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 18204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18206 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FullDecomp */

/* 18210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18224 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 18226 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18228 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrOut */

/* 18240 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18244 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FullDecompRgch */

/* 18252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18258 */	NdrFcShort( 0x25 ),	/* 37 */
/* 18260 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18262 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18264 */	NdrFcShort( 0x58 ),	/* 88 */
/* 18266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 18268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cchMax */

/* 18282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgch */

/* 18288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18292 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pcch */

/* 18294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18296 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfHasDecomp */

/* 18300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18302 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 18306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18308 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NumericValue */

/* 18312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18318 */	NdrFcShort( 0x26 ),	/* 38 */
/* 18320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 18328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pn */

/* 18342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CombiningClass */

/* 18354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18360 */	NdrFcShort( 0x27 ),	/* 39 */
/* 18362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18366 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 18370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pn */

/* 18384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Comment */

/* 18396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18402 */	NdrFcShort( 0x28 ),	/* 40 */
/* 18404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 18412 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 18420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 18426 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18430 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLineBreakProps */

/* 18438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18444 */	NdrFcShort( 0x29 ),	/* 41 */
/* 18446 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 18454 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 18462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18466 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 18468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prglbOut */

/* 18474 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 18476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18478 */	NdrFcShort( 0x93a ),	/* Type Offset=2362 */

	/* Return value */

/* 18480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLineBreakStatus */

/* 18486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18492 */	NdrFcShort( 0x2a ),	/* 42 */
/* 18494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 18502 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prglbpIn */

/* 18510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18514 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter cb */

/* 18516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prglbsOut */

/* 18522 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 18524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18526 */	NdrFcShort( 0x93a ),	/* Type Offset=2362 */

	/* Return value */

/* 18528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLineBreakInfo */

/* 18534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18540 */	NdrFcShort( 0x2b ),	/* 43 */
/* 18542 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 18544 */	NdrFcShort( 0x18 ),	/* 24 */
/* 18546 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 18550 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 18558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18562 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 18564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichMin */

/* 18570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLim */

/* 18576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prglbsOut */

/* 18582 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 18584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18586 */	NdrFcShort( 0x94a ),	/* Type Offset=2378 */

	/* Parameter pichBreak */

/* 18588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18590 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18596 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StripDiacritics */

/* 18600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18606 */	NdrFcShort( 0x2c ),	/* 44 */
/* 18608 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18614 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 18616 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 18624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 18626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstr */

/* 18630 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18634 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StripDiacriticsRgch */

/* 18642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18648 */	NdrFcShort( 0x2d ),	/* 45 */
/* 18650 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18652 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18656 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 18658 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 18666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18670 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 18672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 18678 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 18680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18682 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchMaxOut */

/* 18684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchOut */

/* 18690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NormalizeKd */

/* 18702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18708 */	NdrFcShort( 0x2e ),	/* 46 */
/* 18710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 18718 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 18726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 18728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18730 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstr */

/* 18732 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 18734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18736 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 18738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NormalizeKdRgch */

/* 18744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18750 */	NdrFcShort( 0x2f ),	/* 47 */
/* 18752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18758 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 18760 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 18768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18772 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchIn */

/* 18774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 18780 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 18782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18784 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Parameter cchMaxOut */

/* 18786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchOut */

/* 18792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18800 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Locale */

/* 18804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18810 */	NdrFcShort( 0x30 ),	/* 48 */
/* 18812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 18820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnLocale */

/* 18828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Locale */

/* 18840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18846 */	NdrFcShort( 0x31 ),	/* 49 */
/* 18848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 18856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLocale */

/* 18864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLineBreakText */

/* 18876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18882 */	NdrFcShort( 0x32 ),	/* 50 */
/* 18884 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18888 */	NdrFcShort( 0x3e ),	/* 62 */
/* 18890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 18892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchMax */

/* 18900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 18906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18910 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pcchOut */

/* 18912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LineBreakText */

/* 18924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18930 */	NdrFcShort( 0x33 ),	/* 51 */
/* 18932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 18940 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 18946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchIn */

/* 18948 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 18950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18952 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchMax */

/* 18954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18962 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LineBreakBefore */

/* 18966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18972 */	NdrFcShort( 0x34 ),	/* 52 */
/* 18974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18978 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 18982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichIn */

/* 18990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichOut */

/* 18996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plbWeight */

/* 19002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19006 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 19008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LineBreakAfter */

/* 19014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19020 */	NdrFcShort( 0x35 ),	/* 53 */
/* 19022 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19026 */	NdrFcShort( 0x40 ),	/* 64 */
/* 19028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 19030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ichIn */

/* 19038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichOut */

/* 19044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plbWeight */

/* 19050 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19054 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 19056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPattern */

/* 19062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19068 */	NdrFcShort( 0x3 ),	/* 3 */
/* 19070 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 19072 */	NdrFcShort( 0x18 ),	/* 24 */
/* 19074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 19078 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPattern */

/* 19086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19090 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter fIgnoreCase */

/* 19092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19096 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fIgnoreModifiers */

/* 19098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19102 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fUseSoundAlike */

/* 19104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19106 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19108 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter fUseWildCards */

/* 19110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19112 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19114 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 19116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19118 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowPatternDialog */

/* 19122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19128 */	NdrFcShort( 0x5 ),	/* 5 */
/* 19130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19132 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19134 */	NdrFcShort( 0x22 ),	/* 34 */
/* 19136 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 19138 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTitle */

/* 19146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19150 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pwse */

/* 19152 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 19154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19156 */	NdrFcShort( 0x956 ),	/* Type Offset=2390 */

	/* Parameter fForReplace */

/* 19158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19162 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pfGoAhead */

/* 19164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 19170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19172 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindString */

/* 19176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19182 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19184 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 19186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19188 */	NdrFcShort( 0x5a ),	/* 90 */
/* 19190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 19192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSource */

/* 19200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19204 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ichFirst */

/* 19206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichMinFound */

/* 19212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLimFound */

/* 19218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfFound */

/* 19224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19226 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19228 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 19230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19232 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindReplace */

/* 19236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19242 */	NdrFcShort( 0x7 ),	/* 7 */
/* 19244 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 19246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19248 */	NdrFcShort( 0x40 ),	/* 64 */
/* 19250 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 19252 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 19254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSource */

/* 19260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19264 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ichFirst */

/* 19266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichMinFound */

/* 19272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ichLimFound */

/* 19278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrReplacement */

/* 19284 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19288 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 19290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19292 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConvertString */

/* 19296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19302 */	NdrFcShort( 0x3 ),	/* 3 */
/* 19304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19310 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 19312 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 19314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrIn */

/* 19320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19324 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstrOut */

/* 19326 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19330 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 19332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConvertStringRgch */

/* 19338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19344 */	NdrFcShort( 0x4 ),	/* 4 */
/* 19346 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 19348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 19350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 19352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 19354 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 19356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgch */

/* 19362 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19366 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cch */

/* 19368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cchMax */

/* 19374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgchOut */

/* 19380 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 19382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19384 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter pcchOut */

/* 19386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19394 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetToken */

/* 19398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19404 */	NdrFcShort( 0x3 ),	/* 3 */
/* 19406 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19410 */	NdrFcShort( 0x40 ),	/* 64 */
/* 19412 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 19414 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchInput */

/* 19422 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19426 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cch */

/* 19428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMin */

/* 19434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 19440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19448 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TokenStart */

/* 19452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19458 */	NdrFcShort( 0x4 ),	/* 4 */
/* 19460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 19466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 19468 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrInput */

/* 19476 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19480 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ichFirst */

/* 19482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMin */

/* 19488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TokenEnd */

/* 19500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19506 */	NdrFcShort( 0x5 ),	/* 5 */
/* 19508 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 19514 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 19516 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrInput */

/* 19524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19528 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ichFirst */

/* 19530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLim */

/* 19536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */

/* 19548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19554 */	NdrFcShort( 0x3 ),	/* 3 */
/* 19556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 19564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszwCustom */

/* 19572 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19576 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Return value */

/* 19578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Check */

/* 19584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19590 */	NdrFcShort( 0x5 ),	/* 5 */
/* 19592 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 19594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19596 */	NdrFcShort( 0x5c ),	/* 92 */
/* 19598 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 19600 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 19602 */	NdrFcShort( 0x2 ),	/* 2 */
/* 19604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchw */

/* 19608 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19612 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchw */

/* 19614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichMinBad */

/* 19620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichLimBad */

/* 19626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19628 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrBad */

/* 19632 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19634 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19636 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pbstrSuggest */

/* 19638 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19640 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19642 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pscrs */

/* 19644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19646 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 19648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19652 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 19654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Suggest */

/* 19656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19662 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19664 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19666 */	NdrFcShort( 0xe ),	/* 14 */
/* 19668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19670 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 19672 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 19674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgchw */

/* 19680 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19684 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchw */

/* 19686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fFirst */

/* 19692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19696 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbstrSuggest */

/* 19698 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19702 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 19704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19706 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IgnoreAll */

/* 19710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19716 */	NdrFcShort( 0x7 ),	/* 7 */
/* 19718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19724 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 19726 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszw */

/* 19734 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19738 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Return value */

/* 19740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Change */

/* 19746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19754 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 19756 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 19762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszwSrc */

/* 19770 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19774 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Parameter pszwDst */

/* 19776 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19780 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Parameter fAll */

/* 19782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19786 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 19788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19790 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddToUser */

/* 19794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19800 */	NdrFcShort( 0x9 ),	/* 9 */
/* 19802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 19810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszw */

/* 19818 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 19820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19822 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Return value */

/* 19824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlushChangeList */

/* 19830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19836 */	NdrFcShort( 0xb ),	/* 11 */
/* 19838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19840 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19844 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 19846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fAll */

/* 19854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19858 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 19860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Checker */

/* 19866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19872 */	NdrFcShort( 0x3 ),	/* 3 */
/* 19874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 19882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 19884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppspchk */

/* 19890 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 19892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19894 */	NdrFcShort( 0x96c ),	/* Type Offset=2412 */

	/* Return value */

/* 19896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_TransliteratorName */


	/* Procedure get_ConverterName */


	/* Procedure get_IntToPrettyString */

/* 19902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 19910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19916 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 19918 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 19920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iloc */


	/* Parameter itrans */


	/* Parameter iconv */


	/* Parameter n */

/* 19926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 19928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */


	/* Parameter pbstrName */


	/* Parameter pbstrName */


	/* Parameter bstr */

/* 19932 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 19934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19936 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 19938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StringToInt */

/* 19944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19950 */	NdrFcShort( 0x5 ),	/* 5 */
/* 19952 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 19954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19956 */	NdrFcShort( 0x24 ),	/* 36 */
/* 19958 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 19960 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 19962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 19964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 19966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 19968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 19970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 19972 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pn */

/* 19974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 19976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 19978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 19980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 19982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 19984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToIntRgch */

/* 19986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 19988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 19992 */	NdrFcShort( 0x6 ),	/* 6 */
/* 19994 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 19996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 19998 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 20002 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgch */

/* 20010 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 20012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20014 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cch */

/* 20016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pn */

/* 20022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pichUnused */

/* 20028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 20034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DblToString */

/* 20040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20046 */	NdrFcShort( 0x7 ),	/* 7 */
/* 20048 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 20050 */	NdrFcShort( 0x18 ),	/* 24 */
/* 20052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20054 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20056 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 20058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dbl */

/* 20064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20068 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cchFracDigits */

/* 20070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 20076 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 20078 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20080 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 20082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20084 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DblToPrettyString */

/* 20088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20096 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 20098 */	NdrFcShort( 0x18 ),	/* 24 */
/* 20100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20104 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 20106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dbl */

/* 20112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20116 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cchFracDigits */

/* 20118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 20124 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 20126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20128 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 20130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20132 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DblToExpString */

/* 20136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20142 */	NdrFcShort( 0x9 ),	/* 9 */
/* 20144 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 20146 */	NdrFcShort( 0x18 ),	/* 24 */
/* 20148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20150 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20152 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 20154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dbl */

/* 20160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20164 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter cchFracDigits */

/* 20166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 20172 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 20174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20176 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 20178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20180 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_StringToDbl */

/* 20184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20190 */	NdrFcShort( 0xa ),	/* 10 */
/* 20192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20196 */	NdrFcShort( 0x2c ),	/* 44 */
/* 20198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 20200 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 20208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 20210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20212 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pdbl */

/* 20214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20218 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 20220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToDblRgch */

/* 20226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20232 */	NdrFcShort( 0xb ),	/* 11 */
/* 20234 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 20236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20238 */	NdrFcShort( 0x48 ),	/* 72 */
/* 20240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 20242 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prgch */

/* 20250 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 20252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20254 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cch */

/* 20256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdbl */

/* 20262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20266 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pichUnused */

/* 20268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 20274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20276 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Engine */

/* 20280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20286 */	NdrFcShort( 0x3 ),	/* 3 */
/* 20288 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20294 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 20296 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrIcuLocale */

/* 20304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 20306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppwseng */

/* 20310 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20314 */	NdrFcShort( 0x982 ),	/* Type Offset=2434 */

	/* Return value */

/* 20316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EngineOrNull */

/* 20322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 20330 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20336 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 20338 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 20346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwseng */

/* 20352 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20356 */	NdrFcShort( 0x982 ),	/* Type Offset=2434 */

	/* Return value */

/* 20358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddEngine */

/* 20364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20370 */	NdrFcShort( 0x5 ),	/* 5 */
/* 20372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 20380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwseng */

/* 20388 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20392 */	NdrFcShort( 0x956 ),	/* Type Offset=2390 */

	/* Return value */

/* 20394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWsFromStr */

/* 20400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20406 */	NdrFcShort( 0x7 ),	/* 7 */
/* 20408 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 20414 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 20416 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 20424 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 20426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20428 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pwsId */

/* 20430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 20436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NumberOfWs */

/* 20442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20448 */	NdrFcShort( 0x9 ),	/* 9 */
/* 20450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 20456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 20458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcws */

/* 20466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 20472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWritingSystems */

/* 20478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20484 */	NdrFcShort( 0xa ),	/* 10 */
/* 20486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20492 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 20494 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 20496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rgws */

/* 20502 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 20504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20506 */	NdrFcShort( 0x98a ),	/* Type Offset=2442 */

	/* Parameter cws */

/* 20508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 20514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UnicodeCharProps */

/* 20520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20526 */	NdrFcShort( 0xb ),	/* 11 */
/* 20528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20534 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 20536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pplcpe */

/* 20544 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20548 */	NdrFcShort( 0x996 ),	/* Type Offset=2454 */

	/* Return value */

/* 20550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DefaultCollater */

/* 20556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20562 */	NdrFcShort( 0xc ),	/* 12 */
/* 20564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 20572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 20580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppcoleng */

/* 20586 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20590 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 20592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CharPropEngine */

/* 20598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20604 */	NdrFcShort( 0xd ),	/* 13 */
/* 20606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20612 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 20614 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 20622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pplcpe */

/* 20628 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20632 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 20634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Renderer */

/* 20640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20646 */	NdrFcShort( 0xe ),	/* 14 */
/* 20648 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20654 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ws */

/* 20664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvg */

/* 20670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20674 */	NdrFcShort( 0x9ac ),	/* Type Offset=2476 */

	/* Parameter ppre */

/* 20676 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20680 */	NdrFcShort( 0x9be ),	/* Type Offset=2494 */

	/* Return value */

/* 20682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20684 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RendererFromChrp */

/* 20688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20694 */	NdrFcShort( 0xf ),	/* 15 */
/* 20696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20698 */	NdrFcShort( 0x134 ),	/* 308 */
/* 20700 */	NdrFcShort( 0x13c ),	/* 316 */
/* 20702 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 20704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pchrp */

/* 20712 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 20714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20716 */	NdrFcShort( 0x340 ),	/* Type Offset=832 */

	/* Parameter ppre */

/* 20718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20722 */	NdrFcShort( 0x9be ),	/* Type Offset=2494 */

	/* Return value */

/* 20724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */

/* 20730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20736 */	NdrFcShort( 0x11 ),	/* 17 */
/* 20738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 20754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 20760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20766 */	NdrFcShort( 0x13 ),	/* 19 */
/* 20768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20774 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 20776 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 20784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20788 */	NdrFcShort( 0x9d4 ),	/* Type Offset=2516 */

	/* Return value */

/* 20790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BypassInstall */

/* 20796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20802 */	NdrFcShort( 0x15 ),	/* 21 */
/* 20804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20808 */	NdrFcShort( 0x22 ),	/* 34 */
/* 20810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 20812 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfBypass */

/* 20820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 20822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20824 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 20826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BypassInstall */

/* 20832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20838 */	NdrFcShort( 0x16 ),	/* 22 */
/* 20840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20842 */	NdrFcShort( 0x6 ),	/* 6 */
/* 20844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 20848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fBypass */

/* 20856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 20858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20860 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 20862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWritingSystemFactory */

/* 20868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20874 */	NdrFcShort( 0x3 ),	/* 3 */
/* 20876 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20882 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20884 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pode */

/* 20892 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20896 */	NdrFcShort( 0x2aa ),	/* Type Offset=682 */

	/* Parameter pfistLog */

/* 20898 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20902 */	NdrFcShort( 0x9e6 ),	/* Type Offset=2534 */

	/* Parameter ppwsf */

/* 20904 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20908 */	NdrFcShort( 0x9f8 ),	/* Type Offset=2552 */

	/* Return value */

/* 20910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWritingSystemFactoryNew */

/* 20916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20922 */	NdrFcShort( 0x4 ),	/* 4 */
/* 20924 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 20926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20930 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 20932 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 20934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20936 */	NdrFcShort( 0x2 ),	/* 2 */
/* 20938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrServer */

/* 20940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 20942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20944 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDatabase */

/* 20946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 20948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 20950 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pfistLog */

/* 20952 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20956 */	NdrFcShort( 0x9e6 ),	/* Type Offset=2534 */

	/* Parameter ppwsf */

/* 20958 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 20960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20962 */	NdrFcShort( 0x9f8 ),	/* Type Offset=2552 */

	/* Return value */

/* 20964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 20966 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 20968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserialize */

/* 20970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 20972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20976 */	NdrFcShort( 0x5 ),	/* 5 */
/* 20978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 20980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 20986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 20988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 20994 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 20996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20998 */	NdrFcShort( 0xa0e ),	/* Type Offset=2574 */

	/* Parameter ppwsf */

/* 21000 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 21002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21004 */	NdrFcShort( 0xa20 ),	/* Type Offset=2592 */

	/* Return value */

/* 21006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 21012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21018 */	NdrFcShort( 0x3 ),	/* 3 */
/* 21020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21026 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 21028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 21036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21040 */	NdrFcShort( 0xa24 ),	/* Type Offset=2596 */

	/* Parameter pptss */

/* 21042 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 21044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21046 */	NdrFcShort( 0xa36 ),	/* Type Offset=2614 */

	/* Return value */

/* 21048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_String */

/* 21054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 21062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 21070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwsf */

/* 21078 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21082 */	NdrFcShort( 0xa24 ),	/* Type Offset=2596 */

	/* Parameter ptss */

/* 21084 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21088 */	NdrFcShort( 0xa3a ),	/* Type Offset=2618 */

	/* Return value */

/* 21090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Serialize */

/* 21096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21102 */	NdrFcShort( 0x6 ),	/* 6 */
/* 21104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21110 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 21112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 21120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21124 */	NdrFcShort( 0xa0e ),	/* Type Offset=2574 */

	/* Return value */

/* 21126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Deserialize */

/* 21132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21138 */	NdrFcShort( 0x7 ),	/* 7 */
/* 21140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 21148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pstg */

/* 21156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21160 */	NdrFcShort( 0xa0e ),	/* Type Offset=2574 */

	/* Return value */

/* 21162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Init */

/* 21168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21174 */	NdrFcShort( 0x3 ),	/* 3 */
/* 21176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21182 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 21184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ptsswss */

/* 21192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 21194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21196 */	NdrFcShort( 0xa4c ),	/* Type Offset=2636 */

	/* Return value */

/* 21198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Language */


	/* Procedure get_TransliteratorId */


	/* Procedure get_ConverterId */


	/* Procedure get_Name */

/* 21204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21210 */	NdrFcShort( 0x5 ),	/* 5 */
/* 21212 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21218 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 21220 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 21222 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iloc */


	/* Parameter iconv */


	/* Parameter iconv */


	/* Parameter ilayout */

/* 21228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 21230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */


	/* Parameter pbstrName */


	/* Parameter pbstrName */


	/* Parameter pbstrName */

/* 21234 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 21236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21238 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 21240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */


	/* Procedure get_ActiveKeyboardName */

/* 21246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21252 */	NdrFcShort( 0x6 ),	/* 6 */
/* 21254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 21262 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 21264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrName */


	/* Parameter pbstrName */

/* 21270 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 21272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21274 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 21276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ActiveKeyboardName */

/* 21282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21288 */	NdrFcShort( 0x7 ),	/* 7 */
/* 21290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 21298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 21300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 21306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 21308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21310 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 21312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetKeyboard */

/* 21318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21324 */	NdrFcShort( 0x3 ),	/* 3 */
/* 21326 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 21328 */	NdrFcShort( 0x3e ),	/* 62 */
/* 21330 */	NdrFcShort( 0x3e ),	/* 62 */
/* 21332 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 21334 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 21336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21338 */	NdrFcShort( 0x2 ),	/* 2 */
/* 21340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nLcid */

/* 21342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 21344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKeymanKbd */

/* 21348 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 21350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21352 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pnActiveLangId */

/* 21354 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 21356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrActiveKeymanKbd */

/* 21360 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 21362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21364 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pfSelectLangPending */

/* 21366 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 21368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 21370 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 21372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 21376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */


	/* Procedure Next */

/* 21378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21384 */	NdrFcShort( 0x4 ),	/* 4 */
/* 21386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 21392 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 21394 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 21396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pnId */


	/* Parameter pnId */

/* 21402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 21404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */


	/* Parameter pbstrName */

/* 21408 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 21410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21412 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */


	/* Return value */

/* 21414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Variant */

/* 21420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21426 */	NdrFcShort( 0x7 ),	/* 7 */
/* 21428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21434 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 21436 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 21438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iloc */

/* 21444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 21446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrName */

/* 21450 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 21452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21454 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 21456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 21462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21470 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 21472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 21478 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 21480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iloc */

/* 21486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 21488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLocaleName */

/* 21492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 21494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21496 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstrName */

/* 21498 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 21500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21502 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 21504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetSubsection */

/* 21510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21516 */	NdrFcShort( 0x7 ),	/* 7 */
/* 21518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 21520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21524 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 21526 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 21528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 21532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSectionName */

/* 21534 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 21536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21538 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pprb */

/* 21540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 21542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21544 */	NdrFcShort( 0xa62 ),	/* Type Offset=2658 */

	/* Return value */

/* 21546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasNext */

/* 21552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21564 */	NdrFcShort( 0x22 ),	/* 34 */
/* 21566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 21568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfHasNext */

/* 21576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 21578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21580 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 21582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Next */

/* 21588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 21590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 21594 */	NdrFcShort( 0x9 ),	/* 9 */
/* 21596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 21598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 21602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 21604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 21606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 21610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pprb */

/* 21612 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 21614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 21616 */	NdrFcShort( 0xa62 ),	/* Type Offset=2658 */

	/* Return value */

/* 21618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 21620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 21622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
		}
	};

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
	{
		0,
		{
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 40 */	NdrFcLong( 0xfe44e19b ),	/* -29040229 */
/* 44 */	NdrFcShort( 0xe710 ),	/* -6384 */
/* 46 */	NdrFcShort( 0x4635 ),	/* 17973 */
/* 48 */	0x96,		/* 150 */
			0x90,		/* 144 */
/* 50 */	0x1a,		/* 26 */
			0xfb,		/* 251 */
/* 52 */	0x45,		/* 69 */
			0x1b,		/* 27 */
/* 54 */	0x12,		/* 18 */
			0x26,		/* 38 */
/* 56 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 62 */	NdrFcLong( 0xe9e5a6c ),	/* 245258860 */
/* 66 */	NdrFcShort( 0xba20 ),	/* -17888 */
/* 68 */	NdrFcShort( 0x4245 ),	/* 16965 */
/* 70 */	0x8e,		/* 142 */
			0x26,		/* 38 */
/* 72 */	0x71,		/* 113 */
			0x9a,		/* 154 */
/* 74 */	0x67,		/* 103 */
			0xfe,		/* 254 */
/* 76 */	0x18,		/* 24 */
			0x92,		/* 146 */
/* 78 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 80 */	NdrFcShort( 0x6 ),	/* Offset= 6 (86) */
/* 82 */
			0x13, 0x0,	/* FC_OP */
/* 84 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (18) */
/* 86 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (82) */
/* 96 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 98 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 100 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 102 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 104 */
			0x11, 0x0,	/* FC_RP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 114 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 118 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 120 */
			0x11, 0x0,	/* FC_RP */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 128 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 130 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 132 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 134 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 136 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 138 */	NdrFcLong( 0x2f6bb7c9 ),	/* 795588553 */
/* 142 */	NdrFcShort( 0x1b3a ),	/* 6970 */
/* 144 */	NdrFcShort( 0x4e94 ),	/* 20116 */
/* 146 */	0xa7,		/* 167 */
			0xbf,		/* 191 */
/* 148 */	0x78,		/* 120 */
			0x2c,		/* 44 */
/* 150 */	0x23,		/* 35 */
			0x69,		/* 105 */
/* 152 */	0xf6,		/* 246 */
			0x81,		/* 129 */
/* 154 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 156 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 158 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 164 */	NdrFcLong( 0xc38348d3 ),	/* -1014806317 */
/* 168 */	NdrFcShort( 0x392c ),	/* 14636 */
/* 170 */	NdrFcShort( 0x4e02 ),	/* 19970 */
/* 172 */	0xbd,		/* 189 */
			0x50,		/* 80 */
/* 174 */	0xa0,		/* 160 */
			0x1d,		/* 29 */
/* 176 */	0xc4,		/* 196 */
			0x18,		/* 24 */
/* 178 */	0x9e,		/* 158 */
			0x1d,		/* 29 */
/* 180 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 182 */	NdrFcLong( 0x14e389c6 ),	/* 350456262 */
/* 186 */	NdrFcShort( 0xc986 ),	/* -13946 */
/* 188 */	NdrFcShort( 0x4e31 ),	/* 20017 */
/* 190 */	0xae,		/* 174 */
			0x70,		/* 112 */
/* 192 */	0x1c,		/* 28 */
			0xc1,		/* 193 */
/* 194 */	0xc,		/* 12 */
			0xc3,		/* 195 */
/* 196 */	0x54,		/* 84 */
			0x71,		/* 113 */
/* 198 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0xc ),	/* 12 */
/* 206 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 210 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 212 */	NdrFcShort( 0x2 ),	/* Offset= 2 (214) */
/* 214 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 216 */	NdrFcLong( 0x4fa0b99a ),	/* 1335933338 */
/* 220 */	NdrFcShort( 0x5a56 ),	/* 23126 */
/* 222 */	NdrFcShort( 0x41a4 ),	/* 16804 */
/* 224 */	0xbe,		/* 190 */
			0x8b,		/* 139 */
/* 226 */	0xb8,		/* 184 */
			0x9b,		/* 155 */
/* 228 */	0xc6,		/* 198 */
			0x22,		/* 34 */
/* 230 */	0x51,		/* 81 */
			0xa5,		/* 165 */
/* 232 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 234 */	NdrFcShort( 0x2 ),	/* Offset= 2 (236) */
/* 236 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 238 */	NdrFcLong( 0xf1ef76e6 ),	/* -235964698 */
/* 242 */	NdrFcShort( 0xbe04 ),	/* -16892 */
/* 244 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 246 */	0x8d,		/* 141 */
			0x9a,		/* 154 */
/* 248 */	0x0,		/* 0 */
			0x50,		/* 80 */
/* 250 */	0x4,		/* 4 */
			0xde,		/* 222 */
/* 252 */	0xfe,		/* 254 */
			0xc4,		/* 196 */
/* 254 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (258) */
/* 258 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 260 */	NdrFcLong( 0xf1ef76e7 ),	/* -235964697 */
/* 264 */	NdrFcShort( 0xbe04 ),	/* -16892 */
/* 266 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 268 */	0x8d,		/* 141 */
			0x9a,		/* 154 */
/* 270 */	0x0,		/* 0 */
			0x50,		/* 80 */
/* 272 */	0x4,		/* 4 */
			0xde,		/* 222 */
/* 274 */	0xfe,		/* 254 */
			0xc4,		/* 196 */
/* 276 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 278 */	NdrFcShort( 0x8 ),	/* Offset= 8 (286) */
/* 280 */
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 286 */
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 290 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 292 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 294 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (280) */
			0x5b,		/* FC_END */
/* 298 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 300 */	NdrFcLong( 0xc ),	/* 12 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 310 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 312 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 314 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 316 */
			0x11, 0x0,	/* FC_RP */
/* 318 */	NdrFcShort( 0x2 ),	/* Offset= 2 (320) */
/* 320 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 324 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 330 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 332 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 334 */	NdrFcLong( 0x2c4636e3 ),	/* 742799075 */
/* 338 */	NdrFcShort( 0x4f49 ),	/* 20297 */
/* 340 */	NdrFcShort( 0x4966 ),	/* 18790 */
/* 342 */	0x96,		/* 150 */
			0x6f,		/* 111 */
/* 344 */	0x9,		/* 9 */
			0x53,		/* 83 */
/* 346 */	0xf9,		/* 249 */
			0x7f,		/* 127 */
/* 348 */	0x51,		/* 81 */
			0xc8,		/* 200 */
/* 350 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (354) */
/* 354 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 356 */	NdrFcLong( 0xf1ef76e8 ),	/* -235964696 */
/* 360 */	NdrFcShort( 0xbe04 ),	/* -16892 */
/* 362 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 364 */	0x8d,		/* 141 */
			0x9a,		/* 154 */
/* 366 */	0x0,		/* 0 */
			0x50,		/* 80 */
/* 368 */	0x4,		/* 4 */
			0xde,		/* 222 */
/* 370 */	0xfe,		/* 254 */
			0xc4,		/* 196 */
/* 372 */
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 374 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (214) */
/* 376 */
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 378 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 380 */
			0x11, 0x0,	/* FC_RP */
/* 382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (384) */
/* 384 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 392 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 394 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 396 */
			0x11, 0x0,	/* FC_RP */
/* 398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (400) */
/* 400 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 408 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 410 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 412 */
			0x11, 0x0,	/* FC_RP */
/* 414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (416) */
/* 416 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 418 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 422 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 424 */
			0x11, 0x0,	/* FC_RP */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 432 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 438 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 440 */
			0x11, 0x0,	/* FC_RP */
/* 442 */	NdrFcShort( 0x2 ),	/* Offset= 2 (444) */
/* 444 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 446 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 450 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 452 */
			0x11, 0x0,	/* FC_RP */
/* 454 */	NdrFcShort( 0x2 ),	/* Offset= 2 (456) */
/* 456 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 458 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 462 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 464 */
			0x11, 0x0,	/* FC_RP */
/* 466 */	NdrFcShort( 0x2 ),	/* Offset= 2 (468) */
/* 468 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 472 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 476 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 478 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 480 */
			0x11, 0x0,	/* FC_RP */
/* 482 */	NdrFcShort( 0x2 ),	/* Offset= 2 (484) */
/* 484 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 488 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 492 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 494 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 496 */
			0x11, 0x0,	/* FC_RP */
/* 498 */	NdrFcShort( 0x2 ),	/* Offset= 2 (500) */
/* 500 */
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 510 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 514 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xfed0 ),	/* Offset= -304 (214) */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */
			0x11, 0x0,	/* FC_RP */
/* 524 */	NdrFcShort( 0x2 ),	/* Offset= 2 (526) */
/* 526 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 534 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 536 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 538 */
			0x11, 0x0,	/* FC_RP */
/* 540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (542) */
/* 542 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 544 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 548 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 550 */
			0x11, 0x0,	/* FC_RP */
/* 552 */	NdrFcShort( 0x2 ),	/* Offset= 2 (554) */
/* 554 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 556 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 560 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 562 */
			0x11, 0x0,	/* FC_RP */
/* 564 */	NdrFcShort( 0x2 ),	/* Offset= 2 (566) */
/* 566 */
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 568 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 572 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 574 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 576 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (298) */
/* 578 */
			0x11, 0x0,	/* FC_RP */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 586 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 590 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 592 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 594 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 610 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 612 */
			0x11, 0x0,	/* FC_RP */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x4 ),	/* 4 */
/* 620 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 622 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 624 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 626 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 628 */
			0x11, 0x0,	/* FC_RP */
/* 630 */	NdrFcShort( 0x2 ),	/* Offset= 2 (632) */
/* 632 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 636 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 638 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 640 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 642 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 644 */
			0x11, 0x0,	/* FC_RP */
/* 646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (648) */
/* 648 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 650 */	NdrFcShort( 0x2 ),	/* 2 */
/* 652 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 654 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 656 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 658 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 660 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (664) */
/* 664 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 666 */	NdrFcLong( 0x21993161 ),	/* 563687777 */
/* 670 */	NdrFcShort( 0x3e24 ),	/* 15908 */
/* 672 */	NdrFcShort( 0x11d4 ),	/* 4564 */
/* 674 */	0xa1,		/* 161 */
			0xbd,		/* 189 */
/* 676 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 678 */	0x4f,		/* 79 */
			0xc,		/* 12 */
/* 680 */	0x95,		/* 149 */
			0x93,		/* 147 */
/* 682 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 684 */	NdrFcLong( 0xcb7bea0f ),	/* -881071601 */
/* 688 */	NdrFcShort( 0x960a ),	/* -27126 */
/* 690 */	NdrFcShort( 0x4b23 ),	/* 19235 */
/* 692 */	0x80,		/* 128 */
			0xd3,		/* 211 */
/* 694 */	0xde,		/* 222 */
			0x6,		/* 6 */
/* 696 */	0xc0,		/* 192 */
			0x53,		/* 83 */
/* 698 */	0xe,		/* 14 */
			0x4,		/* 4 */
/* 700 */
			0x11, 0x0,	/* FC_RP */
/* 702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (704) */
/* 704 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 712 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 714 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 716 */
			0x11, 0x0,	/* FC_RP */
/* 718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (720) */
/* 720 */
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 724 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 728 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 730 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 736 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 738 */
			0x11, 0x0,	/* FC_RP */
/* 740 */	NdrFcShort( 0x2 ),	/* Offset= 2 (742) */
/* 742 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 746 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 748 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 750 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 752 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 754 */
			0x11, 0x0,	/* FC_RP */
/* 756 */	NdrFcShort( 0x2 ),	/* Offset= 2 (758) */
/* 758 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 760 */	NdrFcShort( 0x2 ),	/* 2 */
/* 762 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 768 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 770 */
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0x2 ),	/* Offset= 2 (774) */
/* 774 */
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x10 ),	/* 16 */
/* 778 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 780 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */
			0x11, 0x0,	/* FC_RP */
/* 786 */	NdrFcShort( 0x2 ),	/* Offset= 2 (788) */
/* 788 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 790 */	NdrFcShort( 0x2 ),	/* 2 */
/* 792 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 796 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 798 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 800 */
			0x11, 0x0,	/* FC_RP */
/* 802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (804) */
/* 804 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 806 */	NdrFcShort( 0x2 ),	/* 2 */
/* 808 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 810 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 812 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 814 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 816 */
			0x11, 0x0,	/* FC_RP */
/* 818 */	NdrFcShort( 0xe ),	/* Offset= 14 (832) */
/* 820 */
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 822 */	NdrFcShort( 0x40 ),	/* 64 */
/* 824 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 826 */
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 828 */	NdrFcShort( 0x80 ),	/* 128 */
/* 830 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 832 */
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0xf0 ),	/* 240 */
/* 836 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 838 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 840 */	0x8,		/* FC_LONG */
			0x1,		/* FC_BYTE */
/* 842 */	0x3f,		/* FC_STRUCTPAD3 */
			0x8,		/* FC_LONG */
/* 844 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 846 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 848 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 850 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (820) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 854 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (826) */
			0x5b,		/* FC_END */
/* 858 */
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 876 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 878 */	NdrFcShort( 0xffec ),	/* Offset= -20 (858) */
/* 880 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 882 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 884 */	NdrFcLong( 0x7bf80980 ),	/* 2079852928 */
/* 888 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 890 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 892 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 894 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 896 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 898 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 900 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 902 */	NdrFcShort( 0xffec ),	/* Offset= -20 (882) */
/* 904 */
			0x11, 0x0,	/* FC_RP */
/* 906 */	NdrFcShort( 0x2 ),	/* Offset= 2 (908) */
/* 908 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 912 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 918 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 920 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* Offset= 0 (930) */
/* 932 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 936 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 938 */	NdrFcLong( 0xd7364ef2 ),	/* -684306702 */
/* 942 */	NdrFcShort( 0x43c0 ),	/* 17344 */
/* 944 */	NdrFcShort( 0x4440 ),	/* 17472 */
/* 946 */	0x87,		/* 135 */
			0x2a,		/* 42 */
/* 948 */	0x33,		/* 51 */
			0x6a,		/* 106 */
/* 950 */	0x46,		/* 70 */
			0x47,		/* 71 */
/* 952 */	0xb9,		/* 185 */
			0xa3,		/* 163 */
/* 954 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 956 */	NdrFcLong( 0x3a3ce0a1 ),	/* 977068193 */
/* 960 */	NdrFcShort( 0xb5eb ),	/* -18965 */
/* 962 */	NdrFcShort( 0x43bd ),	/* 17341 */
/* 964 */	0x9c,		/* 156 */
			0x89,		/* 137 */
/* 966 */	0x35,		/* 53 */
			0xea,		/* 234 */
/* 968 */	0xa1,		/* 161 */
			0x10,		/* 16 */
/* 970 */	0xf1,		/* 241 */
			0x2b,		/* 43 */
/* 972 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 974 */	NdrFcShort( 0xff38 ),	/* Offset= -200 (774) */
/* 976 */
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 978 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 980 */
			0x11, 0x0,	/* FC_RP */
/* 982 */	NdrFcShort( 0x2 ),	/* Offset= 2 (984) */
/* 984 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 986 */	NdrFcShort( 0x4 ),	/* 4 */
/* 988 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 990 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 992 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 994 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 996 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 998 */	NdrFcLong( 0x92ac8be4 ),	/* -1834185756 */
/* 1002 */	NdrFcShort( 0xedc8 ),	/* -4664 */
/* 1004 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1006 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1008 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1010 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1012 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1014 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1016 */	NdrFcLong( 0xbac7725f ),	/* -1161334177 */
/* 1020 */	NdrFcShort( 0x1d26 ),	/* 7462 */
/* 1022 */	NdrFcShort( 0x42b2 ),	/* 17074 */
/* 1024 */	0x8e,		/* 142 */
			0x9d,		/* 157 */
/* 1026 */	0x8b,		/* 139 */
			0x91,		/* 145 */
/* 1028 */	0x75,		/* 117 */
			0x78,		/* 120 */
/* 1030 */	0x2c,		/* 44 */
			0xc7,		/* 199 */
/* 1032 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1034 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1036) */
/* 1036 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1038 */	NdrFcLong( 0x7407f0fc ),	/* 1946677500 */
/* 1042 */	NdrFcShort( 0x58b0 ),	/* 22704 */
/* 1044 */	NdrFcShort( 0x4476 ),	/* 17526 */
/* 1046 */	0xa0,		/* 160 */
			0xc8,		/* 200 */
/* 1048 */	0x69,		/* 105 */
			0x43,		/* 67 */
/* 1050 */	0x18,		/* 24 */
			0x1,		/* 1 */
/* 1052 */	0xe5,		/* 229 */
			0x60,		/* 96 */
/* 1054 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1056 */	NdrFcShort( 0xfd2c ),	/* Offset= -724 (332) */
/* 1058 */
			0x11, 0x0,	/* FC_RP */
/* 1060 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1062) */
/* 1062 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1070 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1072 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1074 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1076 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1078 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1080 */	NdrFcLong( 0xb ),	/* 11 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1090 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1094 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1096 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1098 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1100) */
/* 1100 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1102 */	NdrFcLong( 0xd224002 ),	/* 220348418 */
/* 1106 */	NdrFcShort( 0x3c7 ),	/* 967 */
/* 1108 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1110 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1112 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1114 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1116 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1118 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1122) */
/* 1122 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1124 */	NdrFcLong( 0xd224003 ),	/* 220348419 */
/* 1128 */	NdrFcShort( 0x3c7 ),	/* 967 */
/* 1130 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1132 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1136 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1138 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1140 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1144) */
/* 1144 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1146 */	NdrFcLong( 0xfc1c0d01 ),	/* -65270527 */
/* 1150 */	NdrFcShort( 0x483 ),	/* 1155 */
/* 1152 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1154 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1158 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1160 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1162 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1166) */
/* 1166 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1168 */	NdrFcLong( 0xd224006 ),	/* 220348422 */
/* 1172 */	NdrFcShort( 0x3c7 ),	/* 967 */
/* 1174 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1176 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1178 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1180 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1182 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1184 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1188) */
/* 1188 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1190 */	NdrFcLong( 0xd224001 ),	/* 220348417 */
/* 1194 */	NdrFcShort( 0x3c7 ),	/* 967 */
/* 1196 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 1198 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 1200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1202 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 1204 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 1206 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1210) */
/* 1210 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1212 */	NdrFcLong( 0x93cb892f ),	/* -1815377617 */
/* 1216 */	NdrFcShort( 0x16d1 ),	/* 5841 */
/* 1218 */	NdrFcShort( 0x4dca ),	/* 19914 */
/* 1220 */	0x9c,		/* 156 */
			0x71,		/* 113 */
/* 1222 */	0x2e,		/* 46 */
			0x80,		/* 128 */
/* 1224 */	0x4b,		/* 75 */
			0xc9,		/* 201 */
/* 1226 */	0x39,		/* 57 */
			0x5c,		/* 92 */
/* 1228 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1232) */
/* 1232 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1234 */	NdrFcLong( 0x254db9e3 ),	/* 625850851 */
/* 1238 */	NdrFcShort( 0x265 ),	/* 613 */
/* 1240 */	NdrFcShort( 0x49cf ),	/* 18895 */
/* 1242 */	0xa1,		/* 161 */
			0x9f,		/* 159 */
/* 1244 */	0x3c,		/* 60 */
			0x75,		/* 117 */
/* 1246 */	0xe8,		/* 232 */
			0x52,		/* 82 */
/* 1248 */	0x5a,		/* 90 */
			0x28,		/* 40 */
/* 1250 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1252 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1254) */
/* 1254 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1256 */	NdrFcLong( 0xdb78d60b ),	/* -612837877 */
/* 1260 */	NdrFcShort( 0xe43e ),	/* -7106 */
/* 1262 */	NdrFcShort( 0x4464 ),	/* 17508 */
/* 1264 */	0xb8,		/* 184 */
			0xae,		/* 174 */
/* 1266 */	0xc5,		/* 197 */
			0xc9,		/* 201 */
/* 1268 */	0xa0,		/* 160 */
			0xe,		/* 14 */
/* 1270 */	0x2c,		/* 44 */
			0x4,		/* 4 */
/* 1272 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1276) */
/* 1276 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1278 */	NdrFcLong( 0x7c8b7f40 ),	/* 2089516864 */
/* 1282 */	NdrFcShort( 0x40c8 ),	/* 16584 */
/* 1284 */	NdrFcShort( 0x47f7 ),	/* 18423 */
/* 1286 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 1288 */	0x45,		/* 69 */
			0x37,		/* 55 */
/* 1290 */	0x24,		/* 36 */
			0x15,		/* 21 */
/* 1292 */	0x77,		/* 119 */
			0x8d,		/* 141 */
/* 1294 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1296 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1298 */
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1300 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1302 */
			0x11, 0x0,	/* FC_RP */
/* 1304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1306) */
/* 1306 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1308 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1310 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1314 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1316 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1318 */
			0x11, 0x0,	/* FC_RP */
/* 1320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1322) */
/* 1322 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1326 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1332 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1334 */
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1336 */	NdrFcShort( 0x3e2 ),	/* Offset= 994 (2330) */
/* 1338 */
			0x13, 0x0,	/* FC_OP */
/* 1340 */	NdrFcShort( 0x3ca ),	/* Offset= 970 (2310) */
/* 1342 */
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1344 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1346 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1348 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1352) */
/* 1352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1354 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1356 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1360 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1362 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1366 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1368 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1372 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 1374 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1378 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1380 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1384 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1386 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1390 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1392 */	NdrFcLong( 0xb ),	/* 11 */
/* 1396 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1398 */	NdrFcLong( 0xa ),	/* 10 */
/* 1402 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1404 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1408 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (1640) */
/* 1410 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1414 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1416 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1420 */	NdrFcShort( 0xfac6 ),	/* Offset= -1338 (82) */
/* 1422 */	NdrFcLong( 0xd ),	/* 13 */
/* 1426 */	NdrFcShort( 0xfcc0 ),	/* Offset= -832 (594) */
/* 1428 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1432 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1646) */
/* 1434 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1438 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (1664) */
/* 1440 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1444 */	NdrFcShort( 0x318 ),	/* Offset= 792 (2236) */
/* 1446 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 1450 */	NdrFcShort( 0x312 ),	/* Offset= 786 (2236) */
/* 1452 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1456 */	NdrFcShort( 0x310 ),	/* Offset= 784 (2240) */
/* 1458 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1462 */	NdrFcShort( 0x30e ),	/* Offset= 782 (2244) */
/* 1464 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1468 */	NdrFcShort( 0x30c ),	/* Offset= 780 (2248) */
/* 1470 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 1474 */	NdrFcShort( 0x30a ),	/* Offset= 778 (2252) */
/* 1476 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1480 */	NdrFcShort( 0x308 ),	/* Offset= 776 (2256) */
/* 1482 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1486 */	NdrFcShort( 0x306 ),	/* Offset= 774 (2260) */
/* 1488 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1492 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (2244) */
/* 1494 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1498 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (2248) */
/* 1500 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1504 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (2264) */
/* 1506 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1510 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (2260) */
/* 1512 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1516 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (2268) */
/* 1518 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1522 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (2272) */
/* 1524 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1528 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (2276) */
/* 1530 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1534 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (2280) */
/* 1536 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1540 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (2284) */
/* 1542 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1546 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1548 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1552 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1554 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1558 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1560 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1564 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1566 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1570 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1572 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1576 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1578 */	NdrFcLong( 0xe ),	/* 14 */
/* 1582 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (2292) */
/* 1584 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1588 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (2302) */
/* 1590 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1594 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (2306) */
/* 1596 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1600 */	NdrFcShort( 0x284 ),	/* Offset= 644 (2244) */
/* 1602 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1606 */	NdrFcShort( 0x282 ),	/* Offset= 642 (2248) */
/* 1608 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 1612 */	NdrFcShort( 0x280 ),	/* Offset= 640 (2252) */
/* 1614 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1618 */	NdrFcShort( 0x276 ),	/* Offset= 630 (2248) */
/* 1620 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1624 */	NdrFcShort( 0x270 ),	/* Offset= 624 (2248) */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1630) */
/* 1632 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1636 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1636) */
/* 1638 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1637) */
/* 1640 */
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1644 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1646 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1648 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1658 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1662 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1664 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1668) */
/* 1668 */
			0x13, 0x0,	/* FC_OP */
/* 1670 */	NdrFcShort( 0x224 ),	/* Offset= 548 (2218) */
/* 1672 */
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 1674 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1676 */	NdrFcShort( 0xa ),	/* 10 */
/* 1678 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1682 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1772) */
/* 1684 */	NdrFcLong( 0xd ),	/* 13 */
/* 1688 */	NdrFcShort( 0x90 ),	/* Offset= 144 (1832) */
/* 1690 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1694 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (1870) */
/* 1696 */	NdrFcLong( 0xc ),	/* 12 */
/* 1700 */	NdrFcShort( 0xda ),	/* Offset= 218 (1918) */
/* 1702 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1706 */	NdrFcShort( 0x136 ),	/* Offset= 310 (2016) */
/* 1708 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 1712 */	NdrFcShort( 0x156 ),	/* Offset= 342 (2054) */
/* 1714 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1718 */	NdrFcShort( 0x170 ),	/* Offset= 368 (2086) */
/* 1720 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1724 */	NdrFcShort( 0x18a ),	/* Offset= 394 (2118) */
/* 1726 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1730 */	NdrFcShort( 0x1a4 ),	/* Offset= 420 (2150) */
/* 1732 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1736 */	NdrFcShort( 0x1be ),	/* Offset= 446 (2182) */
/* 1738 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1737) */
/* 1740 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1750 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1752 */
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	0x13, 0x0,	/* FC_OP */
/* 1766 */	NdrFcShort( 0xf92c ),	/* Offset= -1748 (18) */
/* 1768 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1772 */
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1776 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1778 */
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1782 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1784 */	0x11, 0x0,	/* FC_RP */
/* 1786 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1740) */
/* 1788 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1790 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1792 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1808 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1810 */
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1820 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1824 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1826 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1828 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1792) */
/* 1830 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1832 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1844) */
/* 1840 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1844 */
			0x11, 0x0,	/* FC_RP */
/* 1846 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1810) */
/* 1848 */
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1858 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1862 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1866 */	NdrFcShort( 0xff24 ),	/* Offset= -220 (1646) */
/* 1868 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1870 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1882) */
/* 1878 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1880 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1882 */
			0x11, 0x0,	/* FC_RP */
/* 1884 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1848) */
/* 1886 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1890 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1896 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1898 */
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1900 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	0x13, 0x0,	/* FC_OP */
/* 1912 */	NdrFcShort( 0x18e ),	/* Offset= 398 (2310) */
/* 1914 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1916 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1918 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1930) */
/* 1926 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1930 */
			0x11, 0x0,	/* FC_RP */
/* 1932 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1886) */
/* 1934 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1936 */	NdrFcLong( 0x2f ),	/* 47 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1946 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1948 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1950 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1952 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1956 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1962 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1964 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1966 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0xa ),	/* Offset= 10 (1980) */
/* 1972 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1974 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1976 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1934) */
/* 1978 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1980 */
			0x13, 0x0,	/* FC_OP */
/* 1982 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1952) */
/* 1984 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1986 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1988 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1994 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1996 */
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	0x13, 0x0,	/* FC_OP */
/* 2010 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1964) */
/* 2012 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2014 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2016 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2028) */
/* 2024 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2028 */
			0x11, 0x0,	/* FC_RP */
/* 2030 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1984) */
/* 2032 */
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2042 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2046 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2048 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2050 */	NdrFcShort( 0xfa50 ),	/* Offset= -1456 (594) */
/* 2052 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2054 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2056 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0xa ),	/* Offset= 10 (2070) */
/* 2062 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2064 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0xf90c ),	/* Offset= -1780 (286) */
/* 2068 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2070 */
			0x11, 0x0,	/* FC_RP */
/* 2072 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2032) */
/* 2074 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2078 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2084 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2086 */
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2092 */
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2098 */	0x13, 0x0,	/* FC_OP */
/* 2100 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2074) */
/* 2102 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2106 */
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2110 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2116 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2118 */
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2122 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2124 */
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2130 */	0x13, 0x0,	/* FC_OP */
/* 2132 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2106) */
/* 2134 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2136 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2138 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2142 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2148 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2150 */
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2154 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2156 */
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2158 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2162 */	0x13, 0x0,	/* FC_OP */
/* 2164 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2138) */
/* 2166 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2168 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2170 */
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2174 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2180 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2182 */
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2188 */
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2194 */	0x13, 0x0,	/* FC_OP */
/* 2196 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2170) */
/* 2198 */
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2200 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2202 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2206 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2208 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 2210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2214 */	NdrFcShort( 0xfab4 ),	/* Offset= -1356 (858) */
/* 2216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2218 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2220 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2222 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2202) */
/* 2224 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2224) */
/* 2226 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2228 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2230 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2232 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (1672) */
/* 2234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2236 */
			0x13, 0x0,	/* FC_OP */
/* 2238 */	NdrFcShort( 0xfeee ),	/* Offset= -274 (1964) */
/* 2240 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2242 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 2244 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2246 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 2248 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2250 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2252 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2254 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 2256 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2258 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 2260 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2262 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 2264 */
			0x13, 0x0,	/* FC_OP */
/* 2266 */	NdrFcShort( 0xfd8e ),	/* Offset= -626 (1640) */
/* 2268 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2270 */	NdrFcShort( 0xf774 ),	/* Offset= -2188 (82) */
/* 2272 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2274 */	NdrFcShort( 0xf970 ),	/* Offset= -1680 (594) */
/* 2276 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2278 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (1646) */
/* 2280 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2282 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (1664) */
/* 2284 */
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2288) */
/* 2288 */
			0x13, 0x0,	/* FC_OP */
/* 2290 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2310) */
/* 2292 */
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2296 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 2298 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 2300 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2302 */
			0x13, 0x0,	/* FC_OP */
/* 2304 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (2292) */
/* 2306 */
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2308 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2310 */
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2312 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2316) */
/* 2318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2320 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2322 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2324 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2326 */	NdrFcShort( 0xfc28 ),	/* Offset= -984 (1342) */
/* 2328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2330 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2334 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0xfc18 ),	/* Offset= -1000 (1338) */
/* 2340 */
			0x12, 0x0,	/* FC_UP */
/* 2342 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (2310) */
/* 2344 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (2340) */
/* 2354 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 2356 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 2358 */
			0x11, 0x0,	/* FC_RP */
/* 2360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2362) */
/* 2362 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2366 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2370 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2372 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2374 */
			0x11, 0x0,	/* FC_RP */
/* 2376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2378) */
/* 2378 */
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2382 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 2384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2386 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2388 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2390 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2392 */	NdrFcLong( 0x28bc5edc ),	/* 683433692 */
/* 2396 */	NdrFcShort( 0x3ef3 ),	/* 16115 */
/* 2398 */	NdrFcShort( 0x4db2 ),	/* 19890 */
/* 2400 */	0x8b,		/* 139 */
			0x90,		/* 144 */
/* 2402 */	0x55,		/* 85 */
			0x62,		/* 98 */
/* 2404 */	0x0,		/* 0 */
			0xfd,		/* 253 */
/* 2406 */	0x97,		/* 151 */
			0xed,		/* 237 */
/* 2408 */
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2410 */
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2412 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2416) */
/* 2416 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2418 */	NdrFcLong( 0xd224006 ),	/* 220348422 */
/* 2422 */	NdrFcShort( 0x3c7 ),	/* 967 */
/* 2424 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 2426 */	0x80,		/* 128 */
			0x78,		/* 120 */
/* 2428 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2430 */	0xc0,		/* 192 */
			0xfb,		/* 251 */
/* 2432 */	0x81,		/* 129 */
			0xb5,		/* 181 */
/* 2434 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2436 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2390) */
/* 2438 */
			0x11, 0x0,	/* FC_RP */
/* 2440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2442) */
/* 2442 */
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2446 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2450 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2452 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2454 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2456 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2458) */
/* 2458 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2460 */	NdrFcLong( 0x7c8b7f40 ),	/* 2089516864 */
/* 2464 */	NdrFcShort( 0x40c8 ),	/* 16584 */
/* 2466 */	NdrFcShort( 0x47f7 ),	/* 18423 */
/* 2468 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 2470 */	0x45,		/* 69 */
			0x37,		/* 55 */
/* 2472 */	0x24,		/* 36 */
			0x15,		/* 21 */
/* 2474 */	0x77,		/* 119 */
			0x8d,		/* 141 */
/* 2476 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2478 */	NdrFcLong( 0x3a3ce0a1 ),	/* 977068193 */
/* 2482 */	NdrFcShort( 0xb5eb ),	/* -18965 */
/* 2484 */	NdrFcShort( 0x43bd ),	/* 17341 */
/* 2486 */	0x9c,		/* 156 */
			0x89,		/* 137 */
/* 2488 */	0x35,		/* 53 */
			0xea,		/* 234 */
/* 2490 */	0xa1,		/* 161 */
			0x10,		/* 16 */
/* 2492 */	0xf1,		/* 241 */
			0x2b,		/* 43 */
/* 2494 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2498) */
/* 2498 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2500 */	NdrFcLong( 0x93cb892f ),	/* -1815377617 */
/* 2504 */	NdrFcShort( 0x16d1 ),	/* 5841 */
/* 2506 */	NdrFcShort( 0x4dca ),	/* 19914 */
/* 2508 */	0x9c,		/* 156 */
			0x71,		/* 113 */
/* 2510 */	0x2e,		/* 46 */
			0x80,		/* 128 */
/* 2512 */	0x4b,		/* 75 */
			0xc9,		/* 201 */
/* 2514 */	0x39,		/* 57 */
			0x5c,		/* 92 */
/* 2516 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2518 */	NdrFcLong( 0xb ),	/* 11 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2528 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2532 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2534 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2536 */	NdrFcLong( 0xc ),	/* 12 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2550 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2552 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2554 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2556) */
/* 2556 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2558 */	NdrFcLong( 0x2c4636e3 ),	/* 742799075 */
/* 2562 */	NdrFcShort( 0x4f49 ),	/* 20297 */
/* 2564 */	NdrFcShort( 0x4966 ),	/* 18790 */
/* 2566 */	0x96,		/* 150 */
			0x6f,		/* 111 */
/* 2568 */	0x9,		/* 9 */
			0x53,		/* 83 */
/* 2570 */	0xf9,		/* 249 */
			0x7f,		/* 127 */
/* 2572 */	0x51,		/* 81 */
			0xc8,		/* 200 */
/* 2574 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2576 */	NdrFcLong( 0xb ),	/* 11 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2586 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2588 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2590 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2592 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2594 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2596) */
/* 2596 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2598 */	NdrFcLong( 0x2c4636e3 ),	/* 742799075 */
/* 2602 */	NdrFcShort( 0x4f49 ),	/* 20297 */
/* 2604 */	NdrFcShort( 0x4966 ),	/* 18790 */
/* 2606 */	0x96,		/* 150 */
			0x6f,		/* 111 */
/* 2608 */	0x9,		/* 9 */
			0x53,		/* 83 */
/* 2610 */	0xf9,		/* 249 */
			0x7f,		/* 127 */
/* 2612 */	0x51,		/* 81 */
			0xc8,		/* 200 */
/* 2614 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2616 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2618) */
/* 2618 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2620 */	NdrFcLong( 0xe9e5a6c ),	/* 245258860 */
/* 2624 */	NdrFcShort( 0xba20 ),	/* -17888 */
/* 2626 */	NdrFcShort( 0x4245 ),	/* 16965 */
/* 2628 */	0x8e,		/* 142 */
			0x26,		/* 38 */
/* 2630 */	0x71,		/* 113 */
			0x9a,		/* 154 */
/* 2632 */	0x67,		/* 103 */
			0xfe,		/* 254 */
/* 2634 */	0x18,		/* 24 */
			0x92,		/* 146 */
/* 2636 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2638 */	NdrFcLong( 0x71c8d1ed ),	/* 1908986349 */
/* 2642 */	NdrFcShort( 0x49b0 ),	/* 18864 */
/* 2644 */	NdrFcShort( 0x40ef ),	/* 16623 */
/* 2646 */	0x84,		/* 132 */
			0x23,		/* 35 */
/* 2648 */	0x92,		/* 146 */
			0xb0,		/* 176 */
/* 2650 */	0xa5,		/* 165 */
			0xf0,		/* 240 */
/* 2652 */	0x4b,		/* 75 */
			0x89,		/* 137 */
/* 2654 */
			0x11, 0x0,	/* FC_RP */
/* 2656 */	NdrFcShort( 0xf5f6 ),	/* Offset= -2570 (86) */
/* 2658 */
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2660 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2662) */
/* 2662 */
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2664 */	NdrFcLong( 0x4518189c ),	/* 1159207068 */
/* 2668 */	NdrFcShort( 0xe545 ),	/* -6843 */
/* 2670 */	NdrFcShort( 0x48b4 ),	/* 18612 */
/* 2672 */	0x86,		/* 134 */
			0x53,		/* 83 */
/* 2674 */	0xd8,		/* 216 */
			0x29,		/* 41 */
/* 2676 */	0xd1,		/* 209 */
			0xec,		/* 236 */
/* 2678 */	0xb7,		/* 183 */
			0x78,		/* 120 */

			0x0
		}
	};

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] =
		{

			{
			BSTR_UserSize
			,BSTR_UserMarshal
			,BSTR_UserUnmarshal
			,BSTR_UserFree
			},
			{
			VARIANT_UserSize
			,VARIANT_UserMarshal
			,VARIANT_UserUnmarshal
			,VARIANT_UserFree
			}

		};


static void __RPC_USER IVwTextSource_FetchExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
	#pragma pack(4)
	struct _PARAM_STRUCT
		{
		ILgIcuResourceBundle *This;
		int ichMin;
		int ichLim;
		OLECHAR *prgchBuf;
		HRESULT _RetVal;
		};
	#pragma pack()
	struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;

	pStubMsg->Offset = 0;
	pStubMsg->MaxCount = ( unsigned long ) ( pS->ichLim - pS->ichMin );
}

static void __RPC_USER ILgCharacterPropertyEngine_GetLineBreakInfoExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
	#pragma pack(4)
	struct _PARAM_STRUCT
		{
		ILgIcuResourceBundle *This;
		const OLECHAR *prgchIn;
		int cchIn;
		int ichMin;
		int ichLim;
		byte *prglbsOut;
		int *pichBreak;
		HRESULT _RetVal;
		};
	#pragma pack()
	struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;

	pStubMsg->Offset = 0;
	pStubMsg->MaxCount = ( unsigned long ) ( pS->ichLim - pS->ichMin );
}

static const EXPR_EVAL ExprEvalRoutines[] =
	{
	IVwTextSource_FetchExprEval_0000
	,ILgCharacterPropertyEngine_GetLineBreakInfoExprEval_0001
	};



/* Standard interface: __MIDL_itf_LanguagePs_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFwCustomExport, ver. 0.0,
   GUID={0x40300033,0xD5F9,0x4136,{0x9A,0x8C,0xB4,0x01,0xD8,0x58,0x2E,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short IFwCustomExport_FormatStringOffsetTable[] =
	{
	0,
	42,
	84,
	138,
	192,
	246,
	300,
	348,
	402,
	462,
	564,
	606
	};

static const MIDL_STUBLESS_PROXY_INFO IFwCustomExport_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IFwCustomExport_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IFwCustomExport_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IFwCustomExport_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(15) _IFwCustomExportProxyVtbl =
{
	&IFwCustomExport_ProxyInfo,
	&IID_IFwCustomExport,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::SetLabelStyles */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::AddFlidCharStyleMapping */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::BuildSubItemsString */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::BuildObjRefSeqString */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::BuildObjRefAtomicString */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::BuildExpandableString */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::GetEnumString */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::GetActualLevel */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::BuildRecordTags */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::GetPageSetupInfo */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::PostProcessFile */ ,
	(void *) (INT_PTR) -1 /* IFwCustomExport::IncludeObjectData */
};

const CInterfaceStubVtbl _IFwCustomExportStubVtbl =
{
	&IID_IFwCustomExport,
	&IFwCustomExport_ServerInfo,
	15,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0257, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFwTool, ver. 0.0,
   GUID={0x37396941,0x4DD1,0x11d4,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IFwTool_FormatStringOffsetTable[] =
	{
	642,
	726,
	846,
	888
	};

static const MIDL_STUBLESS_PROXY_INFO IFwTool_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IFwTool_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IFwTool_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IFwTool_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _IFwToolProxyVtbl =
{
	&IFwTool_ProxyInfo,
	&IID_IFwTool,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IFwTool::NewMainWnd */ ,
	(void *) (INT_PTR) -1 /* IFwTool::NewMainWndWithSel */ ,
	(void *) (INT_PTR) -1 /* IFwTool::CloseMainWnd */ ,
	(void *) (INT_PTR) -1 /* IFwTool::CloseDbAndWindows */
};

const CInterfaceStubVtbl _IFwToolStubVtbl =
{
	&IID_IFwTool,
	&IFwTool_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0258, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUndoAction, ver. 0.0,
   GUID={0x2F6BB7C9,0x1B3A,0x4e94,{0xA7,0xBF,0x78,0x2C,0x23,0x69,0xF6,0x81}} */

#pragma code_seg(".orpc")
static const unsigned short IUndoAction_FormatStringOffsetTable[] =
	{
	936,
	972,
	1008,
	1038
	};

static const MIDL_STUBLESS_PROXY_INFO IUndoAction_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IUndoAction_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IUndoAction_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IUndoAction_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _IUndoActionProxyVtbl =
{
	&IUndoAction_ProxyInfo,
	&IID_IUndoAction,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IUndoAction::Undo */ ,
	(void *) (INT_PTR) -1 /* IUndoAction::Redo */ ,
	(void *) (INT_PTR) -1 /* IUndoAction::Commit */ ,
	(void *) (INT_PTR) -1 /* IUndoAction::IsDataChange */
};

const CInterfaceStubVtbl _IUndoActionStubVtbl =
{
	&IID_IUndoAction,
	&IUndoAction_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0259, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IActionHandler, ver. 0.0,
   GUID={0x32C2020C,0x3094,0x42bc,{0x80,0xFF,0x45,0xAD,0x89,0x82,0x6F,0x62}} */

#pragma code_seg(".orpc")
static const unsigned short IActionHandler_FormatStringOffsetTable[] =
	{
	0,
	1074,
	1008,
	1104,
	1134,
	1176,
	1224,
	1260,
	1296,
	1338,
	1374,
	606,
	1416,
	1452,
	1488,
	1524,
	1554,
	1584,
	1620,
	1668,
	1704,
	1740,
	1782,
	1818,
	1854,
	1890,
	1926
	};

static const MIDL_STUBLESS_PROXY_INFO IActionHandler_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IActionHandler_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IActionHandler_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IActionHandler_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(30) _IActionHandlerProxyVtbl =
{
	&IActionHandler_ProxyInfo,
	&IID_IActionHandler,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IActionHandler::BeginUndoTask */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::EndUndoTask */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::ContinueUndoTask */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::EndOuterUndoTask */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::BreakUndoTask */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::StartSeq */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::AddAction */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::GetUndoText */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::GetUndoTextN */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::GetRedoText */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::GetRedoTextN */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::CanUndo */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::CanRedo */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::Undo */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::Redo */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::Commit */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::Close */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::Mark */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::CollapseToMark */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::DiscardToMark */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_TopMarkHandle */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_TasksSinceMark */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_UndoableActionCount */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_UndoableSequenceCount */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_RedoableSequenceCount */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::get_UndoGrouper */ ,
	(void *) (INT_PTR) -1 /* IActionHandler::put_UndoGrouper */
};

const CInterfaceStubVtbl _IActionHandlerStubVtbl =
{
	&IID_IActionHandler,
	&IActionHandler_ServerInfo,
	30,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0260, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAdvInd, ver. 0.0,
   GUID={0x5F74AB40,0xEFE8,0x4a0d,{0xB9,0xAE,0x30,0xF4,0x93,0xFE,0x6E,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short IAdvInd_FormatStringOffsetTable[] =
	{
	1962
	};

static const MIDL_STUBLESS_PROXY_INFO IAdvInd_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IAdvInd_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IAdvInd_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IAdvInd_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _IAdvIndProxyVtbl =
{
	&IAdvInd_ProxyInfo,
	&IID_IAdvInd,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IAdvInd::Step */
};

const CInterfaceStubVtbl _IAdvIndStubVtbl =
{
	&IID_IAdvInd,
	&IAdvInd_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0261, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAdvInd2, ver. 0.0,
   GUID={0x639C98DB,0xA241,0x496d,{0xBE,0x19,0x1E,0xFC,0x85,0xCA,0x1D,0xD7}} */

#pragma code_seg(".orpc")
static const unsigned short IAdvInd2_FormatStringOffsetTable[] =
	{
	1962,
	1074
	};

static const MIDL_STUBLESS_PROXY_INFO IAdvInd2_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IAdvInd2_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IAdvInd2_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IAdvInd2_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _IAdvInd2ProxyVtbl =
{
	&IAdvInd2_ProxyInfo,
	&IID_IAdvInd2,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IAdvInd::Step */ ,
	(void *) (INT_PTR) -1 /* IAdvInd2::NextStage */
};

const CInterfaceStubVtbl _IAdvInd2StubVtbl =
{
	&IID_IAdvInd2,
	&IAdvInd2_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0262, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAdvInd3, ver. 0.0,
   GUID={0x86b6ae62,0x3dfa,0x4020,{0xb5,0xd1,0x7f,0xa2,0x8e,0x77,0x26,0xe4}} */

#pragma code_seg(".orpc")
static const unsigned short IAdvInd3_FormatStringOffsetTable[] =
	{
	1962,
	1998,
	2034,
	2070,
	2106,
	2142
	};

static const MIDL_STUBLESS_PROXY_INFO IAdvInd3_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IAdvInd3_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IAdvInd3_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IAdvInd3_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(9) _IAdvInd3ProxyVtbl =
{
	&IAdvInd3_ProxyInfo,
	&IID_IAdvInd3,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IAdvInd::Step */ ,
	(void *) (INT_PTR) -1 /* IAdvInd3::put_Title */ ,
	(void *) (INT_PTR) -1 /* IAdvInd3::put_Message */ ,
	(void *) (INT_PTR) -1 /* IAdvInd3::put_Position */ ,
	(void *) (INT_PTR) -1 /* IAdvInd3::put_StepSize */ ,
	(void *) (INT_PTR) -1 /* IAdvInd3::SetRange */
};

const CInterfaceStubVtbl _IAdvInd3StubVtbl =
{
	&IID_IAdvInd3,
	&IAdvInd3_ServerInfo,
	9,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0263, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDebugReportSink, ver. 0.0,
   GUID={0x14E389C6,0xC986,0x4e31,{0xAE,0x70,0x1C,0xC1,0x0C,0xC3,0x54,0x71}} */

#pragma code_seg(".orpc")
static const unsigned short IDebugReportSink_FormatStringOffsetTable[] =
	{
	2184
	};

static const MIDL_STUBLESS_PROXY_INFO IDebugReportSink_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IDebugReportSink_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IDebugReportSink_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IDebugReportSink_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _IDebugReportSinkProxyVtbl =
{
	&IDebugReportSink_ProxyInfo,
	&IID_IDebugReportSink,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IDebugReportSink::Report */
};

const CInterfaceStubVtbl _IDebugReportSinkStubVtbl =
{
	&IID_IDebugReportSink,
	&IDebugReportSink_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0264, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDebugReport, ver. 0.0,
   GUID={0x7AE7CF67,0x67BE,0x4860,{0x8E,0x72,0xAA,0xC8,0x82,0x94,0xC3,0x97}} */

#pragma code_seg(".orpc")
static const unsigned short IDebugReport_FormatStringOffsetTable[] =
	{
	2226,
	2262
	};

static const MIDL_STUBLESS_PROXY_INFO IDebugReport_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IDebugReport_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IDebugReport_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IDebugReport_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _IDebugReportProxyVtbl =
{
	&IDebugReport_ProxyInfo,
	&IID_IDebugReport,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IDebugReport::ShowAssertMessageBox */ ,
	(void *) (INT_PTR) -1 /* IDebugReport::SetSink */
};

const CInterfaceStubVtbl _IDebugReportStubVtbl =
{
	&IID_IDebugReport,
	&IDebugReport_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0265, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IHelpTopicProvider, ver. 0.0,
   GUID={0xAF8960FB,0xB7AF,0x4259,{0x83,0x2B,0x38,0xA3,0xF5,0x62,0x90,0x52}} */

#pragma code_seg(".orpc")
static const unsigned short IHelpTopicProvider_FormatStringOffsetTable[] =
	{
	2298
	};

static const MIDL_STUBLESS_PROXY_INFO IHelpTopicProvider_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IHelpTopicProvider_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IHelpTopicProvider_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IHelpTopicProvider_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _IHelpTopicProviderProxyVtbl =
{
	&IHelpTopicProvider_ProxyInfo,
	&IID_IHelpTopicProvider,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IHelpTopicProvider::GetHelpString */
};

const CInterfaceStubVtbl _IHelpTopicProviderStubVtbl =
{
	&IID_IHelpTopicProvider,
	&IHelpTopicProvider_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0266, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFwFldSpec, ver. 0.0,
   GUID={0xFE44E19B,0xE710,0x4635,{0x96,0x90,0x1A,0xFB,0x45,0x1B,0x12,0x26}} */

#pragma code_seg(".orpc")
static const unsigned short IFwFldSpec_FormatStringOffsetTable[] =
	{
	1962,
	2346,
	2382,
	1038,
	2418,
	2454,
	2490,
	2526,
	2562,
	1338,
	2598,
	2634,
	2670,
	2706
	};

static const MIDL_STUBLESS_PROXY_INFO IFwFldSpec_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IFwFldSpec_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IFwFldSpec_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IFwFldSpec_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(17) _IFwFldSpecProxyVtbl =
{
	&IFwFldSpec_ProxyInfo,
	&IID_IFwFldSpec,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_Visibility */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_Visibility */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_HideLabel */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_HideLabel */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_Label */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_Label */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_FieldId */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_FieldId */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_ClassName */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_ClassName */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_FieldName */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_FieldName */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::put_Style */ ,
	(void *) (INT_PTR) -1 /* IFwFldSpec::get_Style */
};

const CInterfaceStubVtbl _IFwFldSpecStubVtbl =
{
	&IID_IFwFldSpec,
	&IFwFldSpec_ServerInfo,
	17,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0267, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUndoGrouper, ver. 0.0,
   GUID={0xC38348D3,0x392C,0x4e02,{0xBD,0x50,0xA0,0x1D,0xC4,0x18,0x9E,0x1D}} */

#pragma code_seg(".orpc")
static const unsigned short IUndoGrouper_FormatStringOffsetTable[] =
	{
	2742,
	2778,
	2814
	};

static const MIDL_STUBLESS_PROXY_INFO IUndoGrouper_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IUndoGrouper_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IUndoGrouper_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IUndoGrouper_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(6) _IUndoGrouperProxyVtbl =
{
	&IUndoGrouper_ProxyInfo,
	&IID_IUndoGrouper,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IUndoGrouper::BeginGroup */ ,
	(void *) (INT_PTR) -1 /* IUndoGrouper::EndGroup */ ,
	(void *) (INT_PTR) -1 /* IUndoGrouper::CancelGroup */
};

const CInterfaceStubVtbl _IUndoGrouperStubVtbl =
{
	&IID_IUndoGrouper,
	&IUndoGrouper_ServerInfo,
	6,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0268, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsString, ver. 0.0,
   GUID={0x0E9E5A6C,0xBA20,0x4245,{0x8E,0x26,0x71,0x9A,0x67,0xFE,0x18,0x92}} */

#pragma code_seg(".orpc")
static const unsigned short ITsString_FormatStringOffsetTable[] =
	{
	2850,
	2346,
	2886,
	2922,
	2964,
	3006,
	3048,
	3096,
	3144,
	3192,
	3234,
	(unsigned short) -1,
	(unsigned short) -1,
	(unsigned short) -1,
	(unsigned short) -1,
	(unsigned short) -1,
	3282,
	3324,
	3366,
	3402,
	3438,
	3474,
	3510,
	3558,
	3600,
	3660,
	3702,
	(unsigned short) -1
	};

static const MIDL_STUBLESS_PROXY_INFO ITsString_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsString_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsString_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsString_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(31) _ITsStringProxyVtbl =
{
	&ITsString_ProxyInfo,
	&IID_ITsString,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsString::get_Text */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_Length */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_RunCount */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_RunAt */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_MinOfRun */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_LimOfRun */ ,
	(void *) (INT_PTR) -1 /* ITsString::GetBoundsOfRun */ ,
	(void *) (INT_PTR) -1 /* ITsString::FetchRunInfoAt */ ,
	(void *) (INT_PTR) -1 /* ITsString::FetchRunInfo */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_RunText */ ,
	(void *) (INT_PTR) -1 /* ITsString::GetChars */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::FetchChars */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::LockText */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::UnlockText */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::LockRun */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::UnlockRun */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_PropertiesAt */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_Properties */ ,
	(void *) (INT_PTR) -1 /* ITsString::GetBldr */ ,
	(void *) (INT_PTR) -1 /* ITsString::GetIncBldr */ ,
	(void *) (INT_PTR) -1 /* ITsString::GetFactoryClsid */ ,
	(void *) (INT_PTR) -1 /* ITsString::SerializeFmt */ ,
	(void *) (INT_PTR) -1 /* ITsString::SerializeFmtRgb */ ,
	(void *) (INT_PTR) -1 /* ITsString::Equals */ ,
	(void *) (INT_PTR) -1 /* ITsString::WriteAsXml */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_IsNormalizedForm */ ,
	(void *) (INT_PTR) -1 /* ITsString::get_NormalizedForm */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsString::NfdAndFixOffsets */
};

const CInterfaceStubVtbl _ITsStringStubVtbl =
{
	&IID_ITsString,
	&ITsString_ServerInfo,
	31,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0269, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsTextProps, ver. 0.0,
   GUID={0x4FA0B99A,0x5A56,0x41A4,{0xBE,0x8B,0xB8,0x9B,0xC6,0x22,0x51,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short ITsTextProps_FormatStringOffsetTable[] =
	{
	2742,
	3744,
	3798,
	3846,
	3882,
	3930,
	3972,
	4008,
	4044,
	4080,
	4128,
	4194
	};

static const MIDL_STUBLESS_PROXY_INFO ITsTextProps_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsTextProps_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsTextProps_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsTextProps_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(15) _ITsTextPropsProxyVtbl =
{
	&ITsTextProps_ProxyInfo,
	&IID_ITsTextProps,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsTextProps::get_IntPropCount */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetIntProp */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetIntPropValues */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::get_StrPropCount */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetStrProp */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetStrPropValue */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetBldr */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::GetFactoryClsid */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::Serialize */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::SerializeRgb */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::SerializeRgPropsRgb */ ,
	(void *) (INT_PTR) -1 /* ITsTextProps::WriteAsXml */
};

const CInterfaceStubVtbl _ITsTextPropsStubVtbl =
{
	&IID_ITsTextProps,
	&ITsTextProps_ServerInfo,
	15,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0270, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsStrFactory, ver. 0.0,
   GUID={0xF1EF76E4,0xBE04,0x11d3,{0x8D,0x9A,0x00,0x50,0x04,0xDE,0xFE,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short ITsStrFactory_FormatStringOffsetTable[] =
	{
	4242,
	4290,
	4338,
	4392,
	4452,
	4500,
	4554,
	4608,
	4644,
	4680,
	4728,
	4788
	};

static const MIDL_STUBLESS_PROXY_INFO ITsStrFactory_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsStrFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsStrFactory_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsStrFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(15) _ITsStrFactoryProxyVtbl =
{
	&ITsStrFactory_ProxyInfo,
	&IID_ITsStrFactory,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::DeserializeStringStreams */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::DeserializeString */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::DeserializeStringRgb */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::DeserializeStringRgch */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::MakeString */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::MakeStringRgch */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::MakeStringWithPropsRgch */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::GetBldr */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::GetIncBldr */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::get_RunCount */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::FetchRunInfoAt */ ,
	(void *) (INT_PTR) -1 /* ITsStrFactory::FetchRunInfo */
};

const CInterfaceStubVtbl _ITsStrFactoryStubVtbl =
{
	&IID_ITsStrFactory,
	&ITsStrFactory_ServerInfo,
	15,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0271, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsPropsFactory, ver. 0.0,
   GUID={0x8DCE56A6,0xCFF1,0x4402,{0x95,0xFE,0x2B,0x57,0x49,0x12,0xB5,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short ITsPropsFactory_FormatStringOffsetTable[] =
	{
	4848,
	4890,
	4938,
	5004,
	5058,
	5118
	};

static const MIDL_STUBLESS_PROXY_INFO ITsPropsFactory_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsPropsFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsPropsFactory_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsPropsFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(9) _ITsPropsFactoryProxyVtbl =
{
	&ITsPropsFactory_ProxyInfo,
	&IID_ITsPropsFactory,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::DeserializeProps */ ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::DeserializePropsRgb */ ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::DeserializeRgPropsRgb */ ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::MakeProps */ ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::MakePropsRgch */ ,
	(void *) (INT_PTR) -1 /* ITsPropsFactory::GetPropsBldr */
};

const CInterfaceStubVtbl _ITsPropsFactoryStubVtbl =
{
	&IID_ITsPropsFactory,
	&ITsPropsFactory_ServerInfo,
	9,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0272, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsStrBldr, ver. 0.0,
   GUID={0xF1EF76E6,0xBE04,0x11d3,{0x8D,0x9A,0x00,0x50,0x04,0xDE,0xFE,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short ITsStrBldr_FormatStringOffsetTable[] =
	{
	2850,
	2346,
	2886,
	2922,
	5154,
	5202,
	5250,
	5298,
	5340,
	(unsigned short) -1,
	5388,
	5430,
	5472,
	5526,
	5574,
	5634,
	5682,
	5742,
	5796,
	5832,
	3438,
	3474,
	3510
	};

static const MIDL_STUBLESS_PROXY_INFO ITsStrBldr_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsStrBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsStrBldr_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsStrBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(26) _ITsStrBldrProxyVtbl =
{
	&ITsStrBldr_ProxyInfo,
	&IID_ITsStrBldr,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_Text */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_Length */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_RunCount */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_RunAt */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::GetBoundsOfRun */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::FetchRunInfoAt */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::FetchRunInfo */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_RunText */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::GetChars */ ,
	0 /* (void *) (INT_PTR) -1 /* ITsStrBldr::FetchChars */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_PropertiesAt */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::get_Properties */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::Replace */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::ReplaceTsString */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::ReplaceRgch */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::SetProperties */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::SetIntPropValues */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::SetStrPropValue */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::GetString */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::Clear */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::GetBldrClsid */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::SerializeFmt */ ,
	(void *) (INT_PTR) -1 /* ITsStrBldr::SerializeFmtRgb */
};

const CInterfaceStubVtbl _ITsStrBldrStubVtbl =
{
	&IID_ITsStrBldr,
	&ITsStrBldr_ServerInfo,
	26,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0273, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsIncStrBldr, ver. 0.0,
   GUID={0xF1EF76E7,0xBE04,0x11d3,{0x8D,0x9A,0x00,0x50,0x04,0xDE,0xFE,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short ITsIncStrBldr_FormatStringOffsetTable[] =
	{
	2850,
	1998,
	5862,
	5898,
	5940,
	5988,
	6030,
	6066,
	6096,
	6132,
	6168
	};

static const MIDL_STUBLESS_PROXY_INFO ITsIncStrBldr_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsIncStrBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsIncStrBldr_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsIncStrBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(14) _ITsIncStrBldrProxyVtbl =
{
	&ITsIncStrBldr_ProxyInfo,
	&IID_ITsIncStrBldr,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::get_Text */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::Append */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::AppendTsString */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::AppendRgch */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::SetIntPropValues */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::SetStrPropValue */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::GetString */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::Clear */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::GetIncBldrClsid */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::SerializeFmt */ ,
	(void *) (INT_PTR) -1 /* ITsIncStrBldr::SerializeFmtRgb */
};

const CInterfaceStubVtbl _ITsIncStrBldrStubVtbl =
{
	&IID_ITsIncStrBldr,
	&ITsIncStrBldr_ServerInfo,
	14,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0274, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsPropsBldr, ver. 0.0,
   GUID={0xF1EF76E8,0xBE04,0x11d3,{0x8D,0x9A,0x00,0x50,0x04,0xDE,0xFE,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short ITsPropsBldr_FormatStringOffsetTable[] =
	{
	2742,
	3744,
	3798,
	3846,
	3882,
	3930,
	6216,
	6264,
	6306,
	6354
	};

static const MIDL_STUBLESS_PROXY_INFO ITsPropsBldr_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsPropsBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsPropsBldr_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsPropsBldr_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(13) _ITsPropsBldrProxyVtbl =
{
	&ITsPropsBldr_ProxyInfo,
	&IID_ITsPropsBldr,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::get_IntPropCount */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::GetIntProp */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::GetIntPropValues */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::get_StrPropCount */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::GetStrProp */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::GetStrPropValue */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::SetIntPropValues */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::SetStrPropValue */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::SetStrPropValueRgch */ ,
	(void *) (INT_PTR) -1 /* ITsPropsBldr::GetTextProps */
};

const CInterfaceStubVtbl _ITsPropsBldrStubVtbl =
{
	&IID_ITsPropsBldr,
	&ITsPropsBldr_ServerInfo,
	13,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0275, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsMultiString, ver. 0.0,
   GUID={0xDD409520,0xC212,0x11d3,{0x9B,0xB7,0x00,0x40,0x05,0x41,0xF9,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short ITsMultiString_FormatStringOffsetTable[] =
	{
	2742,
	6390,
	6438,
	6480
	};

static const MIDL_STUBLESS_PROXY_INFO ITsMultiString_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsMultiString_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsMultiString_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsMultiString_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _ITsMultiStringProxyVtbl =
{
	&ITsMultiString_ProxyInfo,
	&IID_ITsMultiString,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsMultiString::get_StringCount */ ,
	(void *) (INT_PTR) -1 /* ITsMultiString::GetStringFromIndex */ ,
	(void *) (INT_PTR) -1 /* ITsMultiString::get_String */ ,
	(void *) (INT_PTR) -1 /* ITsMultiString::putref_String */
};

const CInterfaceStubVtbl _ITsMultiStringStubVtbl =
{
	&IID_ITsMultiString,
	&ITsMultiString_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0276, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITsStreamWrapper, ver. 0.0,
   GUID={0x4516897E,0x314B,0x49d8,{0x83,0x78,0xF2,0xE1,0x05,0xC8,0x00,0x09}} */

#pragma code_seg(".orpc")
static const unsigned short ITsStreamWrapper_FormatStringOffsetTable[] =
	{
	6522,
	6558,
	2034,
	6594,
	6654
	};

static const MIDL_STUBLESS_PROXY_INFO ITsStreamWrapper_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ITsStreamWrapper_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ITsStreamWrapper_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ITsStreamWrapper_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(8) _ITsStreamWrapperProxyVtbl =
{
	&ITsStreamWrapper_ProxyInfo,
	&IID_ITsStreamWrapper,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ITsStreamWrapper::get_Stream */ ,
	(void *) (INT_PTR) -1 /* ITsStreamWrapper::get_Contents */ ,
	(void *) (INT_PTR) -1 /* ITsStreamWrapper::put_Contents */ ,
	(void *) (INT_PTR) -1 /* ITsStreamWrapper::WriteTssAsXml */ ,
	(void *) (INT_PTR) -1 /* ITsStreamWrapper::ReadTssFromXml */
};

const CInterfaceStubVtbl _ITsStreamWrapperStubVtbl =
{
	&IID_ITsStreamWrapper,
	&ITsStreamWrapper_ServerInfo,
	8,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0277, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOleDbCommand, ver. 0.0,
   GUID={0x21993161,0x3E24,0x11d4,{0xA1,0xBD,0x00,0xC0,0x4F,0x0C,0x95,0x93}} */

#pragma code_seg(".orpc")
static const unsigned short IOleDbCommand_FormatStringOffsetTable[] =
	{
	2742,
	6696,
	6738,
	2922,
	6804,
	6858,
	6894,
	6936,
	6972,
	7038,
	7098
	};

static const MIDL_STUBLESS_PROXY_INFO IOleDbCommand_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IOleDbCommand_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IOleDbCommand_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IOleDbCommand_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(14) _IOleDbCommandProxyVtbl =
{
	&IOleDbCommand_ProxyInfo,
	&IID_IOleDbCommand,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::ColValWasNull */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::ExecCommand */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::GetColValue */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::GetInt */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::GetParameter */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::GetRowset */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::Init */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::NextRow */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::SetParameter */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::SetByteBuffParameter */ ,
	(void *) (INT_PTR) -1 /* IOleDbCommand::SetStringParameter */
};

const CInterfaceStubVtbl _IOleDbCommandStubVtbl =
{
	&IID_IOleDbCommand,
	&IOleDbCommand_ServerInfo,
	14,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0279, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOleDbEncap, ver. 0.0,
   GUID={0xCB7BEA0F,0x960A,0x4b23,{0x80,0xD3,0xDE,0x06,0xC0,0x53,0x0E,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IOleDbEncap_FormatStringOffsetTable[] =
	{
	7158,
	1074,
	7188,
	7224,
	7284,
	7320,
	7350,
	1260,
	7386,
	7422,
	7464,
	2634,
	7500
	};

static const MIDL_STUBLESS_PROXY_INFO IOleDbEncap_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IOleDbEncap_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IOleDbEncap_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IOleDbEncap_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(16) _IOleDbEncapProxyVtbl =
{
	&IOleDbEncap_ProxyInfo,
	&IID_IOleDbEncap,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::BeginTrans */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::CommitTrans */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::CreateCommand */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::Init */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::IsTransactionOpen */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::RollbackTrans */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::RollbackSavePoint */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::SetSavePoint */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::SetSavePointOrBeginTrans */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::InitMSDE */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::get_Server */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::get_Database */ ,
	(void *) (INT_PTR) -1 /* IOleDbEncap::GetFreeLogKb */
};

const CInterfaceStubVtbl _IOleDbEncapStubVtbl =
{
	&IID_IOleDbEncap,
	&IOleDbEncap_ServerInfo,
	16,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0280, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFwMetaDataCache, ver. 0.0,
   GUID={0x6AA9042E,0x0A4D,0x4f33,{0x88,0x1B,0x3F,0xBE,0x48,0x86,0x1D,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IFwMetaDataCache_FormatStringOffsetTable[] =
	{
	7542,
	7578,
	7620,
	3846,
	7662,
	3930,
	7704,
	7746,
	7788,
	3192,
	1374,
	7830,
	7872,
	7914,
	7956,
	7998,
	8040,
	1584,
	8088,
	8130,
	8172,
	8214,
	8256,
	8298,
	8364,
	8406,
	8460,
	8514,
	8568,
	8622
	};

static const MIDL_STUBLESS_PROXY_INFO IFwMetaDataCache_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IFwMetaDataCache_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IFwMetaDataCache_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IFwMetaDataCache_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(33) _IFwMetaDataCacheProxyVtbl =
{
	&IFwMetaDataCache_ProxyInfo,
	&IID_IFwMetaDataCache,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::Init */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::Reload */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::InitXml */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::get_FieldCount */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldIds */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetOwnClsName */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetDstClsName */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetOwnClsId */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetDstClsId */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldName */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldLabel */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldHelp */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldXml */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldListRoot */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldWs */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldType */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::get_IsValidClass */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::get_ClassCount */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetClassIds */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetClassName */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetAbstract */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetBaseClsId */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetBaseClsName */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFields */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetClassId */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldId */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetFieldId2 */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetDirectSubclasses */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::GetAllSubclasses */ ,
	(void *) (INT_PTR) -1 /* IFwMetaDataCache::AddVirtualProp */
};

const CInterfaceStubVtbl _IFwMetaDataCacheStubVtbl =
{
	&IID_IFwMetaDataCache,
	&IFwMetaDataCache_ServerInfo,
	33,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0281, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDbAdmin, ver. 0.0,
   GUID={0x2A861F95,0x63D0,0x480d,{0xB5,0xAF,0x4F,0xAF,0x0D,0x22,0x12,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short IDbAdmin_FormatStringOffsetTable[] =
	{
	0,
	8676,
	2034,
	8718,
	8778,
	8814,
	8850,
	1260,
	7386
	};

static const MIDL_STUBLESS_PROXY_INFO IDbAdmin_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IDbAdmin_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IDbAdmin_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IDbAdmin_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _IDbAdminProxyVtbl =
{
	&IDbAdmin_ProxyInfo,
	&IID_IDbAdmin,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IDbAdmin::CopyDatabase */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::AttachDatabase */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::DetachDatabase */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::RenameDatabase */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::putref_LogStream */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::get_FwRootDir */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::get_FwMigrationScriptDir */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::get_FwDatabaseDir */ ,
	(void *) (INT_PTR) -1 /* IDbAdmin::get_FwTemplateDir */
};

const CInterfaceStubVtbl _IDbAdminStubVtbl =
{
	&IID_IDbAdmin,
	&IDbAdmin_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0282, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISimpleInit, ver. 0.0,
   GUID={0xFC1C0D0D,0x0483,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ISimpleInit_FormatStringOffsetTable[] =
	{
	8886,
	6558
	};

static const MIDL_STUBLESS_PROXY_INFO ISimpleInit_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ISimpleInit_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ISimpleInit_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ISimpleInit_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _ISimpleInitProxyVtbl =
{
	&ISimpleInit_ProxyInfo,
	&IID_ISimpleInit,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ISimpleInit::InitNew */ ,
	(void *) (INT_PTR) -1 /* ISimpleInit::get_InitializationData */
};

const CInterfaceStubVtbl _ISimpleInitStubVtbl =
{
	&IID_ISimpleInit,
	&ISimpleInit_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0283, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVwGraphics, ver. 0.0,
   GUID={0x3A3CE0A1,0xB5EB,0x43bd,{0x9C,0x89,0x35,0xEA,0xA1,0x10,0xF1,0x2B}} */

#pragma code_seg(".orpc")
static const unsigned short IVwGraphics_FormatStringOffsetTable[] =
	{
	8928,
	2778,
	2814,
	8982,
	9036,
	9108,
	9162,
	9222,
	9294,
	9348,
	9408,
	9462,
	9498,
	9570,
	9618,
	9672,
	9726,
	1584,
	9762,
	5832,
	1704,
	9798,
	1782,
	9834,
	9870,
	9906,
	9942,
	9972,
	10014,
	10104
	};

static const MIDL_STUBLESS_PROXY_INFO IVwGraphics_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IVwGraphics_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IVwGraphics_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IVwGraphics_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(33) _IVwGraphicsProxyVtbl =
{
	&IVwGraphics_ProxyInfo,
	&IID_IVwGraphics,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IVwGraphics::InvertRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_ForeColor */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_BackColor */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawRectangle */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawHorzLine */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawLine */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawText */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawTextExt */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetTextExtent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetTextLeadWidth */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontEmSquare */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetGlyphMetrics */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontData */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontDataRgch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::XYFromGlyphPoint */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontAscent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontDescent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontCharProperties */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::ReleaseDC */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_XUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_XUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_YUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_YUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::SetupGraphics */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::PushClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::PopClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawPolygon */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::RenderPicture */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::MakePicture */
};

const CInterfaceStubVtbl _IVwGraphicsStubVtbl =
{
	&IID_IVwGraphics,
	&IVwGraphics_ServerInfo,
	33,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0284, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVwGraphicsWin32, ver. 0.0,
   GUID={0x8E6828A3,0x8681,0x4822,{0xB7,0x6D,0x6C,0x4A,0x25,0xCA,0xEC,0xE6}} */

#pragma code_seg(".orpc")
static const unsigned short IVwGraphicsWin32_FormatStringOffsetTable[] =
	{
	8928,
	2778,
	2814,
	8982,
	9036,
	9108,
	9162,
	9222,
	9294,
	9348,
	9408,
	9462,
	9498,
	9570,
	9618,
	9672,
	9726,
	1584,
	9762,
	5832,
	1704,
	9798,
	1782,
	9834,
	9870,
	9906,
	9942,
	9972,
	10014,
	10104,
	(unsigned short) -1,
	(unsigned short) -1,
	(unsigned short) -1,
	10152
	};

static const MIDL_STUBLESS_PROXY_INFO IVwGraphicsWin32_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IVwGraphicsWin32_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IVwGraphicsWin32_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IVwGraphicsWin32_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(37) _IVwGraphicsWin32ProxyVtbl =
{
	&IVwGraphicsWin32_ProxyInfo,
	&IID_IVwGraphicsWin32,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IVwGraphics::InvertRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_ForeColor */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_BackColor */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawRectangle */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawHorzLine */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawLine */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawText */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawTextExt */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetTextExtent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetTextLeadWidth */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontEmSquare */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetGlyphMetrics */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontData */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::GetFontDataRgch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::XYFromGlyphPoint */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontAscent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontDescent */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_FontCharProperties */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::ReleaseDC */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_XUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_XUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::get_YUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::put_YUnitsPerInch */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::SetupGraphics */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::PushClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::PopClipRect */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::DrawPolygon */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::RenderPicture */ ,
	(void *) (INT_PTR) -1 /* IVwGraphics::MakePicture */ ,
	0 /* (void *) (INT_PTR) -1 /* IVwGraphicsWin32::Initialize */ ,
	0 /* (void *) (INT_PTR) -1 /* IVwGraphicsWin32::GetDeviceContext */ ,
	0 /* (void *) (INT_PTR) -1 /* IVwGraphicsWin32::SetMeasureDc */ ,
	(void *) (INT_PTR) -1 /* IVwGraphicsWin32::SetClipRect */
};

const CInterfaceStubVtbl _IVwGraphicsWin32StubVtbl =
{
	&IID_IVwGraphicsWin32,
	&IVwGraphicsWin32_ServerInfo,
	37,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0285, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVwTextSource, ver. 0.0,
   GUID={0x92AC8BE4,0xEDC8,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IVwTextSource_FormatStringOffsetTable[] =
	{
	10188,
	2346,
	10236,
	10290,
	10344,
	10404
	};

static const MIDL_STUBLESS_PROXY_INFO IVwTextSource_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IVwTextSource_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IVwTextSource_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IVwTextSource_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(9) _IVwTextSourceProxyVtbl =
{
	&IVwTextSource_ProxyInfo,
	&IID_IVwTextSource,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IVwTextSource::Fetch */ ,
	(void *) (INT_PTR) -1 /* IVwTextSource::get_Length */ ,
	(void *) (INT_PTR) -1 /* IVwTextSource::GetCharProps */ ,
	(void *) (INT_PTR) -1 /* IVwTextSource::GetParaProps */ ,
	(void *) (INT_PTR) -1 /* IVwTextSource::GetCharStringProp */ ,
	(void *) (INT_PTR) -1 /* IVwTextSource::GetParaStringProp */
};

const CInterfaceStubVtbl _IVwTextSourceStubVtbl =
{
	&IID_IVwTextSource,
	&IVwTextSource_ServerInfo,
	9,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0286, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IVwJustifier, ver. 0.0,
   GUID={0xBAC7725F,0x1D26,0x42b2,{0x8E,0x9D,0x8B,0x91,0x75,0x78,0x2C,0xC7}} */

#pragma code_seg(".orpc")
static const unsigned short IVwJustifier_FormatStringOffsetTable[] =
	{
	10464
	};

static const MIDL_STUBLESS_PROXY_INFO IVwJustifier_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IVwJustifier_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IVwJustifier_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IVwJustifier_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _IVwJustifierProxyVtbl =
{
	&IVwJustifier_ProxyInfo,
	&IID_IVwJustifier,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IVwJustifier::AdjustGlyphWidths */
};

const CInterfaceStubVtbl _IVwJustifierStubVtbl =
{
	&IID_IVwJustifier,
	&IVwJustifier_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0287, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgSegment, ver. 0.0,
   GUID={0x7407F0FC,0x58B0,0x4476,{0xA0,0xC8,0x69,0x43,0x18,0x01,0xE5,0x60}} */

#pragma code_seg(".orpc")
static const unsigned short ILgSegment_FormatStringOffsetTable[] =
	{
	10524,
	10584,
	10626,
	10674,
	10722,
	10770,
	10818,
	10866,
	10920,
	10980,
	11040,
	11088,
	11136,
	11178,
	11226,
	7998,
	11268,
	11310,
	11352,
	11400,
	11448,
	11496,
	11544,
	11586,
	11628,
	11682,
	11742,
	11820,
	11916,
	12000,
	12090,
	12162,
	12234,
	12318
	};

static const MIDL_STUBLESS_PROXY_INFO ILgSegment_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgSegment_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgSegment_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgSegment_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(37) _ILgSegmentProxyVtbl =
{
	&ILgSegment_ProxyInfo,
	&IID_ILgSegment,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgSegment::DrawText */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::Recompute */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_Width */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_RightOverhang */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_LeftOverhang */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_Height */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_Ascent */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::Extent */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::BoundingRect */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::GetActualWidth */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_AscentOverhang */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_DescentOverhang */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_RightToLeft */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_DirectionDepth */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::SetDirectionDepth */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_WritingSystem */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_Lim */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_LimInterest */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::put_EndLine */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::put_StartLine */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_StartBreakWeight */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_EndBreakWeight */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::get_Stretch */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::put_Stretch */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::IsValidInsertionPoint */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::DoBoundariesCoincide */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::DrawInsertionPoint */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::PositionsOfIP */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::DrawRange */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::PositionOfRange */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::PointToChar */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::ArrowKeyPosition */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::ExtendSelectionPosition */ ,
	(void *) (INT_PTR) -1 /* ILgSegment::GetCharPlacement */
};

const CInterfaceStubVtbl _ILgSegmentStubVtbl =
{
	&IID_ILgSegment,
	&ILgSegment_ServerInfo,
	37,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0288, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IRenderEngine, ver. 0.0,
   GUID={0x93CB892F,0x16D1,0x4dca,{0x9C,0x71,0x2E,0x80,0x4B,0xC9,0x39,0x5C}} */

#pragma code_seg(".orpc")
static const unsigned short IRenderEngine_FormatStringOffsetTable[] =
	{
	12420,
	1074,
	2886,
	12462,
	12600,
	12636,
	12672,
	12708,
	12744
	};

static const MIDL_STUBLESS_PROXY_INFO IRenderEngine_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IRenderEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IRenderEngine_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IRenderEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _IRenderEngineProxyVtbl =
{
	&IRenderEngine_ProxyInfo,
	&IID_IRenderEngine,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IRenderEngine::InitRenderer */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::FontIsValid */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::get_SegDatMaxLength */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::FindBreakPoint */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::get_ScriptDirection */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::get_ClassId */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::InterpretChrp */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::get_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* IRenderEngine::putref_WritingSystemFactory */
};

const CInterfaceStubVtbl _IRenderEngineStubVtbl =
{
	&IID_IRenderEngine,
	&IRenderEngine_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0289, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IRenderingFeatures, ver. 0.0,
   GUID={0x0A439F99,0x7BF2,0x4e11,{0xA8,0x71,0x8A,0xFA,0xEB,0x2B,0x7D,0x53}} */

#pragma code_seg(".orpc")
static const unsigned short IRenderingFeatures_FormatStringOffsetTable[] =
	{
	12780,
	12828,
	12876,
	12936
	};

static const MIDL_STUBLESS_PROXY_INFO IRenderingFeatures_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IRenderingFeatures_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IRenderingFeatures_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IRenderingFeatures_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _IRenderingFeaturesProxyVtbl =
{
	&IRenderingFeatures_ProxyInfo,
	&IID_IRenderingFeatures,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IRenderingFeatures::GetFeatureIDs */ ,
	(void *) (INT_PTR) -1 /* IRenderingFeatures::GetFeatureLabel */ ,
	(void *) (INT_PTR) -1 /* IRenderingFeatures::GetFeatureValues */ ,
	(void *) (INT_PTR) -1 /* IRenderingFeatures::GetFeatureValueLabel */
};

const CInterfaceStubVtbl _IRenderingFeaturesStubVtbl =
{
	&IID_IRenderingFeatures,
	&IRenderingFeatures_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0290, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IJustifyingRenderer, ver. 0.0,
   GUID={0xD7364EF2,0x43C0,0x4440,{0x87,0x2A,0x33,0x6A,0x46,0x47,0xB9,0xA3}} */

#pragma code_seg(".orpc")
static const unsigned short IJustifyingRenderer_FormatStringOffsetTable[] =
	{
	12990,
	13044,
	13098,
	8982
	};

static const MIDL_STUBLESS_PROXY_INFO IJustifyingRenderer_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&IJustifyingRenderer_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO IJustifyingRenderer_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&IJustifyingRenderer_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _IJustifyingRendererProxyVtbl =
{
	&IJustifyingRenderer_ProxyInfo,
	&IID_IJustifyingRenderer,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* IJustifyingRenderer::GetGlyphAttributeFloat */ ,
	(void *) (INT_PTR) -1 /* IJustifyingRenderer::GetGlyphAttributeInt */ ,
	(void *) (INT_PTR) -1 /* IJustifyingRenderer::SetGlyphAttributeFloat */ ,
	(void *) (INT_PTR) -1 /* IJustifyingRenderer::SetGlyphAttributeInt */
};

const CInterfaceStubVtbl _IJustifyingRendererStubVtbl =
{
	&IID_IJustifyingRenderer,
	&IJustifyingRenderer_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0291, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgCollation, ver. 0.0,
   GUID={0x254DB9E3,0x0265,0x49CF,{0xA1,0x9F,0x3C,0x75,0xE8,0x52,0x5A,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short ILgCollation_FormatStringOffsetTable[] =
	{
	13152,
	42,
	2886,
	13194,
	12600,
	13236,
	2490,
	1260,
	2562,
	1338,
	2598,
	2634,
	2670,
	13272,
	13308,
	13344,
	13386,
	13422,
	13458,
	13494,
	13530,
	13566
	};

static const MIDL_STUBLESS_PROXY_INFO ILgCollation_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgCollation_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgCollation_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgCollation_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(25) _ILgCollationProxyVtbl =
{
	&ILgCollation_ProxyInfo,
	&IID_ILgCollation,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_Name */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_Name */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_NameWsCount */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_NameWss */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_Hvo */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_WinLCID */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_WinLCID */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_WinCollation */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_WinCollation */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_IcuResourceName */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_IcuResourceName */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_IcuResourceText */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_IcuResourceText */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_Dirty */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_Dirty */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::WriteAsXml */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::Serialize */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::Deserialize */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_IcuRules */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::put_IcuRules */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::get_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgCollation::putref_WritingSystemFactory */
};

const CInterfaceStubVtbl _ILgCollationStubVtbl =
{
	&IID_ILgCollation,
	&ILgCollation_ServerInfo,
	25,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0292, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgWritingSystem, ver. 0.0,
   GUID={0x28BC5EDC,0x3EF3,0x4db2,{0x8B,0x90,0x55,0x62,0x00,0xFD,0x97,0xED}} */

#pragma code_seg(".orpc")
static const unsigned short ILgWritingSystem_FormatStringOffsetTable[] =
	{
	2742,
	2346,
	13602,
	13644,
	13686,
	13236,
	2490,
	13728,
	13770,
	13806,
	13842,
	13878,
	13914,
	13950,
	13980,
	14016,
	14052,
	14088,
	14124,
	14166,
	14202,
	14238,
	14274,
	14310,
	14352,
	14388,
	14424,
	14460,
	14496,
	14532,
	14568,
	14604,
	14640,
	14676,
	14712,
	14748,
	14784,
	14826,
	14862,
	14904,
	14946,
	14982,
	15024,
	15066,
	15102,
	15144,
	15186,
	15228,
	15264,
	15306,
	15342,
	15378,
	15414,
	15450,
	15486,
	15522,
	15570,
	15606,
	15642,
	15678,
	15714,
	15750,
	15786,
	15822,
	15858,
	15894,
	15930,
	15966,
	16002,
	16038,
	16074,
	16110
	};

static const MIDL_STUBLESS_PROXY_INFO ILgWritingSystem_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystem_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgWritingSystem_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystem_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(75) _ILgWritingSystemProxyVtbl =
{
	&ILgWritingSystem_ProxyInfo,
	&IID_ILgWritingSystem,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_WritingSystem */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_NameWsCount */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_NameWss */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Name */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_Name */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Locale */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_Locale */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_ConverterFrom */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_NormalizeEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_WordBreakEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_SpellingFactory */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_SpellCheckEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_SearchEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::CompileEngines */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Dirty */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_Dirty */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::putref_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::WriteAsXml */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::Serialize */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::Deserialize */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_RightToLeft */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_RightToLeft */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Renderer */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_FontVariation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_FontVariation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_SansFontVariation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_SansFontVariation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_DefaultSerif */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_DefaultSerif */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_DefaultSansSerif */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_DefaultSansSerif */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_DefaultMonospace */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_DefaultMonospace */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_KeyMan */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_KeyMan */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_UiName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CollationCount */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Collation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::putref_Collation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::RemoveCollation */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Abbr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_Abbr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_AbbrWsCount */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_AbbrWss */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_Description */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_Description */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_DescriptionWsCount */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_DescriptionWss */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CollatingEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CharPropEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::SetTracing */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::InterpretChrp */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_IcuLocale */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_IcuLocale */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::GetIcuLocaleParts */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_LegacyMapping */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_LegacyMapping */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_KeymanKbdName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_KeymanKbdName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_LanguageName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CountryName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_VariantName */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_LanguageAbbr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CountryAbbr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_VariantAbbr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::SaveIfDirty */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::InstallLanguage */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_LastModified */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_LastModified */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::get_CurrentInputLanguage */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystem::put_CurrentInputLanguage */
};

const CInterfaceStubVtbl _ILgWritingSystemStubVtbl =
{
	&IID_ILgWritingSystem,
	&ILgWritingSystem_ServerInfo,
	75,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0293, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgInputMethodEditor, ver. 0.0,
   GUID={0x17aebfe0,0xc00a,0x11d2,{0x80,0x78,0x00,0x00,0xc0,0xfb,0x81,0xb5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgInputMethodEditor_FormatStringOffsetTable[] =
	{
	7158,
	(unsigned short) -1,
	16146,
	16218,
	16290
	};

static const MIDL_STUBLESS_PROXY_INFO ILgInputMethodEditor_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgInputMethodEditor_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgInputMethodEditor_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgInputMethodEditor_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(8) _ILgInputMethodEditorProxyVtbl =
{
	&ILgInputMethodEditor_ProxyInfo,
	&IID_ILgInputMethodEditor,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgInputMethodEditor::Setup */ ,
	0 /* (void *) (INT_PTR) -1 /* ILgInputMethodEditor::Replace */ ,
	(void *) (INT_PTR) -1 /* ILgInputMethodEditor::Backspace */ ,
	(void *) (INT_PTR) -1 /* ILgInputMethodEditor::DeleteForward */ ,
	(void *) (INT_PTR) -1 /* ILgInputMethodEditor::IsValidInsertionPoint */
};

const CInterfaceStubVtbl _ILgInputMethodEditorStubVtbl =
{
	&IID_ILgInputMethodEditor,
	&ILgInputMethodEditor_ServerInfo,
	8,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0294, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgFontManager, ver. 0.0,
   GUID={0x10894680,0xF384,0x11d3,{0xB5,0xD1,0x00,0x40,0x05,0x43,0xA2,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short ILgFontManager_FormatStringOffsetTable[] =
	{
	16338,
	16380,
	16428,
	1104
	};

static const MIDL_STUBLESS_PROXY_INFO ILgFontManager_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgFontManager_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgFontManager_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgFontManager_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _ILgFontManagerProxyVtbl =
{
	&ILgFontManager_ProxyInfo,
	&IID_ILgFontManager,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgFontManager::IsFontAvailable */ ,
	(void *) (INT_PTR) -1 /* ILgFontManager::IsFontAvailableRgch */ ,
	(void *) (INT_PTR) -1 /* ILgFontManager::AvailableFonts */ ,
	(void *) (INT_PTR) -1 /* ILgFontManager::RefreshFontList */
};

const CInterfaceStubVtbl _ILgFontManagerStubVtbl =
{
	&IID_ILgFontManager,
	&ILgFontManager_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0295, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgCollatingEngine, ver. 0.0,
   GUID={0xDB78D60B,0xE43E,0x4464,{0xB8,0xAE,0xC5,0xC9,0xA0,0x0E,0x2C,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short ILgCollatingEngine_FormatStringOffsetTable[] =
	{
	16464,
	16512,
	16578,
	16632,
	16668,
	16704,
	16752,
	16806,
	16842
	};

static const MIDL_STUBLESS_PROXY_INFO ILgCollatingEngine_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgCollatingEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgCollatingEngine_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgCollatingEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _ILgCollatingEngineProxyVtbl =
{
	&ILgCollatingEngine_ProxyInfo,
	&IID_ILgCollatingEngine,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::get_SortKey */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::SortKeyRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::Compare */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::get_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::putref_WritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::get_SortKeyVariant */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::CompareVariant */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::Open */ ,
	(void *) (INT_PTR) -1 /* ILgCollatingEngine::Close */
};

const CInterfaceStubVtbl _ILgCollatingEngineStubVtbl =
{
	&IID_ILgCollatingEngine,
	&ILgCollatingEngine_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0296, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgCharacterPropertyEngine, ver. 0.0,
   GUID={0x7C8B7F40,0x40C8,0x47f7,{0xB1,0x0B,0x45,0x37,0x24,0x15,0x77,0x8D}} */

#pragma code_seg(".orpc")
static const unsigned short ILgCharacterPropertyEngine_FormatStringOffsetTable[] =
	{
	16872,
	16914,
	846,
	16956,
	16998,
	17040,
	17082,
	17124,
	17166,
	17208,
	17250,
	17292,
	11136,
	17334,
	17376,
	17418,
	17460,
	17502,
	17544,
	17586,
	17628,
	8214,
	17670,
	17712,
	17754,
	17796,
	17856,
	17916,
	17976,
	18024,
	18066,
	18108,
	18150,
	18210,
	18252,
	18312,
	18354,
	18396,
	18438,
	18486,
	18534,
	18600,
	18642,
	18702,
	18744,
	18804,
	18840,
	18876,
	18924,
	18966,
	19014
	};

static const MIDL_STUBLESS_PROXY_INFO ILgCharacterPropertyEngine_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgCharacterPropertyEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgCharacterPropertyEngine_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgCharacterPropertyEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(54) _ILgCharacterPropertyEngineProxyVtbl =
{
	&ILgCharacterPropertyEngine_ProxyInfo,
	&IID_ILgCharacterPropertyEngine,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_GeneralCategory */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_BidiCategory */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsLetter */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsWordForming */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsPunctuation */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsNumber */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsSeparator */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsSymbol */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsMark */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsOther */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsUpper */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsLower */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsTitle */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsModifier */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsOtherLetter */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsOpen */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsClose */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsWordMedial */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsControl */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_ToLowerCh */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_ToUpperCh */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_ToTitleCh */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToLower */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToUpper */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToTitle */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToLowerRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToUpperRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::ToTitleRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_IsUserDefinedClass */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_SoundAlikeKey */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_CharacterName */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_Decomposition */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::DecompositionRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_FullDecomp */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::FullDecompRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_NumericValue */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_CombiningClass */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_Comment */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::GetLineBreakProps */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::GetLineBreakStatus */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::GetLineBreakInfo */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::StripDiacritics */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::StripDiacriticsRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::NormalizeKd */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::NormalizeKdRgch */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::get_Locale */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::put_Locale */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::GetLineBreakText */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::put_LineBreakText */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::LineBreakBefore */ ,
	(void *) (INT_PTR) -1 /* ILgCharacterPropertyEngine::LineBreakAfter */
};

const CInterfaceStubVtbl _ILgCharacterPropertyEngineStubVtbl =
{
	&IID_ILgCharacterPropertyEngine,
	&ILgCharacterPropertyEngine_ServerInfo,
	54,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0297, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgSearchEngine, ver. 0.0,
   GUID={0x0D224001,0x03C7,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgSearchEngine_FormatStringOffsetTable[] =
	{
	19062,
	1998,
	19122,
	19176,
	19236
	};

static const MIDL_STUBLESS_PROXY_INFO ILgSearchEngine_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgSearchEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgSearchEngine_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgSearchEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(8) _ILgSearchEngineProxyVtbl =
{
	&ILgSearchEngine_ProxyInfo,
	&IID_ILgSearchEngine,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgSearchEngine::SetPattern */ ,
	(void *) (INT_PTR) -1 /* ILgSearchEngine::SetReplacePattern */ ,
	(void *) (INT_PTR) -1 /* ILgSearchEngine::ShowPatternDialog */ ,
	(void *) (INT_PTR) -1 /* ILgSearchEngine::FindString */ ,
	(void *) (INT_PTR) -1 /* ILgSearchEngine::FindReplace */
};

const CInterfaceStubVtbl _ILgSearchEngineStubVtbl =
{
	&IID_ILgSearchEngine,
	&ILgSearchEngine_ServerInfo,
	8,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0298, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgStringConverter, ver. 0.0,
   GUID={0x0D224002,0x03C7,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgStringConverter_FormatStringOffsetTable[] =
	{
	19296,
	19338
	};

static const MIDL_STUBLESS_PROXY_INFO ILgStringConverter_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgStringConverter_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgStringConverter_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgStringConverter_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _ILgStringConverterProxyVtbl =
{
	&ILgStringConverter_ProxyInfo,
	&IID_ILgStringConverter,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgStringConverter::ConvertString */ ,
	(void *) (INT_PTR) -1 /* ILgStringConverter::ConvertStringRgch */
};

const CInterfaceStubVtbl _ILgStringConverterStubVtbl =
{
	&IID_ILgStringConverter,
	&ILgStringConverter_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0299, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgTokenizer, ver. 0.0,
   GUID={0x0D224003,0x03C7,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgTokenizer_FormatStringOffsetTable[] =
	{
	19398,
	19452,
	19500
	};

static const MIDL_STUBLESS_PROXY_INFO ILgTokenizer_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgTokenizer_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgTokenizer_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgTokenizer_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(6) _ILgTokenizerProxyVtbl =
{
	&ILgTokenizer_ProxyInfo,
	&IID_ILgTokenizer,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgTokenizer::GetToken */ ,
	(void *) (INT_PTR) -1 /* ILgTokenizer::get_TokenStart */ ,
	(void *) (INT_PTR) -1 /* ILgTokenizer::get_TokenEnd */
};

const CInterfaceStubVtbl _ILgTokenizerStubVtbl =
{
	&IID_ILgTokenizer,
	&ILgTokenizer_ServerInfo,
	6,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0300, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgSpellChecker, ver. 0.0,
   GUID={0x0D224006,0x03C7,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgSpellChecker_FormatStringOffsetTable[] =
	{
	19548,
	2778,
	19584,
	19656,
	19710,
	19746,
	19794,
	6066,
	19830
	};

static const MIDL_STUBLESS_PROXY_INFO ILgSpellChecker_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgSpellChecker_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgSpellChecker_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgSpellChecker_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _ILgSpellCheckerProxyVtbl =
{
	&ILgSpellChecker_ProxyInfo,
	&IID_ILgSpellChecker,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::Init */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::SetOptions */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::Check */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::Suggest */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::IgnoreAll */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::Change */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::AddToUser */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::FlushIgnoreList */ ,
	(void *) (INT_PTR) -1 /* ILgSpellChecker::FlushChangeList */
};

const CInterfaceStubVtbl _ILgSpellCheckerStubVtbl =
{
	&IID_ILgSpellChecker,
	&ILgSpellChecker_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0301, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgSpellCheckFactory, ver. 0.0,
   GUID={0xFC1C0D01,0x0483,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgSpellCheckFactory_FormatStringOffsetTable[] =
	{
	19866
	};

static const MIDL_STUBLESS_PROXY_INFO ILgSpellCheckFactory_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgSpellCheckFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgSpellCheckFactory_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgSpellCheckFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _ILgSpellCheckFactoryProxyVtbl =
{
	&ILgSpellCheckFactory_ProxyInfo,
	&IID_ILgSpellCheckFactory,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgSpellCheckFactory::get_Checker */
};

const CInterfaceStubVtbl _ILgSpellCheckFactoryStubVtbl =
{
	&IID_ILgSpellCheckFactory,
	&ILgSpellCheckFactory_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0302, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgNumericEngine, ver. 0.0,
   GUID={0xFC1C0D04,0x0483,0x11d3,{0x80,0x78,0x00,0x00,0xC0,0xFB,0x81,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short ILgNumericEngine_FormatStringOffsetTable[] =
	{
	13152,
	19902,
	19944,
	19986,
	20040,
	20088,
	20136,
	20184,
	20226
	};

static const MIDL_STUBLESS_PROXY_INFO ILgNumericEngine_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgNumericEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgNumericEngine_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgNumericEngine_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _ILgNumericEngineProxyVtbl =
{
	&ILgNumericEngine_ProxyInfo,
	&IID_ILgNumericEngine,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_IntToString */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_IntToPrettyString */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_StringToInt */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::StringToIntRgch */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_DblToString */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_DblToPrettyString */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_DblToExpString */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::get_StringToDbl */ ,
	(void *) (INT_PTR) -1 /* ILgNumericEngine::StringToDblRgch */
};

const CInterfaceStubVtbl _ILgNumericEngineStubVtbl =
{
	&IID_ILgNumericEngine,
	&ILgNumericEngine_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0303, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgWritingSystemFactory, ver. 0.0,
   GUID={0x2C4636E3,0x4F49,0x4966,{0x96,0x6F,0x09,0x53,0xF9,0x7F,0x51,0xC8}} */

#pragma code_seg(".orpc")
static const unsigned short ILgWritingSystemFactory_FormatStringOffsetTable[] =
	{
	20280,
	20322,
	20364,
	2070,
	20400,
	3930,
	20442,
	20478,
	20520,
	20556,
	20598,
	20640,
	20688,
	13950,
	20730,
	1524,
	20760,
	1584,
	20796,
	20832
	};

static const MIDL_STUBLESS_PROXY_INFO ILgWritingSystemFactory_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystemFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgWritingSystemFactory_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystemFactory_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(23) _ILgWritingSystemFactoryProxyVtbl =
{
	&ILgWritingSystemFactory_ProxyInfo,
	&IID_ILgWritingSystemFactory,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_Engine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_EngineOrNull */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::AddEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::RemoveEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::GetWsFromStr */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::GetStrFromWs */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_NumberOfWs */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::GetWritingSystems */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_UnicodeCharProps */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_DefaultCollater */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_CharPropEngine */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_Renderer */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_RendererFromChrp */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::Shutdown */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::Clear */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::SaveWritingSystems */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::Serialize */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_UserWs */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::get_BypassInstall */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactory::put_BypassInstall */
};

const CInterfaceStubVtbl _ILgWritingSystemFactoryStubVtbl =
{
	&IID_ILgWritingSystemFactory,
	&ILgWritingSystemFactory_ServerInfo,
	23,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0304, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgWritingSystemFactoryBuilder, ver. 0.0,
   GUID={0x8AD52AF0,0x13A8,0x4d28,{0xA1,0xEE,0x71,0x92,0x4B,0x36,0x98,0x9F}} */

#pragma code_seg(".orpc")
static const unsigned short ILgWritingSystemFactoryBuilder_FormatStringOffsetTable[] =
	{
	20868,
	20916,
	20970,
	1104
	};

static const MIDL_STUBLESS_PROXY_INFO ILgWritingSystemFactoryBuilder_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystemFactoryBuilder_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgWritingSystemFactoryBuilder_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgWritingSystemFactoryBuilder_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(7) _ILgWritingSystemFactoryBuilderProxyVtbl =
{
	&ILgWritingSystemFactoryBuilder_ProxyInfo,
	&IID_ILgWritingSystemFactoryBuilder,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactoryBuilder::GetWritingSystemFactory */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactoryBuilder::GetWritingSystemFactoryNew */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactoryBuilder::Deserialize */ ,
	(void *) (INT_PTR) -1 /* ILgWritingSystemFactoryBuilder::ShutdownAllFactories */
};

const CInterfaceStubVtbl _ILgWritingSystemFactoryBuilderStubVtbl =
{
	&IID_ILgWritingSystemFactoryBuilder,
	&ILgWritingSystemFactoryBuilder_ServerInfo,
	7,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0305, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgTsStringPlusWss, ver. 0.0,
   GUID={0x71C8D1ED,0x49B0,0x40ef,{0x84,0x23,0x92,0xB0,0xA5,0xF0,0x4B,0x89}} */

#pragma code_seg(".orpc")
static const unsigned short ILgTsStringPlusWss_FormatStringOffsetTable[] =
	{
	21012,
	21054,
	16428,
	21096,
	21132
	};

static const MIDL_STUBLESS_PROXY_INFO ILgTsStringPlusWss_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgTsStringPlusWss_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgTsStringPlusWss_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgTsStringPlusWss_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(8) _ILgTsStringPlusWssProxyVtbl =
{
	&ILgTsStringPlusWss_ProxyInfo,
	&IID_ILgTsStringPlusWss,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgTsStringPlusWss::get_String */ ,
	(void *) (INT_PTR) -1 /* ILgTsStringPlusWss::putref_String */ ,
	(void *) (INT_PTR) -1 /* ILgTsStringPlusWss::get_Text */ ,
	(void *) (INT_PTR) -1 /* ILgTsStringPlusWss::Serialize */ ,
	(void *) (INT_PTR) -1 /* ILgTsStringPlusWss::Deserialize */
};

const CInterfaceStubVtbl _ILgTsStringPlusWssStubVtbl =
{
	&IID_ILgTsStringPlusWss,
	&ILgTsStringPlusWss_ServerInfo,
	8,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0306, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgTsDataObject, ver. 0.0,
   GUID={0x56CD4356,0xC349,0x4927,{0x9E,0x3D,0xCC,0x0C,0xF0,0xEF,0xF0,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short ILgTsDataObject_FormatStringOffsetTable[] =
	{
	21168,
	2346
	};

static const MIDL_STUBLESS_PROXY_INFO ILgTsDataObject_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgTsDataObject_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgTsDataObject_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgTsDataObject_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _ILgTsDataObjectProxyVtbl =
{
	&ILgTsDataObject_ProxyInfo,
	&IID_ILgTsDataObject,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgTsDataObject::Init */ ,
	(void *) (INT_PTR) -1 /* ILgTsDataObject::GetClipboardType */
};

const CInterfaceStubVtbl _ILgTsDataObjectStubVtbl =
{
	&IID_ILgTsDataObject,
	&ILgTsDataObject_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0307, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgKeymanHandler, ver. 0.0,
   GUID={0xD43F4C58,0x5E24,0x4b54,{0x8E,0x4D,0xF0,0x23,0x3B,0x82,0x36,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short ILgKeymanHandler_FormatStringOffsetTable[] =
	{
	2226,
	2346,
	21204,
	21246,
	21282,
	13236
	};

static const MIDL_STUBLESS_PROXY_INFO ILgKeymanHandler_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgKeymanHandler_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgKeymanHandler_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgKeymanHandler_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(9) _ILgKeymanHandlerProxyVtbl =
{
	&ILgKeymanHandler_ProxyInfo,
	&IID_ILgKeymanHandler,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::Init */ ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::get_NLayout */ ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::get_Name */ ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::get_ActiveKeyboardName */ ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::put_ActiveKeyboardName */ ,
	(void *) (INT_PTR) -1 /* ILgKeymanHandler::get_KeymanWindowsMessage */
};

const CInterfaceStubVtbl _ILgKeymanHandlerStubVtbl =
{
	&IID_ILgKeymanHandler,
	&ILgKeymanHandler_ServerInfo,
	9,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0308, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgTextServices, ver. 0.0,
   GUID={0x03D86B2C,0x9FB3,0x4E33,{0x9B,0x23,0x6C,0x8B,0xFC,0x18,0xFB,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short ILgTextServices_FormatStringOffsetTable[] =
	{
	21318
	};

static const MIDL_STUBLESS_PROXY_INFO ILgTextServices_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgTextServices_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgTextServices_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgTextServices_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(4) _ILgTextServicesProxyVtbl =
{
	&ILgTextServices_ProxyInfo,
	&IID_ILgTextServices,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgTextServices::SetKeyboard */
};

const CInterfaceStubVtbl _ILgTextServicesStubVtbl =
{
	&IID_ILgTextServices,
	&ILgTextServices_ServerInfo,
	4,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0309, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgCodePageEnumerator, ver. 0.0,
   GUID={0x62811E4D,0x5572,0x4f76,{0xB7,0x1F,0x9F,0x17,0x23,0x83,0x38,0xE1}} */

#pragma code_seg(".orpc")
static const unsigned short ILgCodePageEnumerator_FormatStringOffsetTable[] =
	{
	7158,
	21378
	};

static const MIDL_STUBLESS_PROXY_INFO ILgCodePageEnumerator_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgCodePageEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgCodePageEnumerator_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgCodePageEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _ILgCodePageEnumeratorProxyVtbl =
{
	&ILgCodePageEnumerator_ProxyInfo,
	&IID_ILgCodePageEnumerator,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgCodePageEnumerator::Init */ ,
	(void *) (INT_PTR) -1 /* ILgCodePageEnumerator::Next */
};

const CInterfaceStubVtbl _ILgCodePageEnumeratorStubVtbl =
{
	&IID_ILgCodePageEnumerator,
	&ILgCodePageEnumerator_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0310, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgLanguageEnumerator, ver. 0.0,
   GUID={0x76470164,0xE990,0x411d,{0xAF,0x66,0x42,0xA7,0x19,0x2E,0x4C,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short ILgLanguageEnumerator_FormatStringOffsetTable[] =
	{
	7158,
	21378
	};

static const MIDL_STUBLESS_PROXY_INFO ILgLanguageEnumerator_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgLanguageEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgLanguageEnumerator_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgLanguageEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(5) _ILgLanguageEnumeratorProxyVtbl =
{
	&ILgLanguageEnumerator_ProxyInfo,
	&IID_ILgLanguageEnumerator,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgLanguageEnumerator::Init */ ,
	(void *) (INT_PTR) -1 /* ILgLanguageEnumerator::Next */
};

const CInterfaceStubVtbl _ILgLanguageEnumeratorStubVtbl =
{
	&IID_ILgLanguageEnumerator,
	&ILgLanguageEnumerator_ServerInfo,
	5,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0311, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgIcuConverterEnumerator, ver. 0.0,
   GUID={0x34D4E39C,0xC3B6,0x413e,{0x9A,0x4E,0x44,0x57,0xBB,0xB0,0x2F,0xE8}} */

#pragma code_seg(".orpc")
static const unsigned short ILgIcuConverterEnumerator_FormatStringOffsetTable[] =
	{
	2742,
	19902,
	21204
	};

static const MIDL_STUBLESS_PROXY_INFO ILgIcuConverterEnumerator_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgIcuConverterEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgIcuConverterEnumerator_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgIcuConverterEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(6) _ILgIcuConverterEnumeratorProxyVtbl =
{
	&ILgIcuConverterEnumerator_ProxyInfo,
	&IID_ILgIcuConverterEnumerator,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgIcuConverterEnumerator::get_Count */ ,
	(void *) (INT_PTR) -1 /* ILgIcuConverterEnumerator::get_ConverterName */ ,
	(void *) (INT_PTR) -1 /* ILgIcuConverterEnumerator::get_ConverterId */
};

const CInterfaceStubVtbl _ILgIcuConverterEnumeratorStubVtbl =
{
	&IID_ILgIcuConverterEnumerator,
	&ILgIcuConverterEnumerator_ServerInfo,
	6,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0312, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgIcuTransliteratorEnumerator, ver. 0.0,
   GUID={0xB26A6461,0x582C,0x4873,{0xB3,0xF5,0x67,0x31,0x04,0xD1,0xAC,0x37}} */

#pragma code_seg(".orpc")
static const unsigned short ILgIcuTransliteratorEnumerator_FormatStringOffsetTable[] =
	{
	2742,
	19902,
	21204
	};

static const MIDL_STUBLESS_PROXY_INFO ILgIcuTransliteratorEnumerator_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgIcuTransliteratorEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgIcuTransliteratorEnumerator_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgIcuTransliteratorEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(6) _ILgIcuTransliteratorEnumeratorProxyVtbl =
{
	&ILgIcuTransliteratorEnumerator_ProxyInfo,
	&IID_ILgIcuTransliteratorEnumerator,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgIcuTransliteratorEnumerator::get_Count */ ,
	(void *) (INT_PTR) -1 /* ILgIcuTransliteratorEnumerator::get_TransliteratorName */ ,
	(void *) (INT_PTR) -1 /* ILgIcuTransliteratorEnumerator::get_TransliteratorId */
};

const CInterfaceStubVtbl _ILgIcuTransliteratorEnumeratorStubVtbl =
{
	&IID_ILgIcuTransliteratorEnumerator,
	&ILgIcuTransliteratorEnumerator_ServerInfo,
	6,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0313, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgIcuLocaleEnumerator, ver. 0.0,
   GUID={0x00C88119,0xF57D,0x4e7b,{0xA0,0x3B,0xED,0xB0,0xBC,0x3B,0x57,0xEE}} */

#pragma code_seg(".orpc")
static const unsigned short ILgIcuLocaleEnumerator_FormatStringOffsetTable[] =
	{
	2742,
	19902,
	21204,
	13644,
	21420,
	21462
	};

static const MIDL_STUBLESS_PROXY_INFO ILgIcuLocaleEnumerator_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgIcuLocaleEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgIcuLocaleEnumerator_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgIcuLocaleEnumerator_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(9) _ILgIcuLocaleEnumeratorProxyVtbl =
{
	&ILgIcuLocaleEnumerator_ProxyInfo,
	&IID_ILgIcuLocaleEnumerator,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_Count */ ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_Name */ ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_Language */ ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_Country */ ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_Variant */ ,
	(void *) (INT_PTR) -1 /* ILgIcuLocaleEnumerator::get_DisplayName */
};

const CInterfaceStubVtbl _ILgIcuLocaleEnumeratorStubVtbl =
{
	&IID_ILgIcuLocaleEnumerator,
	&ILgIcuLocaleEnumerator_ServerInfo,
	9,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_LanguagePs_0314, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILgIcuResourceBundle, ver. 0.0,
   GUID={0x4518189C,0xE545,0x48b4,{0x86,0x53,0xD8,0x29,0xD1,0xEC,0xB7,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short ILgIcuResourceBundle_FormatStringOffsetTable[] =
	{
	0,
	6558,
	16428,
	21246,
	21510,
	21552,
	21588,
	2526,
	1296
	};

static const MIDL_STUBLESS_PROXY_INFO ILgIcuResourceBundle_ProxyInfo =
	{
	&Object_StubDesc,
	__MIDL_ProcFormatString.Format,
	&ILgIcuResourceBundle_FormatStringOffsetTable[-3],
	0,
	0,
	0
	};


static const MIDL_SERVER_INFO ILgIcuResourceBundle_ServerInfo =
	{
	&Object_StubDesc,
	0,
	__MIDL_ProcFormatString.Format,
	&ILgIcuResourceBundle_FormatStringOffsetTable[-3],
	0,
	0,
	0,
	0};
CINTERFACE_PROXY_VTABLE(12) _ILgIcuResourceBundleProxyVtbl =
{
	&ILgIcuResourceBundle_ProxyInfo,
	&IID_ILgIcuResourceBundle,
	IUnknown_QueryInterface_Proxy,
	IUnknown_AddRef_Proxy,
	IUnknown_Release_Proxy ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::Init */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_Key */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_String */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_Name */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_GetSubsection */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_HasNext */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_Next */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_Size */ ,
	(void *) (INT_PTR) -1 /* ILgIcuResourceBundle::get_StringEx */
};

const CInterfaceStubVtbl _ILgIcuResourceBundleStubVtbl =
{
	&IID_ILgIcuResourceBundle,
	&ILgIcuResourceBundle_ServerInfo,
	12,
	0, /* pure interpreted */
	CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc =
	{
	0,
	NdrOleAllocate,
	NdrOleFree,
	0,
	0,
	0,
	ExprEvalRoutines,
	0,
	__MIDL_TypeFormatString.Format,
	1, /* -error bounds_check flag */
	0x50002, /* Ndr library version */
	0,
	0x6000169, /* MIDL Version 6.0.361 */
	0,
	UserMarshalRoutines,
	0,  /* notify & notify_flag routine table */
	0x1, /* MIDL flag */
	0, /* cs routines */
	0,   /* proxy/server info */
	0   /* Reserved5 */
	};

const CInterfaceProxyVtbl * _LanguagePs_ProxyVtblList[] =
{
	( CInterfaceProxyVtbl *) &_ILgSpellCheckFactoryProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgSearchEngineProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgStringConverterProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgTokenizerProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgNumericEngineProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgSpellCheckerProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgCollatingEngineProxyVtbl,
	( CInterfaceProxyVtbl *) &_IActionHandlerProxyVtbl,
	( CInterfaceProxyVtbl *) &_ISimpleInitProxyVtbl,
	( CInterfaceProxyVtbl *) &_IOleDbEncapProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgIcuLocaleEnumeratorProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsMultiStringProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgTextServicesProxyVtbl,
	( CInterfaceProxyVtbl *) &_IFwMetaDataCacheProxyVtbl,
	( CInterfaceProxyVtbl *) &_IRenderEngineProxyVtbl,
	( CInterfaceProxyVtbl *) &_IFwCustomExportProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgCharacterPropertyEngineProxyVtbl,
	( CInterfaceProxyVtbl *) &_IAdvIndProxyVtbl,
	( CInterfaceProxyVtbl *) &_IFwToolProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgCodePageEnumeratorProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgTsDataObjectProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgKeymanHandlerProxyVtbl,
	( CInterfaceProxyVtbl *) &_IVwJustifierProxyVtbl,
	( CInterfaceProxyVtbl *) &_IOleDbCommandProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgIcuTransliteratorEnumeratorProxyVtbl,
	( CInterfaceProxyVtbl *) &_IAdvInd3ProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgLanguageEnumeratorProxyVtbl,
	( CInterfaceProxyVtbl *) &_IDebugReportProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsStringProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsStreamWrapperProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgFontManagerProxyVtbl,
	( CInterfaceProxyVtbl *) &_IDbAdminProxyVtbl,
	( CInterfaceProxyVtbl *) &_IRenderingFeaturesProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsTextPropsProxyVtbl,
	( CInterfaceProxyVtbl *) &_IFwFldSpecProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgIcuResourceBundleProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgIcuConverterEnumeratorProxyVtbl,
	( CInterfaceProxyVtbl *) &_IVwGraphicsProxyVtbl,
	( CInterfaceProxyVtbl *) &_IVwGraphicsWin32ProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsPropsFactoryProxyVtbl,
	( CInterfaceProxyVtbl *) &_IDebugReportSinkProxyVtbl,
	( CInterfaceProxyVtbl *) &_IUndoActionProxyVtbl,
	( CInterfaceProxyVtbl *) &_IUndoGrouperProxyVtbl,
	( CInterfaceProxyVtbl *) &_IAdvInd2ProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgWritingSystemProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgInputMethodEditorProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgWritingSystemFactoryProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgCollationProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsStrFactoryProxyVtbl,
	( CInterfaceProxyVtbl *) &_IVwTextSourceProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsStrBldrProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsIncStrBldrProxyVtbl,
	( CInterfaceProxyVtbl *) &_ITsPropsBldrProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgTsStringPlusWssProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgWritingSystemFactoryBuilderProxyVtbl,
	( CInterfaceProxyVtbl *) &_IJustifyingRendererProxyVtbl,
	( CInterfaceProxyVtbl *) &_IHelpTopicProviderProxyVtbl,
	( CInterfaceProxyVtbl *) &_ILgSegmentProxyVtbl,
	0
};

const CInterfaceStubVtbl * _LanguagePs_StubVtblList[] =
{
	( CInterfaceStubVtbl *) &_ILgSpellCheckFactoryStubVtbl,
	( CInterfaceStubVtbl *) &_ILgSearchEngineStubVtbl,
	( CInterfaceStubVtbl *) &_ILgStringConverterStubVtbl,
	( CInterfaceStubVtbl *) &_ILgTokenizerStubVtbl,
	( CInterfaceStubVtbl *) &_ILgNumericEngineStubVtbl,
	( CInterfaceStubVtbl *) &_ILgSpellCheckerStubVtbl,
	( CInterfaceStubVtbl *) &_ILgCollatingEngineStubVtbl,
	( CInterfaceStubVtbl *) &_IActionHandlerStubVtbl,
	( CInterfaceStubVtbl *) &_ISimpleInitStubVtbl,
	( CInterfaceStubVtbl *) &_IOleDbEncapStubVtbl,
	( CInterfaceStubVtbl *) &_ILgIcuLocaleEnumeratorStubVtbl,
	( CInterfaceStubVtbl *) &_ITsMultiStringStubVtbl,
	( CInterfaceStubVtbl *) &_ILgTextServicesStubVtbl,
	( CInterfaceStubVtbl *) &_IFwMetaDataCacheStubVtbl,
	( CInterfaceStubVtbl *) &_IRenderEngineStubVtbl,
	( CInterfaceStubVtbl *) &_IFwCustomExportStubVtbl,
	( CInterfaceStubVtbl *) &_ILgCharacterPropertyEngineStubVtbl,
	( CInterfaceStubVtbl *) &_IAdvIndStubVtbl,
	( CInterfaceStubVtbl *) &_IFwToolStubVtbl,
	( CInterfaceStubVtbl *) &_ILgCodePageEnumeratorStubVtbl,
	( CInterfaceStubVtbl *) &_ILgTsDataObjectStubVtbl,
	( CInterfaceStubVtbl *) &_ILgKeymanHandlerStubVtbl,
	( CInterfaceStubVtbl *) &_IVwJustifierStubVtbl,
	( CInterfaceStubVtbl *) &_IOleDbCommandStubVtbl,
	( CInterfaceStubVtbl *) &_ILgIcuTransliteratorEnumeratorStubVtbl,
	( CInterfaceStubVtbl *) &_IAdvInd3StubVtbl,
	( CInterfaceStubVtbl *) &_ILgLanguageEnumeratorStubVtbl,
	( CInterfaceStubVtbl *) &_IDebugReportStubVtbl,
	( CInterfaceStubVtbl *) &_ITsStringStubVtbl,
	( CInterfaceStubVtbl *) &_ITsStreamWrapperStubVtbl,
	( CInterfaceStubVtbl *) &_ILgFontManagerStubVtbl,
	( CInterfaceStubVtbl *) &_IDbAdminStubVtbl,
	( CInterfaceStubVtbl *) &_IRenderingFeaturesStubVtbl,
	( CInterfaceStubVtbl *) &_ITsTextPropsStubVtbl,
	( CInterfaceStubVtbl *) &_IFwFldSpecStubVtbl,
	( CInterfaceStubVtbl *) &_ILgIcuResourceBundleStubVtbl,
	( CInterfaceStubVtbl *) &_ILgIcuConverterEnumeratorStubVtbl,
	( CInterfaceStubVtbl *) &_IVwGraphicsStubVtbl,
	( CInterfaceStubVtbl *) &_IVwGraphicsWin32StubVtbl,
	( CInterfaceStubVtbl *) &_ITsPropsFactoryStubVtbl,
	( CInterfaceStubVtbl *) &_IDebugReportSinkStubVtbl,
	( CInterfaceStubVtbl *) &_IUndoActionStubVtbl,
	( CInterfaceStubVtbl *) &_IUndoGrouperStubVtbl,
	( CInterfaceStubVtbl *) &_IAdvInd2StubVtbl,
	( CInterfaceStubVtbl *) &_ILgWritingSystemStubVtbl,
	( CInterfaceStubVtbl *) &_ILgInputMethodEditorStubVtbl,
	( CInterfaceStubVtbl *) &_ILgWritingSystemFactoryStubVtbl,
	( CInterfaceStubVtbl *) &_ILgCollationStubVtbl,
	( CInterfaceStubVtbl *) &_ITsStrFactoryStubVtbl,
	( CInterfaceStubVtbl *) &_IVwTextSourceStubVtbl,
	( CInterfaceStubVtbl *) &_ITsStrBldrStubVtbl,
	( CInterfaceStubVtbl *) &_ITsIncStrBldrStubVtbl,
	( CInterfaceStubVtbl *) &_ITsPropsBldrStubVtbl,
	( CInterfaceStubVtbl *) &_ILgTsStringPlusWssStubVtbl,
	( CInterfaceStubVtbl *) &_ILgWritingSystemFactoryBuilderStubVtbl,
	( CInterfaceStubVtbl *) &_IJustifyingRendererStubVtbl,
	( CInterfaceStubVtbl *) &_IHelpTopicProviderStubVtbl,
	( CInterfaceStubVtbl *) &_ILgSegmentStubVtbl,
	0
};

PCInterfaceName const _LanguagePs_InterfaceNamesList[] =
{
	"ILgSpellCheckFactory",
	"ILgSearchEngine",
	"ILgStringConverter",
	"ILgTokenizer",
	"ILgNumericEngine",
	"ILgSpellChecker",
	"ILgCollatingEngine",
	"IActionHandler",
	"ISimpleInit",
	"IOleDbEncap",
	"ILgIcuLocaleEnumerator",
	"ITsMultiString",
	"ILgTextServices",
	"IFwMetaDataCache",
	"IRenderEngine",
	"IFwCustomExport",
	"ILgCharacterPropertyEngine",
	"IAdvInd",
	"IFwTool",
	"ILgCodePageEnumerator",
	"ILgTsDataObject",
	"ILgKeymanHandler",
	"IVwJustifier",
	"IOleDbCommand",
	"ILgIcuTransliteratorEnumerator",
	"IAdvInd3",
	"ILgLanguageEnumerator",
	"IDebugReport",
	"ITsString",
	"ITsStreamWrapper",
	"ILgFontManager",
	"IDbAdmin",
	"IRenderingFeatures",
	"ITsTextProps",
	"IFwFldSpec",
	"ILgIcuResourceBundle",
	"ILgIcuConverterEnumerator",
	"IVwGraphics",
	"IVwGraphicsWin32",
	"ITsPropsFactory",
	"IDebugReportSink",
	"IUndoAction",
	"IUndoGrouper",
	"IAdvInd2",
	"ILgWritingSystem",
	"ILgInputMethodEditor",
	"ILgWritingSystemFactory",
	"ILgCollation",
	"ITsStrFactory",
	"IVwTextSource",
	"ITsStrBldr",
	"ITsIncStrBldr",
	"ITsPropsBldr",
	"ILgTsStringPlusWss",
	"ILgWritingSystemFactoryBuilder",
	"IJustifyingRenderer",
	"IHelpTopicProvider",
	"ILgSegment",
	0
};


#define _LanguagePs_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _LanguagePs, pIID, n)

int __stdcall _LanguagePs_IID_Lookup( const IID * pIID, int * pIndex )
{
	IID_BS_LOOKUP_SETUP

	IID_BS_LOOKUP_INITIAL_TEST( _LanguagePs, 58, 32 )
	IID_BS_LOOKUP_NEXT_TEST( _LanguagePs, 16 )
	IID_BS_LOOKUP_NEXT_TEST( _LanguagePs, 8 )
	IID_BS_LOOKUP_NEXT_TEST( _LanguagePs, 4 )
	IID_BS_LOOKUP_NEXT_TEST( _LanguagePs, 2 )
	IID_BS_LOOKUP_NEXT_TEST( _LanguagePs, 1 )
	IID_BS_LOOKUP_RETURN_RESULT( _LanguagePs, 58, *pIndex )

}

const ExtendedProxyFileInfo LanguagePs_ProxyFileInfo =
{
	(PCInterfaceProxyVtblList *) & _LanguagePs_ProxyVtblList,
	(PCInterfaceStubVtblList *) & _LanguagePs_StubVtblList,
	(const PCInterfaceName * ) & _LanguagePs_InterfaceNamesList,
	0, // no delegation
	& _LanguagePs_IID_Lookup,
	58,
	2,
	0, /* table of [async_uuid] interfaces */
	0, /* Filler1 */
	0, /* Filler2 */
	0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/
