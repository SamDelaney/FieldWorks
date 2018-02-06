// Copyright (c) 2015-2018 SIL International
// This software is licensed under the LGPL, version 2.1 or later
// (http://www.gnu.org/licenses/lgpl-2.1.html)

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Windows.Forms;
using System.Xml.Linq;
using SIL.LCModel.Core.Text;
using SIL.LCModel.Core.WritingSystems;
using SIL.LCModel.Core.KernelInterfaces;
using SIL.FieldWorks.Common.ViewsInterfaces;
using SIL.FieldWorks.Common.FwUtils;
using SIL.FieldWorks.Common.RootSites;
using SIL.FieldWorks.Common.Widgets;
using SIL.LCModel;
using SIL.LCModel.DomainServices;
using SIL.FieldWorks.Filters;
using SIL.LCModel.Utils;
using SIL.Xml;

namespace LanguageExplorer.Controls.XMLViews
{
	/// <summary>
	/// A FilterBar contains a sequence of combos or grey areas, one for each column of a browse view.
	/// </summary>
	internal class FilterBar : UserControl
	{
		BrowseViewer m_bv;
		List<XElement> m_columns;
		FilterSortItems m_items;
		IFwMetaDataCache m_mdc; // m_cache.MetaDataCacheAccessor
		LcmCache m_cache; // Use minimally, may want to factor out for non-db use.
		ISilDataAccess m_sda; // m_cache.MainCacheAccessor
		ILgWritingSystemFactory m_wsf;
		int m_userWs;

		int m_stdFontHeight; // Keep track of this font height for calculating FilterBar heights
		IVwStylesheet m_stylesheet;
		int m_colOffset; // 0 if no select column, 1 if there is.
		// True during UpdateActiveItems to suppress side-effects of setting text of combo.
		bool m_fInUpdateActive = false;
		private IApp m_app;

		/// <summary>
		/// This is invoked when the user sets up, removes, or changes the filter for a column.
		/// </summary>
		public event FilterChangeHandler FilterChanged;

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Initializes a new instance of the <see cref="T:FilterBar"/> class.
		/// </summary>
		/// <param name="bv">The bv.</param>
		/// <param name="app">The application.</param>
		/// ------------------------------------------------------------------------------------
		public FilterBar(BrowseViewer bv, IApp app)
		{
			m_bv = bv;
			m_columns = m_bv.ColumnSpecs;
			m_app = app;
			m_cache = bv.Cache;
			m_mdc = m_cache.DomainDataByFlid.MetaDataCache;
			m_sda = m_cache.DomainDataByFlid;
			m_wsf = m_sda.WritingSystemFactory;
			m_userWs = m_cache.ServiceLocator.WritingSystemManager.UserWs;

			// Store the standard font height for use in SetStyleSheet
			using (Font tempFont = new Font(MiscUtils.StandardSerif, (float)10.0))
			{
				m_stdFontHeight = tempFont.Height;
			}

			// This light grey background shows through for any columns where we don't have a combo
			// because we can't figure a IStringFinder from the XmlParameters.
			BackColor = Color.FromKnownColor(KnownColor.ControlLight);
			MakeItems();
			AccessibilityObject.Name = "FilterBar";
		}

		/// <summary>
		/// Check to see if the object has been disposed.
		/// All public Properties and Methods should call this
		/// before doing anything else.
		/// </summary>
		public void CheckDisposed()
		{
			if (IsDisposed)
				throw new ObjectDisposedException(String.Format("'{0}' in use after being disposed.", GetType().Name));
		}

		/// <summary>
		/// Executes in two distinct scenarios.
		///
		/// 1. If disposing is true, the method has been called directly
		/// or indirectly by a user's code via the Dispose method.
		/// Both managed and unmanaged resources can be disposed.
		///
		/// 2. If disposing is false, the method has been called by the
		/// runtime from inside the finalizer and you should not reference (access)
		/// other managed objects, as they already have been garbage collected.
		/// Only unmanaged resources can be disposed.
		/// </summary>
		/// <param name="disposing"></param>
		/// <remarks>
		/// If any exceptions are thrown, that is fine.
		/// If the method is being done in a finalizer, it will be ignored.
		/// If it is thrown by client code calling Dispose,
		/// it needs to be handled by fixing the bug.
		///
		/// If subclasses override this method, they should call the base implementation.
		/// </remarks>
		protected override void Dispose(bool disposing)
		{
			Debug.WriteLineIf(!disposing, "****************** Missing Dispose() call for " + GetType().Name + ". ******************");
			// Must not be run more than once.
			if (IsDisposed)
				return;

			if (disposing)
			{
				// Dispose managed resources here.
				foreach (Control ctl in Controls)
				{
					if (ctl is FwComboBox)
					{
						FwComboBox combo = ctl as FwComboBox;
						combo.SelectedIndexChanged -= Combo_SelectedIndexChanged;
						// The Clear() below disposes the items in the ObjectCollection
						if (combo.ListBox != null && !combo.ListBox.IsDisposed) // ListBox contains Items
							combo.Items.Clear();
					}
				}
				if (m_items != null)
				{
					for (var i = 0; i < m_items.Count(); i++)
					{
						var fsi = m_items[i];
						fsi.FilterChanged -= FilterChangedHandler;
						fsi.Dispose();
					}
				}
			}

			// Dispose unmanaged resources here, whether disposing is true or false.
			m_bv = null; // Parent window.
			m_cache = null;
			m_columns = null; // Client needs to deal with the columns.
			m_items = null;
			m_mdc = null;
			m_sda = null;
			m_wsf = null;

			// This will handle any controls that are in the Controls property.
			base.Dispose(disposing);
		}

