﻿// Copyright (c) 2015-2018 SIL International
// This software is licensed under the LGPL, version 2.1 or later
// (http://www.gnu.org/licenses/lgpl-2.1.html)

using System;
using LanguageExplorer.UtilityTools;
using SIL.FieldWorks.FdoUi;
using SIL.FieldWorks.FDO;
using SIL.FieldWorks.FDO.DomainServices;
using SIL.FieldWorks.FDO.Infrastructure;

namespace LanguageExplorer.Areas.TextsAndWords.Interlinear
{
	/// <summary>
	/// What: This utility finds groups of analyses that have the same word category and morphological analysis.
	///		It merges such groups into a single analysis. It keeps all the glosses,
	///		except that if some glosses are duplicates (in all writing systems) such groups will also be merged.
	///		Analyzed texts which use any of the merged analyses will be made to use the merged one.
	///
	/// When: Use this when you discover (e.g., in Word Analyses) that you have more than one copy
	///		of the same analysis of the same wordform. It is especially helpful when you have
	///		many instances of this, for example, as a result of merging work done in multiple places.
	/// </summary>
	public class DuplicateAnalysisFixer : IUtility
	{
		private UtilityDlg m_dlg;

		/// <summary />
		internal DuplicateAnalysisFixer(UtilityDlg utilityDlg)
		{
			if (utilityDlg == null)
			{
				throw new ArgumentNullException(nameof(utilityDlg));
			}
			m_dlg = utilityDlg;
		}

		/// <summary />
		public string Label => ITextStrings.ksMergeDuplicateAnalyses;

		/// <summary>
		/// This is what is actually shown in the dialog as the ID of the task.
		/// </summary>
		public override string ToString()
		{
			return Label;
		}

		/// <summary />
		public void OnSelection()
		{
			m_dlg.WhenDescription = ITextStrings.ksUseMergeAnalysesWhen;
			m_dlg.WhatDescription = ITextStrings.ksMergeAnalysesAttemptsTo;
			m_dlg.RedoDescription = ITextStrings.ksMergeAnalysesWarning;
		}

		/// <summary>
		/// This actually makes the fix.
		/// </summary>
		public void Process()
		{
			var cache = m_dlg.PropertyTable.GetValue<FdoCache>("cache");
			UndoableUnitOfWorkHelper.Do(ITextStrings.ksUndoMergeAnalyses, ITextStrings.ksRedoMergeAnalyses,
				cache.ActionHandlerAccessor,
				() => WfiWordformServices.MergeDuplicateAnalyses(cache, new ProgressBarWrapper(m_dlg.ProgressBar)));
		}
	}
}
