-- Update database from version 200246 to 200247
BEGIN TRANSACTION  --( will be rolled back if wrong version #)
-------------------------------------------------------------------------------
-- Fixed proc to support MoAffixProcess

if object_id('DisplayName_MoForm') is not null begin
	print 'removing proc DisplayName_MoForm'
	drop proc DisplayName_MoForm
end
go

create proc [DisplayName_MoForm]
	@hvo int = null
as

declare @retval int, @fIsNocountOn int,
	@DisplayName nvarchar(4000), @pfxMarker nvarchar(2), @sfxMarker nvarchar(2),
	@AlloId int, @AlloClass int, @AlloOwner int, @AlloFlid int,
	@AlloTxt nvarchar(4000), @AlloFmt int, @AlloWs int,
	@SenseId int, @SenseTxt nvarchar(4000), @SenseFmt int, @SenseWs int,
	@CfTxt nvarchar(4000), @CfFmt int, @CfWs int,
	@myCursor CURSOR

	set @fIsNocountOn = @@options & 512
	if @fIsNocountOn = 0 set nocount on

	-- table variable to hold return information.
	declare @DisplayNameMoForm table (
		DisplayName nvarchar(4000), --1
		AlloId int,	-- 2
		AlloClass int,	-- 3
		AlloOwner int,	-- 4
		AlloFlid int,	-- 5
		AlloTxt nvarchar(4000),	-- 6
		AlloFmt int,	-- 7
		AlloWs int,	-- 8
		SenseId int,	--
		SenseTxt nvarchar(4000),	-- 10
		SenseFmt int,	-- 11
		SenseWs int,	-- 12
		CfTxt nvarchar(4000),	-- 13
		CfFmt int,	-- 14
		CfWs int)	-- 15

	--Note: This can't be a table variable, because we do:
	-- insert #DNLE exec DisplayName_LexEntry null
	--And that can't be done using table variables.
	create table #DNLE (
		LeId int primary key,
		Class int,
		HNum int default 0,
		--( See the notes under string tables in FwCore.sql about the
		--( COLLATE clause.
		FullTxt NVARCHAR(4000) COLLATE Latin1_General_BIN,
		FormId int default 0,
		Ord int default 0,
		Flid int default 0,
		FormTxt nvarchar(4000),
		FormFmt int,
		FormEnc int,
		SenseId int default 0,
		SenseGloss nvarchar(4000),
		SenseFmt int,
		SenseEnc int
		)
	-- ( Class ids are:
	-- (   5027	MoAffixAllomorph
	-- (   5045	MoStemAllomorph
	-- (   5029	MoAffixProcess is not used at this point.
	-- ( Owner Field ids are:
	-- (   5002029	LexEntry_LexemeForm
	-- (   5002030	LexEntry_AlternateForms
	if @hvo is null begin
		insert #DNLE exec DisplayName_LexEntry null
		-- Do all MoForms that are owned in the LexemeForm and AlternateForms
		-- properties of LexEntry.
		set @myCursor = CURSOR FAST_FORWARD for
			select cmo.Id, cmo.Class$, cmo.OwnFlid$
			from CmObject cmo
			where cmo.Class$ IN (5027, 5045, 5029) and cmo.OwnFlid$ IN (5002029, 5002030)
			order by cmo.Id
		open @myCursor
	end
	else begin
		-- Do only the MoForm provided by @hvo.
		set @myCursor = CURSOR FAST_FORWARD for
			select cmo.Id, cmo.Class$, cmo.OwnFlid$
			from CmObject cmo
			where cmo.Id = @hvo
				and cmo.Class$ IN (5027, 5045, 5029) and OwnFlid$ IN (5002029, 5002030)
		open @myCursor
	end

	-- Loop through all ids.
	fetch next from @myCursor into @AlloId, @AlloClass, @AlloFlid
	while @@fetch_status = 0
	begin
		-- Get display name for LexEntry.
		declare @XMLLEId nvarchar(4000), @cnt int

		select @AlloOwner=Owner$
		from CmObject
		where Id=@AlloId

		if @hvo is not null begin
			set @XMLLEId = '<root><Obj Id="' + cast(@AlloOwner as nvarchar(100)) + '"/></root>'
			insert #DNLE exec DisplayName_LexEntry @XMLLEId
		end

		select @SenseId=SenseId, @SenseTxt=isnull(SenseGloss, '***'), @SenseFmt=SenseFmt,
				@SenseWs=SenseEnc, @AlloWs=FormEnc,
				@CfTxt=FormTxt, @CfFmt=FormFmt, @CfWs=FormEnc
		from #DNLE
		where LeId=@AlloOwner

		-- REVIEW (SteveMiller): MultiTxt$.fmt was always NULL. Don't understand the
		-- reason for @AlloFmt being set to Fmt. Changed to cast(null as varbinary).
		select @AlloTxt=isnull(Txt, '***'), @AlloFmt = cast(null as varbinary)
		from MoForm_Form
		where Ws=@AlloWs and Obj=@AlloId

		select @pfxMarker=isnull(mmt.Prefix, ''), @sfxMarker=isnull(mmt.Postfix, '')
		from MoForm f
		left outer join MoMorphType mmt On f.MorphType=mmt.Id
		where f.Id=@AlloId

		set @DisplayName =
				@pfxMarker + @AlloTxt + @sfxMarker + ' (' + @SenseTxt + '): ' + @CfTxt

		if @hvo is not null
			truncate table #DNLE

		--Put everything in temporary table
		insert @DisplayNameMoForm (DisplayName,
			AlloId, AlloClass, AlloOwner, AlloFlid, AlloTxt, AlloFmt, AlloWs,
			SenseId, SenseTxt, SenseFmt, SenseWs,
			CfTxt, CfFmt, CfWs)
		values (@DisplayName,
			@AlloId, @AlloClass, @AlloOwner, @AlloFlid, @AlloTxt, @AlloFmt, @AlloWs,
			@SenseId, @SenseTxt, @SenseFmt, @SenseWs,
			@CfTxt, @CfFmt, @CfWs)
		-- Try for another MoForm.
		fetch next from @myCursor into @AlloId, @AlloClass, @AlloFlid
	end

	set @retval = 0
	select * from @DisplayNameMoForm order by AlloTxt

LExitWithCursor:
	close @myCursor
	deallocate @myCursor

LExitNoCursor:
	-- if nocount was turned on turn it off
	if @fIsNocountOn = 0 set nocount off

	drop table #DNLE

	return @retval
go

-----------------------------------------------------------------------------------
------ Finish or roll back transaction as applicable
-----------------------------------------------------------------------------------

DECLARE @dbVersion INT
SELECT @dbVersion = DbVer FROM Version$
IF @dbVersion = 200246
BEGIN
	UPDATE Version$ SET DbVer = 200247
	COMMIT TRANSACTION
	PRINT 'database updated to version 200247'
END
ELSE
BEGIN
	ROLLBACK TRANSACTION
	PRINT 'Update aborted: this works only if DbVer = 200246 (DbVer = ' +
			CONVERT(VARCHAR, @dbVersion) + ')'
END
GO