		/// <summary>
		/// An array of info about all columns (except the extra check box column, if present).
		/// </summary>
		internal FilterSortItem[] ColumnInfo
		{
			get
			{
				CheckDisposed();
				return m_items.ToArray();
			}
		}

		// Offset to add to real column index to get corresponding index into ColumnInfo.
		// Current 1 if check boxes present, otherwise zero.
		internal int ColumnOffset
		{
			get
			{
				CheckDisposed();
				return m_colOffset;
			}
		}

		// User has changed list of columns. Rework everything.
		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Updates the column list.
		/// </summary>
		/// ------------------------------------------------------------------------------------
		public void UpdateColumnList()
		{
			CheckDisposed();

			m_columns = m_bv.ColumnSpecs;
			SuspendLayout();
			foreach (FilterSortItem fsi in m_items)
			{
				// Will be disposed in MakeOrReuseItems().
				if (fsi != null && fsi.Combo != null)
					Controls.Remove(fsi.Combo);
				}
			MakeOrReuseItems();
			ResumeLayout();
			}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Makes the items.
		/// </summary>
		/// ------------------------------------------------------------------------------------
		public void MakeItems()
		{
			CheckDisposed();

			if (m_items != null)
				return; // already made.
			MakeOrReuseItems();
		}

		/// <summary>
		/// Make the items for the columns. If we are updating the columns we're trying to reuse
		/// existing items so that filter and sorter don't get messed up.
		/// </summary>
		private void MakeOrReuseItems()
		{
			if (m_bv.BrowseView == null || m_bv.BrowseView.Vc == null)
				return; // too soon.
			m_colOffset = m_bv.BrowseView.Vc.HasSelectColumn ? 1 : 0;
			var oldItems = m_items ?? new FilterSortItems();
			m_items = new FilterSortItems();
			// Here we figure which columns we can filter on.
			foreach (var colSpec in m_columns)
			{
				if (oldItems.Contains(colSpec))
				{
					var item = oldItems[colSpec];
					m_items.Add(item);
					Controls.Add(item.Combo);
					oldItems.Remove(colSpec);
				}
				else
					m_items.Add(MakeItem(colSpec));
			}
			foreach (var item in oldItems)
			{
				item.FilterChanged -= FilterChangedHandler;
				item.Dispose();
			}
		}

		/// <summary>
		/// Given the current record filter of the record list, determine whether any of the active
		/// filters could have been created by any of your filter sort items, and if so,
		/// update the filter bar to show they are active.
		/// </summary>
		/// <param name="currentFilter"></param>
		public void UpdateActiveItems(RecordFilter currentFilter)
		{
			CheckDisposed();

			try
			{
				m_fInUpdateActive = true;
				if (currentFilter is AndFilter)
				{
					// We have to copy the list, because the internal operation of this loop
					// may change the original list, invalidating the (implicit) enumerator.
					// See LT-1133 for an example of what happens without making this copy.
					ArrayList filters = (ArrayList)(currentFilter as AndFilter).Filters.Clone();
					foreach (RecordFilter filter in filters)
					{
						ActivateCompatibleFilter(filter);
					}
				}
				else
				{
					// Try to activate the single filter itself.
					ActivateCompatibleFilter(currentFilter);
				}
			}
			finally
			{
				//Adjust the FilterBar height and combo box heights to accomodate the
				//strings in the filter comboBoxes
				AdjustBarHeights();
				m_fInUpdateActive = false;
			}
		}

