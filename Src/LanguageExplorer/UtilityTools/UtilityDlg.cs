// Copyright (c) 2014-2018 SIL International
// This software is licensed under the LGPL, version 2.1 or later
// (http://www.gnu.org/licenses/lgpl-2.1.html)

using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using LanguageExplorer.Areas.Grammar.Tools.PosEdit;
using LanguageExplorer.Areas.Lexicon;
using LanguageExplorer.Areas.Lexicon.Tools.Edit;
using LanguageExplorer.Areas.Lexicon.Tools.ReversalIndexes;
using LanguageExplorer.Areas.TextsAndWords.Interlinear;
using LanguageExplorer.Areas.TextsAndWords.Tools.Analyses;
using SIL.FieldWorks.Common.FwUtils;

namespace LanguageExplorer.UtilityTools
{
	/// <summary>
	/// This dialog presents the users with the list of utilities defined in 'Language Explorer\Configuration\UtilityCatalogInclude.xml'
	/// These utilities must implement the IUtility class and can set several labels in the dialog to explain the conditions where they
	/// are needed and their behavior.
	/// </summary>
	public class UtilityDlg : Form, IFlexComponent
	{
		private string m_whenDescription;
		private string m_whatDescription;
		private string m_redoDescription;
		private CheckedListBox m_clbUtilities;
		private RichTextBox m_rtbDescription;
		private ProgressBar m_progressBar;
		private Label m_lSteps;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		private const string s_helpTopic = "khtpProjectUtilities";
		private HelpProvider m_helpProvider;
		private Button m_btnRunUtils;
		private Label label1;
		private Label label2;
		private Button m_btnHelp;
		private Button m_btnClose;
		private IHelpTopicProvider m_helpTopicProvider;

		/// <summary>
		/// Constructor.
		/// </summary>
		public UtilityDlg(IHelpTopicProvider helpTopicProvider)
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();
			AccessibleName = GetType().Name;

			m_btnRunUtils.Enabled = false;

			m_helpTopicProvider = helpTopicProvider;

			m_helpProvider = new HelpProvider
			{
				HelpNamespace = FwDirectoryFinder.CodeDirectory + m_helpTopicProvider.GetHelpString("UserHelpFile")
			};
			m_helpProvider.SetHelpKeyword(this, m_helpTopicProvider.GetHelpString(s_helpTopic));
			m_helpProvider.SetHelpNavigator(this, HelpNavigator.Topic);

			// The standard localization doesn't seem to be working, so do it explicitly here.
			label1.Text = LanguageExplorerResources.ksUtilities;
			label2.Text = LanguageExplorerResources.ksDescription;
			m_btnHelp.Text = LanguageExplorerResources.ksHelpForUtiltiesDlg;
			m_btnClose.Text = LanguageExplorerResources.ks_Close;
			m_btnRunUtils.Text = LanguageExplorerResources.ksRunUtilities;
		}

		#region Implementation of IPropertyTableProvider

		/// <summary>
		/// Placement in the IPropertyTableProvider interface lets FwApp call IPropertyTable.DoStuff.
		/// </summary>
		public IPropertyTable PropertyTable { get; private set; }

		#endregion

		#region Implementation of IPublisherProvider

		/// <summary>
		/// Get the IPublisher.
		/// </summary>
		public IPublisher Publisher { get; private set; }

		#endregion

		#region Implementation of ISubscriberProvider

		/// <summary>
		/// Get the ISubscriber.
		/// </summary>
		public ISubscriber Subscriber { get; private set; }

		/// <summary>
		/// Initialize a FLEx component with the basic interfaces.
		/// </summary>
		/// <param name="flexComponentParameters">Parameter object that contains the required three interfaces.</param>
		public void InitializeFlexComponent(FlexComponentParameters flexComponentParameters)
		{
			FlexComponentCheckingService.CheckInitializationValues(flexComponentParameters, new FlexComponentParameters(PropertyTable, Publisher, Subscriber));

			PropertyTable = flexComponentParameters.PropertyTable;
			Publisher = flexComponentParameters.Publisher;
			Subscriber = flexComponentParameters.Subscriber;

			Text = StringTable.Table.LocalizeAttributeValue("FieldWorks Project Utilities");
			SuspendLayout();
			m_clbUtilities.Items.Clear();
			m_clbUtilities.Sorted = false;

			m_clbUtilities.Items.Add(new HomographResetter(this));
			m_clbUtilities.Items.Add(new ParserAnalysisRemover(this));
			m_clbUtilities.Items.Add(new ErrorFixer(this));
			m_clbUtilities.Items.Add(new WriteAllObjectsUtility(this));
			m_clbUtilities.Items.Add(new DuplicateWordformFixer(this));
			m_clbUtilities.Items.Add(new DuplicateAnalysisFixer(this));
			m_clbUtilities.Items.Add(new ParseIsCurrentFixer(this));
			m_clbUtilities.Items.Add(new DeleteEntriesSensesWithoutInterlinearization(this));
			m_clbUtilities.Items.Add(new LexEntryInflTypeConverter(this));
			m_clbUtilities.Items.Add(new LexEntryTypeConverter(this));
			m_clbUtilities.Items.Add(new GoldEticGuidFixer(this));
			m_clbUtilities.Items.Add(new SortReversalSubEntries(this));
			m_clbUtilities.Items.Add(new CircularRefBreaker(this));

			ResumeLayout();
			if (m_clbUtilities.Items.Count > 0)
				m_clbUtilities.SelectedIndex = 0;
		}