		/// <summary>
		/// Adjust the FilterBar and Combo boxes to reflect writing system font sizes for the active filters.
		/// </summary>
		private void AdjustBarHeights()
		{
			CheckDisposed();

			int maxComboHeight = GetMaxComboHeight();
			SetBarHeight(maxComboHeight); // Set height of FilterBar and its ComboBoxes
		}

		/// <summary>
		/// Given a filter bar cell filter which is (part of) the active filter for your
		/// record list, if one of your cells understands it install it as the active filter
		/// for that cell. Otherwise, remove it from the record list filter.
		/// (Except: if it's not a user-visible filter, we don't expect to show it, so
		/// skip it.)
		/// </summary>
		private void ActivateCompatibleFilter(RecordFilter filter)
		{
			if (filter == null || !filter.IsUserVisible)
				return;
			foreach (FilterSortItem fsi in m_items)
			{
				if (fsi != null && fsi.SetFromFilter(filter))
					return;
			}
			// we couldn't find a match in the active columns.
			// if we've already fully initialized the filters, then remove it from the record list filter.
			if (FilterChanged != null)
				FilterChanged(this, new FilterChangeEventArgs(null, filter));
			return;
		}

		/// <summary>
		/// Determine if the given filter (or subfilter) can be activated for the given
		/// column specification.
		/// </summary>
		/// <param name="filter">target filter</param>
		/// <param name="colSpec">column node spec </param>
		/// <returns>true, if the column node spec can use the filter.</returns>
		public bool CanActivateFilter(RecordFilter filter, XElement colSpec)
		{
			CheckDisposed();

			if (filter is AndFilter)
			{
				ArrayList filters = ((AndFilter)filter).Filters;
				foreach (RecordFilter rf in filters)
				{
					if ((rf is FilterBarCellFilter || rf is ListChoiceFilter) &&
						CanActivateFilter(rf, colSpec))
					{
						return true;
					}
				}
			}
			else if (filter is FilterBarCellFilter)
			{
				IStringFinder colFinder = LayoutFinder.CreateFinder(m_cache, colSpec, m_bv.BrowseView.Vc, m_app);
				bool fSameFinder = ((FilterBarCellFilter)filter).Finder.SameFinder(colFinder);
				var disposable = colFinder as IDisposable;
				if (disposable != null)
					disposable.Dispose();
				return fSameFinder;
			}
			else if (filter is ListChoiceFilter)
			{
				return (filter as ListChoiceFilter).CompatibleFilter(colSpec);
			}
			return false;
		}