		#endregion

		/// <summary>
		/// Get the Utilites list box.
		/// </summary>
		public CheckedListBox Utilities
		{
			get
			{
				CheckDisposed();
				return m_clbUtilities;
			}
		}

		/// <summary>
		/// Get the progress bar.
		/// </summary>
		public ProgressBar ProgressBar
		{
			get
			{
				CheckDisposed();
				return m_progressBar;
			}
		}

		/// <summary>
		/// Set the When Description substring.
		/// </summary>
		public string WhenDescription
		{
			set
			{
				CheckDisposed();

				m_whenDescription = value;
			}
		}

		/// <summary>
		/// Set the What Description substring.
		/// </summary>
		public string WhatDescription
		{
			set
			{
				CheckDisposed();

				m_whatDescription = value;
			}
		}

		/// <summary>
		/// Set the "Cautions" substring. (Keeping the legacy API)
		/// </summary>
		public string RedoDescription
		{
			set
			{
				CheckDisposed();

				m_redoDescription = value;
			}
		}

		/// <summary>
		/// Check to see if the object has been disposed.
		/// All public Properties and Methods should call this
		/// before doing anything else.
		/// </summary>
		public void CheckDisposed()
		{
			if (IsDisposed)
				throw new ObjectDisposedException($"'{GetType().Name}' in use after being disposed.");
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			System.Diagnostics.Debug.WriteLineIf(!disposing, "****** Missing Dispose() call for " + GetType().Name + ". ****** ");
			// Must not be run more than once.
			if (IsDisposed)
				return;

			if( disposing )
			{
				components?.Dispose();
				m_helpProvider.ResetShowHelp(this);
				m_helpProvider.Dispose();
			}

			PropertyTable = null;
			Publisher = null;
			Subscriber = null;
			m_helpProvider = null;
			m_helpTopicProvider = null;

			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(UtilityDlg));
			this.m_clbUtilities = new System.Windows.Forms.CheckedListBox();
			this.m_rtbDescription = new System.Windows.Forms.RichTextBox();
			this.m_btnRunUtils = new System.Windows.Forms.Button();
			this.m_progressBar = new System.Windows.Forms.ProgressBar();
			this.m_lSteps = new System.Windows.Forms.Label();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.m_btnHelp = new System.Windows.Forms.Button();
			this.m_btnClose = new System.Windows.Forms.Button();
			this.SuspendLayout();
			//
			// m_clbUtilities
			//
			resources.ApplyResources(this.m_clbUtilities, "m_clbUtilities");
			this.m_clbUtilities.Name = "m_clbUtilities";
			this.m_clbUtilities.SelectedIndexChanged += new System.EventHandler(this.m_clbUtilities_SelectedIndexChanged);
			this.m_clbUtilities.ItemCheck += new System.Windows.Forms.ItemCheckEventHandler(this.m_clbUtilities_ItemCheck);
			//
			// m_rtbDescription
			//
			resources.ApplyResources(this.m_rtbDescription, "m_rtbDescription");
			this.m_rtbDescription.Name = "m_rtbDescription";
			this.m_rtbDescription.ReadOnly = true;
			//
			// m_btnRunUtils
			//
			resources.ApplyResources(this.m_btnRunUtils, "m_btnRunUtils");
			this.m_btnRunUtils.Name = "m_btnRunUtils";
			this.m_btnRunUtils.Click += new System.EventHandler(this.m_btnRunUtils_Click);
			//
			// m_progressBar
			//
			resources.ApplyResources(this.m_progressBar, "m_progressBar");
			this.m_progressBar.Name = "m_progressBar";
			//
			// m_lSteps
			//
			resources.ApplyResources(this.m_lSteps, "m_lSteps");
			this.m_lSteps.Name = "m_lSteps";
			//
			// label1
			//
			resources.ApplyResources(this.label1, "label1");
			this.label1.Name = "label1";
			//
			// label2
			//
			resources.ApplyResources(this.label2, "label2");
			this.label2.Name = "label2";
			//
			// m_btnHelp
			//
			resources.ApplyResources(this.m_btnHelp, "m_btnHelp");
			this.m_btnHelp.Name = "m_btnHelp";
			this.m_btnHelp.Click += new System.EventHandler(this.m_btnHelp_Click);
			//
			// m_btnClose
			//
			this.m_btnClose.DialogResult = System.Windows.Forms.DialogResult.Cancel;
			resources.ApplyResources(this.m_btnClose, "m_btnClose");
			this.m_btnClose.Name = "m_btnClose";
			this.m_btnClose.Click += new System.EventHandler(this.m_btnClose_Click);
			//
			// UtilityDlg
			//
			resources.ApplyResources(this, "$this");
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.CancelButton = this.m_btnClose;
			this.ControlBox = false;
			this.Controls.Add(this.m_lSteps);
			this.Controls.Add(this.m_progressBar);
			this.Controls.Add(this.m_btnClose);
			this.Controls.Add(this.m_btnHelp);
			this.Controls.Add(this.m_btnRunUtils);
			this.Controls.Add(this.m_rtbDescription);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.m_clbUtilities);
			this.Controls.Add(this.label1);
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
			this.MaximizeBox = false;
			this.MinimizeBox = false;
			this.Name = "UtilityDlg";
			this.ShowInTaskbar = false;
			this.ResumeLayout(false);

		}
		#endregion

		#region Events

		private void m_clbUtilities_SelectedIndexChanged(object sender, System.EventArgs e)
		{
			var currentFont = m_rtbDescription.SelectionFont;
#if __MonoCS__
			// Creating the bold equivalent of the current font doesn't seem to work in Mono,
			// as we crash shortly due to failures in GDIPlus.GdipMeasureString() using that
			// font.
			var boldFont = currentFont;
#else
			var boldFontStyle = FontStyle.Bold;
			using (var boldFont = new Font(currentFont.FontFamily, currentFont.Size, boldFontStyle))
#endif
			{
				m_whatDescription = m_whenDescription = m_redoDescription = null;
				((IUtility)m_clbUtilities.SelectedItem).OnSelection();
				m_rtbDescription.Clear();
				// What
				m_rtbDescription.SelectionFont = boldFont;
				m_rtbDescription.AppendText(LanguageExplorerResources.ksWhatItDoes);
				m_rtbDescription.AppendText(Environment.NewLine);
				m_rtbDescription.SelectionFont = currentFont;
				if (string.IsNullOrEmpty(m_whatDescription))
					m_rtbDescription.AppendText(LanguageExplorerResources.ksQuestions);
				else
					m_rtbDescription.AppendText(m_whatDescription);
				m_rtbDescription.AppendText(string.Format("{0}{0}", Environment.NewLine));

				// When
				m_rtbDescription.SelectionFont = boldFont;
				m_rtbDescription.AppendText(LanguageExplorerResources.ksWhenToUse);
				m_rtbDescription.AppendText(Environment.NewLine);
				m_rtbDescription.SelectionFont = currentFont;
				if (string.IsNullOrEmpty(m_whenDescription))
					m_rtbDescription.AppendText(LanguageExplorerResources.ksQuestions);
				else
					m_rtbDescription.AppendText(m_whenDescription);
				m_rtbDescription.AppendText(string.Format("{0}{0}", Environment.NewLine));

				// Cautions
				m_rtbDescription.SelectionFont = boldFont;
				m_rtbDescription.AppendText(LanguageExplorerResources.ksCautions);
				m_rtbDescription.AppendText(Environment.NewLine);
				m_rtbDescription.SelectionFont = currentFont;
				if (string.IsNullOrEmpty(m_redoDescription))
					m_rtbDescription.AppendText(LanguageExplorerResources.ksQuestions);
				else
					m_rtbDescription.AppendText(m_redoDescription);
#if __MonoCS__
				// If we don't have a selection explicitly set, we will crash deep in the Mono
				// code (RichTextBox.cs:618, property SelectionFont:get) shortly.
				m_rtbDescription.Focus();
				m_rtbDescription.SelectionStart = 0;
				m_rtbDescription.SelectionLength = 0;
				m_clbUtilities.Focus();
#endif
			}
		}

		private void m_btnRunUtils_Click(object sender, System.EventArgs e)
		{
			using (new WaitCursor(this))
			{
				// Note: Resetting the steps text doesn't work.
				//m_lSteps.Text = String.Empty;
				//int totalSteps = m_clbUtilities.CheckedItems.Count;
				//int currentStep = 0;
				var checkedItems = new HashSet<IUtility>();
				foreach (IUtility util in m_clbUtilities.CheckedItems)
				{
					//m_lSteps.SuspendLayout();
					//m_lSteps.Text = String.Format("Step {0} of {1}", ++currentStep, totalSteps);
					//m_lSteps.ResumeLayout(true);
					util.Process();
					m_progressBar.Value = 0;
					checkedItems.Add(util);
				}

				// Uncheck each one that was done.
				foreach (IUtility checkedUtil in checkedItems)
					m_clbUtilities.SetItemChecked(m_clbUtilities.Items.IndexOf(checkedUtil), false);

				//m_lSteps.Text = String.Empty;
			}
		}

		private void m_btnClose_Click(object sender, EventArgs e)
		{
			Close();
		}

		private void m_clbUtilities_ItemCheck(object sender, ItemCheckEventArgs e)
		{
			int cnt = m_clbUtilities.CheckedItems.Count;
			cnt = (e.NewValue == CheckState.Checked) ? cnt + 1 : cnt - 1;
			m_btnRunUtils.Enabled = cnt > 0;
		}

		private void m_btnHelp_Click(object sender, EventArgs e)
		{
			ShowHelp.ShowHelpTopic(m_helpTopicProvider, s_helpTopic);
		}

		#endregion Events
	}
}