		/// <summary>
		/// Set the widths of the columns.
		/// </summary>
		/// <param name="widths"></param>
		public void SetColWidths(int[] widths)
		{
			CheckDisposed();

			// We can only do this meaningfully if given the right number of lengths.
			// If this is wrong (which for example can happen if this routine gets
			// called during UpdateColumnList of the browse view before UpdateColumnList
			// has been called on the filter bar), ignore it, and hope we get adjusted
			// again after everything has the right number of items.
			if (widths.Length - m_colOffset != m_items.Count)
				return;
			int x = 0;
			if (m_colOffset > 0)
			{
				x = widths[0];
			}
			// not sure how to get the correct value for this, but it looks like column headers
			// are offset by a small value, so we shift the filter bar to line up properly
			x += 2;
			for (int i = 0; i < widths.Length - m_colOffset; ++i)
			{
				if (m_items[i] != null)
				{
					m_items[i].Combo.Left = x;
					m_items[i].Combo.Width = widths[i + m_colOffset];
				}
				x += widths[i + m_colOffset];
			}
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Make a FilterSortItem for the column specified by the given viewSpec,
		/// if it follows a pattern we recognize. Otherwise, return null.
		/// If successful, the FSI is initialized with the viewSpec, a IStringFinder, and
		/// a combo.
		/// The child of the column node is like the contents of a fragment for displaying
		/// the item.
		/// Often the thing we really want is embedded inside something else.
		/// <para>
		/// 		<properties>
		/// 			<bold value="on"/>
		/// 		</properties>
		/// 		<stringalt class="LexEntry" field="CitationForm" ws="vernacular"/>
		/// 	</para>
		/// </summary>
		/// <param name="colSpec">The col spec.</param>
		/// <returns></returns>
		/// ------------------------------------------------------------------------------------
		protected internal FilterSortItem MakeItem(XElement colSpec)
		{
			return MakeLayoutItem(colSpec);
		}

		static string GetStringAtt(XElement node, string name)
		{
			var xa = node.Attribute(name);
			return (xa == null) ? null : xa.Value;
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Make a FilterSortItem with a finder that is a LayoutFinder with the specified layout name.
		/// </summary>
		/// <param name="colSpec">The col spec.</param>
		/// <returns></returns>
		/// ------------------------------------------------------------------------------------
		protected FilterSortItem MakeLayoutItem(XElement colSpec)
		{
			var result = new FilterSortItem();
			result.Spec = colSpec; // SetupFsi uses this to get the writing system to use for the combo.
			result.Finder = LayoutFinder.CreateFinder(m_cache, colSpec, m_bv.BrowseView.Vc, m_app);
			SetupFsi(result);
			CoreWritingSystemDefinition ws = WritingSystemServices.GetWritingSystem(m_cache, FwUtils.ConvertElement(colSpec), null, 0) ??
								m_cache.ServiceLocator.WritingSystems.DefaultVernacularWritingSystem;
			result.Sorter = new GenRecordSorter(new StringFinderCompare(result.Finder,
				new WritingSystemComparer(ws)));
			return result;
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Make a FilterSortItem with a Finder that is an OneIndirectMlPropFinder based on
		/// saSpec, which is a stringalt element, and flidSeq, which is the sequence containing
		/// the named items.
		/// </summary>
		/// <param name="viewSpec">The view spec.</param>
		/// <param name="flidSeq">The flid seq.</param>
		/// <param name="saSpec">The sa spec.</param>
		/// <param name="fAtomic">if set to <c>true</c> [f atomic].</param>
		/// <returns></returns>
		/// ------------------------------------------------------------------------------------
		protected FilterSortItem MakeOneIndirectItem(XElement viewSpec, int flidSeq,
			XElement saSpec, bool fAtomic)
		{
			string className = GetStringAtt(saSpec, "class");
			string attrName = GetStringAtt(saSpec, "field");
			CoreWritingSystemDefinition ws = WritingSystemServices.GetWritingSystem(m_cache, FwUtils.ConvertElement(saSpec), null, 0);
			if (className == null || attrName == null || ws == null)
				return null; // Can't interpret an incomplete stringalt.

			int flid = m_mdc.GetFieldId(className, attrName, true);

			var result = new FilterSortItem();
			result.Spec = viewSpec;
			if (fAtomic)
				result.Finder = new OneIndirectAtomMlPropFinder(m_sda, flidSeq, flid, ws.Handle);
			else
				result.Finder = new OneIndirectMlPropFinder(m_sda, flidSeq, flid, ws.Handle);
			SetupFsi(result);
			result.Sorter = new GenRecordSorter(new StringFinderCompare(result.Finder,
				new WritingSystemComparer(ws)));
			return result;
		}

		// Make a FilterSortItem with a Finder that is an OwnMlPropFinder based on saSpec,
		// which is a stringalt element.
		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Makes the string alt item.
		/// </summary>
		/// <param name="viewSpec">The view spec.</param>
		/// <param name="saSpec">The sa spec.</param>
		/// <returns></returns>
		/// ------------------------------------------------------------------------------------
		protected FilterSortItem MakeStringAltItem(XElement viewSpec, XElement saSpec)
		{
			string className = GetStringAtt(saSpec, "class");
			string attrName = GetStringAtt(saSpec, "field");
			CoreWritingSystemDefinition ws = WritingSystemServices.GetWritingSystem(m_cache, FwUtils.ConvertElement(saSpec), null, 0);
			if (className == null || attrName == null || ws == null)
				return null; // Can't interpret an incomplete stringalt.

			int flid = m_mdc.GetFieldId(className, attrName, true);

			var result = new FilterSortItem();
			result.Spec = viewSpec;
			result.Finder = new OwnMlPropFinder(m_sda, flid, ws.Handle);
			SetupFsi(result);
			result.Sorter = new GenRecordSorter(new StringFinderCompare(result.Finder,
				new WritingSystemComparer(ws)));
			return result;
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Make a FilterSortItem with a Finder that is an OwnIntPropFinder based on intSpec,
		/// which is an &lt;int&gt; element..
		/// </summary>
		/// <param name="viewSpec">The view spec.</param>
		/// <param name="intSpec">The int spec.</param>
		/// <returns></returns>
		/// ------------------------------------------------------------------------------------
		protected FilterSortItem MakeIntItem(XElement viewSpec, XElement intSpec)
		{
			string className = GetStringAtt(intSpec, "class");
			string attrName = GetStringAtt(intSpec, "field");
			if (className == null || attrName == null)
				return null; // Can't interpret an incomplete int.
			int flid = m_mdc.GetFieldId(className, attrName, true);

			var result = new FilterSortItem();
			result.Spec = viewSpec;
			result.Finder = new OwnIntPropFinder(m_sda, flid);

			MakeIntCombo(result);
			result.FilterChanged += FilterChangedHandler;
			result.Sorter = new GenRecordSorter(new StringFinderCompare(result.Finder,
				new IntStringComparer()));
			return result;
		}


		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Get a default size for a FilterBar. The width is arbitrary, as it is always docked
		/// top, but the height is important and should match a standard combo.
		/// </summary>
		/// <value></value>
		/// <returns>The default <see cref="T:System.Drawing.Size"/> of the control.</returns>
		/// ------------------------------------------------------------------------------------
		protected override Size DefaultSize
		{
			get
			{
				return new Size(100, FwComboBox.ComboHeight);
			}
		}

		ITsString MakeLabel(string name)
		{
			return MakeLabel(name, m_userWs);
		}

		/// <summary>
		/// Make the standard sort of label we put in combo items for the filter bar for the specified string.
		/// </summary>
		private static ITsString MakeLabel(string name, int userWs)
		{
			ITsStrBldr bldr = TsStringUtils.MakeString(name, userWs).GetBldr();
			// per FWR-1256, we want to use the default font for stuff in the UI writing system.
			bldr.SetStrPropValue(0, bldr.Length, (int)FwTextPropType.ktptNamedStyle, StyleServices.UiElementStylename);
			return bldr.GetString();
		}

		/// <summary>
		/// The stuff common to all the ways we mak an FSI.
		/// </summary>
		/// <param name="item"></param>
		protected void SetupFsi(FilterSortItem item)
		{
			MakeCombo(item);
			item.FilterChanged += new FilterChangeHandler(this.FilterChangedHandler);
		}

		private void FilterChangedHandler(object sender, FilterChangeEventArgs args)
		{
			if (FilterChanged != null)
				FilterChanged(this, args);
		}

		/// <summary>
		/// Create the common options for all FSI combos (except Integer).
		/// </summary>
		/// <param name="item"></param>
		protected void MakeCombo(FilterSortItem item)
		{
			FwComboBox combo = new FwComboBox();
			combo.DropDownStyle = ComboBoxStyle.DropDownList;
			combo.BackColor = SystemColors.Window;
			combo.WritingSystemFactory = m_wsf;
			combo.StyleSheet = m_bv.StyleSheet;
			item.Combo = combo;
			combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksShowAll), null, item));

			string blankPossible = XmlUtils.GetOptionalAttributeValue(item.Spec, "blankPossible", "true");
			switch (blankPossible)
			{
				case "true":
					combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksBlanks), new BlankMatcher(), item));
					combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksNonBlanks), new NonBlankMatcher(), item));
					break;
			}

			// Enhance JohnT: figure whether the column has vernacular or analysis data...
			int ws = 0;
			if (item.Spec != null)
			{
				string wsParam = XmlViewsUtils.FindWsParam(item.Spec);
				if (wsParam.Length == 0)
					wsParam = XmlUtils.GetOptionalAttributeValue(item.Spec, "ws", "");
				ws = XmlViewsUtils.GetWsFromString(wsParam, m_cache);
			}
			if (ws == 0)
				ws = m_cache.ServiceLocator.WritingSystems.DefaultVernacularWritingSystem.Handle; // some sort of fall-back in case we can't determine a WS from the spec.

			string beSpec = XmlUtils.GetOptionalAttributeValue(item.Spec, "bulkEdit", "");
			if (String.IsNullOrEmpty(beSpec))
				beSpec = XmlUtils.GetOptionalAttributeValue(item.Spec, "chooserFilter", "");

			string sortType = XmlUtils.GetOptionalAttributeValue(item.Spec, "sortType", null);
			switch (sortType)
			{
				case "integer":
					// For columns which are interger values we offer the user a couple preset filters
					// one is  "0"  and the other is "Greater than zero"
					combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksZero),
						new ExactMatcher(MatchExactPattern(XMLViewsStrings.ksZero)), item));
					combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksGreaterThanZero),
						new RangeIntMatcher(1, Int32.MaxValue), item));
					combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksGreaterThanOne),
						new RangeIntMatcher(2, Int32.MaxValue), item));
					combo.Items.Add(new RestrictComboItem(MakeLabel(XMLViewsStrings.ksRestrict_),
						m_bv.PropertyTable.GetValue<IHelpTopicProvider>("HelpTopicProvider"),
						item,
						m_cache.ServiceLocator.WritingSystemManager.UserWs,
						combo));
					break;
				case "genDate":
				case "date":
					combo.Items.Add(new RestrictDateComboItem(MakeLabel(XMLViewsStrings.ksRestrict_),
						m_bv.PropertyTable.GetValue<IHelpTopicProvider>("HelpTopicProvider"),
						item,
						m_cache.ServiceLocator.WritingSystemManager.UserWs,
						sortType == "genDate",
						combo));
					break;
				case "YesNo":
					// For columns which have only the values of "yes" or "no" we offer the user these preset
					// filters to choose.
					combo.Items.Add(new FilterComboItem(MakeLabel(LanguageExplorerResources.ksYes.ToLowerInvariant()),
						new ExactMatcher(MatchExactPattern(LanguageExplorerResources.ksYes.ToLowerInvariant())), item));
					combo.Items.Add(new FilterComboItem(MakeLabel(LanguageExplorerResources.ksNo.ToLowerInvariant()),
						new ExactMatcher(MatchExactPattern(LanguageExplorerResources.ksNo.ToLowerInvariant())), item));
					break;
				case "stringList":
					string[] labels = m_bv.BrowseView.GetStringList(item.Spec);
					if (labels == null)
						break;
					foreach (string aLabel in labels)
					{
						combo.Items.Add(new FilterComboItem(MakeLabel(aLabel),
							new ExactMatcher(MatchExactPattern(aLabel)), item));
					}
					if (labels.Length > 2)
					{
						foreach (string aLabel in labels)
						{
							combo.Items.Add(new FilterComboItem(MakeLabel(string.Format(XMLViewsStrings.ksExcludeX, aLabel)),
								new InvertMatcher(new ExactMatcher(MatchExactPattern(aLabel))), item));
						}
					}
					break;
				default:
					// If it isn't any of those, include the bad spelling item, provided we have a dictionary
					// for the relevant language, and provided it is NOT a list (for which we will make a chooser).
					if (!String.IsNullOrEmpty(beSpec))
						break;
					AddSpellingErrorsIfAppropriate(item, combo, ws);
					break;
			}
			combo.Items.Add(new FindComboItem(MakeLabel(XMLViewsStrings.ksFilterFor_), item, ws, combo, m_bv));

			if (!String.IsNullOrEmpty(beSpec))
			{
				MakeListChoiceFilterItem(item, combo, beSpec, m_bv.PropertyTable);
			}
			// Todo: lots more interesting items.
			// - search the list for existing names
			// - "any of" and "none of" launch a dialog with check boxes for all existing values.
			//		- maybe a control to check all items containing...
			// - "containing" launches dialog asking for string (may contain # at start or end).
			// - "matching pattern" launches dialog to obtain pattern.
			// - "custom" may launch dialog with "OR" options and "is, is not, is less than, is greater than, matches,..."
			// How can we get the current items? May not be available until later...
			// - May need to add 'ShowList' event to FwComboBox so we can populate the list when we show it.

			combo.SelectedIndex = 0;
			// Do this after selecting initial item, so we don't get a spurious notification.
			combo.SelectedIndexChanged += Combo_SelectedIndexChanged;
			combo.AccessibleName = "FwComboBox";
			Controls.Add(combo);
		}

		private void AddSpellingErrorsIfAppropriate(FilterSortItem item, FwComboBox combo, int ws)
		{
			// LT-9047 For certain fields, filtering on Spelling Errors just doesn't make sense.
			var layoutNode = item.Spec.Attribute("layout") ?? item.Spec.Attribute("label");
			string layout = "";
			if(layoutNode != null)
			{
				layout = layoutNode.Value;
			}
			switch (layout)
			{
				case "Pronunciation":
				case "CVPattern":
					break;
				default:
					var dict = m_bv.BrowseView.RootSiteEditingHelper.GetDictionary(ws);
					if (dict != null)
					{
						combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksSpellingErrors),
															new BadSpellingMatcher(ws), item));
					}
					break;
			}
		}

		internal IVwPattern MatchExactPattern(String str)
		{
			int ws = m_cache.ServiceLocator.WritingSystems.DefaultAnalysisWritingSystem.Handle;
			IVwPattern m_pattern = VwPatternClass.Create();
			m_pattern.MatchOldWritingSystem = false;
			m_pattern.MatchDiacritics = false;
			m_pattern.MatchWholeWord = false;
			m_pattern.MatchCase = false;
			m_pattern.UseRegularExpressions = false;
			m_pattern.Pattern = TsStringUtils.MakeString(str, ws);
			return m_pattern;
		}

		internal IVwPattern MatchAnywherePattern(String str, int ws)
		{
			IVwPattern m_pattern = VwPatternClass.Create();
			m_pattern.MatchOldWritingSystem = false;
			m_pattern.MatchDiacritics = false;
			m_pattern.MatchWholeWord = false;
			m_pattern.MatchCase = false;
			m_pattern.UseRegularExpressions = false;

			m_pattern.Pattern = TsStringUtils.MakeString(str, ws);
			m_pattern.IcuLocale = m_cache.WritingSystemFactory.GetStrFromWs(ws);
			return m_pattern;
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Make a combo menu item (and install it) for choosing from a list, based on the column
		/// spec at item.Spec.
		/// </summary>
		/// <param name="item">The item.</param>
		/// <param name="combo">The combo.</param>
		/// <param name="beSpec">The be spec.</param>
		/// <param name="propertyTable"></param>
		/// ------------------------------------------------------------------------------------
		private void MakeListChoiceFilterItem(FilterSortItem item, FwComboBox combo, string beSpec, IPropertyTable propertyTable)
		{
			switch (beSpec)
			{
				case "complexListMultiple":
					combo.Items.Add(new ListChoiceComboItem(MakeLabel(XMLViewsStrings.ksChoose_), item, m_cache, propertyTable, combo, false, null));
					break;
				case "external":
					Type beType = DynamicLoader.TypeForLoaderNode(item.Spec);
					Type filterType = null;
					if (typeof(ListChoiceFilter).IsAssignableFrom(beType))
					{
						// typically it is a chooserFilter attribute, and gives the actual filter.
						filterType = beType;
					}
					else
					{
						// typically got a bulkEdit spec, and the editor class may know a compatible filter class.
						MethodInfo mi = beType.GetMethod("FilterType", BindingFlags.Static | BindingFlags.Public);
						if (mi != null)
							filterType = mi.Invoke(null, null) as Type;
					}

					if (filterType != null)
					{
						PropertyInfo pi = filterType.GetProperty("Atomic", BindingFlags.Public | BindingFlags.Static);
						bool fAtomic = false;
						if (pi != null)
							fAtomic = (bool)pi.GetValue(null, null);
						ListChoiceComboItem comboItem = new ListChoiceComboItem(MakeLabel(XMLViewsStrings.ksChoose_), item, m_cache, propertyTable, combo,
							fAtomic, filterType);
						combo.Items.Add(comboItem);

						PropertyInfo piLeaf = filterType.GetProperty("LeafFlid", BindingFlags.Public | BindingFlags.Static);
						if (piLeaf != null)
							comboItem.LeafFlid = (int)piLeaf.GetValue(null, null);
					}
					break;
				case "textsFilterItem":
#if RANDYTODO
					// TODO: If/When the filters assembly gets assimilated into LE, then just call the constructor on TextsFilterItem.
#endif
					var specialItemName1 = MakeLabel(XmlUtils.GetOptionalAttributeValue(item.Spec, "specialItemName", XMLViewsStrings.ksChoose_));
					var specialFilter1 = DynamicLoader.CreateObject(XmlUtils.FindElement(item.Spec, "dynamicloaderinfo"), specialItemName1, m_bv.Publisher) as FilterComboItem;
					combo.Items.Add(specialFilter1);
					break;
				case "special":
					// Make any arbitrary special filter combo item we may want. The Spec has a <dynamicloaderinfo> child that specifies what.
					// For now the only instance wants the label "Choose" so I've hard coded that; if need be we can make it configurable,
					// or of course the constructor could ignore it. (But it should use MakeLabel if at all possible.)
					var specialItemName2 = MakeLabel(XmlUtils.GetOptionalAttributeValue(item.Spec, "specialItemName", XMLViewsStrings.ksChoose_));
					var specialFilter2 = DynamicLoader.CreateObject(XmlUtils.FindElement(item.Spec, "dynamicloaderinfo"), specialItemName2, m_cache) as FilterComboItem;
					combo.Items.Add(specialFilter2);
					break;

				case "atomicFlatListItem": // Fall through
				case "morphTypeListItem":  // Fall through
				case "variantConditionListItem":
					combo.Items.Add(new ListChoiceComboItem(MakeLabel(XMLViewsStrings.ksChoose_), item, m_cache, propertyTable, combo, true, null));
					break;
				default:
					// if we didn't find it, try "chooserFilter", if we haven't already.
					string chooserFilter = XmlUtils.GetOptionalAttributeValue(item.Spec, "chooserFilter", string.Empty);
					if (!String.IsNullOrEmpty(chooserFilter) && chooserFilter != beSpec)
						MakeListChoiceFilterItem(item, combo, chooserFilter, propertyTable);
					return;
			}
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Makes the int combo.
		/// </summary>
		/// <param name="item">The item.</param>
		/// ------------------------------------------------------------------------------------
		protected void MakeIntCombo(FilterSortItem item)
		{
			// This is just similar enough to MakeCombo to be annoying.
			var combo = new FwComboBox();
			combo.DropDownStyle = ComboBoxStyle.DropDownList;
			combo.WritingSystemFactory = m_wsf;
			item.Combo = combo;
			combo.Items.Add(new FilterComboItem(MakeLabel(XMLViewsStrings.ksShowAll), null, item));
			combo.Items.Add(new RestrictComboItem(MakeLabel(XMLViewsStrings.ksRestrict_),
				m_bv.PropertyTable.GetValue<IHelpTopicProvider>("HelpTopicProvider"),
				item,
				m_cache.ServiceLocator.WritingSystemManager.UserWs,
				combo));
			combo.SelectedIndex = 0;
			// Do this after selecting initial item, so we don't get a spurious notification.
			combo.SelectedIndexChanged += Combo_SelectedIndexChanged;
			combo.AccessibleName = "FwComboBox";
			Controls.Add(combo);
		}

		private bool m_fInSelectedIndexChanged;

		private void Combo_SelectedIndexChanged(object sender, EventArgs e)
		{
			var combo = sender as FwComboBox;
			if (combo == null || m_fInSelectedIndexChanged)
				return;

			m_fInSelectedIndexChanged = true;
			try
			{
				if (m_fInUpdateActive)
				{
					// The following colorization was requested by LT-2183.
					combo.BackColor = combo.SelectedIndex == 0 ? SystemColors.Window : Color.Yellow;
					return;
				}

				var fci = combo.SelectedItem as FilterComboItem;
				if (fci != null) // Happens when we set the text to what the user typed.
				{
					if (fci.Invoke())
						// The following colorization was requested by LT-2183.
						combo.BackColor = combo.SelectedIndex == 0 ? SystemColors.Window : Color.Yellow;
					else
						// Restore previous combo text
						combo.Tss = combo.PreviousTextBoxText;
				}
			}
			finally
			{
				m_fInSelectedIndexChanged = false;
			}
		}

		/// <summary>
		/// Reset any filters to empty.  This assumes that index 0 of the internal combobox
		///  selects the "no filter".
		/// </summary>
		public void RemoveAllFilters()
		{
			CheckDisposed();

			if (m_items == null)
				return;
			for (int i = 0; i < m_items.Count; ++i)
			{
				if (m_items[i] != null &&
					m_items[i].Combo != null &&
					m_items[i].Combo.SelectedIndex != 0)
				{
					m_items[i].Combo.SelectedIndex = 0;
				}
			}
			//Adjust the FilterBar height and combo box heights to accomodate the
			//strings in the filter comboBoxes
			AdjustBarHeights();
		}

		/// <summary>
		/// Apply the stylesheet to each combobox.
		/// </summary>
		/// <param name="stylesheet">Apply this to each ComboBox</param>
		internal void SetStyleSheet(IVwStylesheet stylesheet)
		{
			CheckDisposed();

			m_stylesheet = stylesheet;

			// Also apply stylesheet to each ComboBox.
			foreach (FilterSortItem item in m_items)
			{
				if (item.Combo is FwComboBox)
				{
					item.Combo.StyleSheet = stylesheet;
				}
			}
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Search through the strings for the filters on columns and pick the tallest font height
		/// </summary>
		/// <returns>Height of tallest ComboBox font</returns>
		/// ------------------------------------------------------------------------------------
		private int GetMaxComboHeight()
		{
			int maxComboHeight = 0;

			// For each column in browse views seach through the Combo boxes (Filters)
			// then return the tallest font height from these.
			foreach (FilterSortItem item in m_items)
			{
				int ws = TsStringUtils.GetWsAtOffset(item.Combo.Tss, 0);
				using (Font tempFont = SIL.FieldWorks.Common.Widgets.FontHeightAdjuster.GetFontForNormalStyle(
				ws, m_stylesheet, m_wsf))
				{
					maxComboHeight = Math.Max(maxComboHeight, tempFont.Height);
				}
			}

			return maxComboHeight;
		}

		/// ------------------------------------------------------------------------------------
		/// <summary>
		/// Set the 'FilterBar' height and that of all its associated 'ComboBox'es
		/// </summary>
		/// <param name="height">Height value to apply to ComboBox and FilterBar</param>
		/// ------------------------------------------------------------------------------------
		private void SetBarHeight(int height)
		{
			// Calculate what to add to height for combobox to look right
			height += FwComboBox.ComboHeight - this.m_stdFontHeight;

			this.Height = height;
			foreach (FilterSortItem item in m_items)
			{
				if (item.Combo is FwComboBox)
				{
					item.Combo.Height = height;
					item.Combo.PerformLayout();
					item.Combo.Tss = FontHeightAdjuster.GetUnadjustedTsString(item.Combo.Tss);
				}
			}
		}


	}
}