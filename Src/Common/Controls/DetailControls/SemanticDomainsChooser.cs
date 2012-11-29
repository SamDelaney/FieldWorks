﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using SIL.FieldWorks.Common.COMInterfaces;
using SIL.FieldWorks.Common.Controls;
using SIL.FieldWorks.Common.Framework.DetailControls.Resources;
using SIL.FieldWorks.Common.FwUtils;
using SIL.FieldWorks.Common.Widgets;
using SIL.FieldWorks.FDO;
using SIL.Utils;
using XCore;

namespace SIL.FieldWorks.Common.Framework.DetailControls
{
	public partial class SemanticDomainsChooser : Form
	{
		private IVwStylesheet m_stylesheet;
		private HashSet<ICmObject> m_selectedItems = new HashSet<ICmObject>();
		private SearchTimer m_SearchTimer;
		private ICmSemanticDomainRepository m_semdomRepo;

		public IEnumerable<ICmObject> SemanticDomains
		{
			get { return m_selectedItems; }
		}

		public ILexSense Sense { private get; set; }

		public Mediator Mediator { private get; set; }

		public FdoCache Cache { private get; set; }

		public string DisplayWs { get; set; }

		public SemanticDomainsChooser()
		{
			InitializeComponent();
		}

		public void Initialize(IEnumerable<ObjectLabel> labels, IEnumerable<ICmObject> selectedItems)
		{
			m_semdomRepo = Cache.ServiceLocator.GetInstance<ICmSemanticDomainRepository>();
			m_stylesheet = FontHeightAdjuster.StyleSheetFromMediator(Mediator);
			m_selectedItems.UnionWith(selectedItems);
			UpdateDomainTreeAndListLabels(labels);
			searchTextBox.WritingSystemFactory = Cache.LanguageWritingSystemFactoryAccessor;
			searchTextBox.AdjustForStyleSheet(m_stylesheet);
			m_SearchTimer = new SearchTimer(this, 500, SearchSemanticDomains, new List<Control> {domainTree, domainList});
			searchTextBox.TextChanged += m_SearchTimer.OnSearchTextChanged;
		}

		private void UpdateDomainTreeAndListLabels(IEnumerable<ObjectLabel> labels)
		{
			domainTree.BeginUpdate();
			SemanticDomainSelectionUtility.UpdateDomainTreeLabels(labels, displayUsageCheckBox.Checked, domainTree, m_stylesheet, m_selectedItems);
			foreach (var selectedItem in m_selectedItems)
			{
				selectedDomainsList.Items.Add(SemanticDomainSelectionUtility.CreateLabelListItem(selectedItem, true, false));
			}
			domainTree.EndUpdate();
		}

		private void SearchSemanticDomains()
		{
			IEnumerable<ObjectLabel> labels = new List<ObjectLabel>();

			// The FindDomainsThatMatch method returns IEnumerable<ICmSemanticDomain>
			// based on the search string we give it.
			var searchString = TrimmedSearchBoxText;
			if (!string.IsNullOrEmpty(searchString))
			{
				domainList.ItemChecked -= OnDomainListChecked;
				var semDomainsToShow = m_semdomRepo.FindDomainsThatMatch(searchString);
				SemanticDomainSelectionUtility.UpdateDomainListLabels(ObjectLabel.CreateObjectLabels(Cache, semDomainsToShow, string.Empty, DisplayWs), domainList, displayUsageCheckBox.Checked);
				domainTree.Visible = false;
				domainList.Visible = true;
				domainList.ItemChecked += OnDomainListChecked;
			}
			else
			{
				domainTree.Visible = true;
				domainList.Visible = false;
			}
		}

		private string TrimmedSearchBoxText
		{
			get
			{
				return (searchTextBox.Tss.Text ?? string.Empty).Trim();
			}
		}

		void OnOk(object sender, EventArgs e)
		{
			m_selectedItems.Clear();
			foreach(ListViewItem selectedDomain in selectedDomainsList.Items)
			{
				var hvo = (int)selectedDomain.Tag;
				if(selectedDomain.Checked && hvo > 0)
				{
					m_selectedItems.Add(m_semdomRepo.GetObject(hvo));
				}
			}
		}

		private void OnSuggestClicked(object sender, EventArgs e)
		{

			IEnumerable<ICmSemanticDomain> partialMatches;
			var semDomainsToShow = m_semdomRepo.FindDomainsThatMatchWordsIn(Sense, out partialMatches);
			foreach (var domain in semDomainsToShow)
			{
				SemanticDomainSelectionUtility.AdjustSelectedDomainList(domain, true, selectedDomainsList);
			}
			// Add all the partial matches to the list also, but do not check them by default
			foreach (var domainMatch in partialMatches)
			{
				SemanticDomainSelectionUtility.AdjustSelectedDomainList(domainMatch, false, selectedDomainsList);
			}
		}

		private void OnSelectedDomainItemChecked(object sender, ItemCheckedEventArgs e)
		{
			SemanticDomainSelectionUtility.AdjustTreeAndListView(e.Item.Tag, e.Item.Checked, domainTree, domainList);
		}

		private void OnDomainListChecked(object sender, ItemCheckedEventArgs e)
		{
			SemanticDomainSelectionUtility.AdjustSelectedDomainList(e.Item.Tag as ICmObject, e.Item.Checked, selectedDomainsList);
		}

		private void OnDomainTreeCheck(object sender, TreeViewEventArgs e)
		{
			if(e.Action != TreeViewAction.Unknown)
			{
				var domain = (e.Node.Tag as ObjectLabel).Object;
				SemanticDomainSelectionUtility.AdjustSelectedDomainList(domain, e.Node.Checked, selectedDomainsList);
			}
		}

		private void OnDisplayUsageCheckedChanged(object sender, EventArgs e)
		{
			using (new WaitCursor(this))
			{
				domainTree.BeginUpdate();
				domainList.BeginUpdate();
				var stack = new Stack<LabelNode>(domainTree.Nodes.Cast<LabelNode>());
				while (stack.Count > 0)
				{
					LabelNode node = stack.Pop();
					node.DisplayUsage = displayUsageCheckBox.Checked;
					foreach (TreeNode childNode in node.Nodes)
					{
						var labelNode = childNode as LabelNode;
						if (labelNode != null)
							stack.Push(labelNode);
					}
				}
				foreach (ListViewItem item in domainList.Items)
				{
					item.Text = SemanticDomainSelectionUtility.CreateLabelListItem(item.Tag as ICmObject,
													item.Checked,
													displayUsageCheckBox.Checked).Text;
				}
				domainTree.EndUpdate();
				domainList.EndUpdate();
			}
		}

		private void OnEditDomainsLinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			var toolName = XmlUtils.GetAttributeValue(LinkNode, "tool");
			Mediator.PostMessage("FollowLink", new FwUtils.FwLinkArgs(toolName, new Guid()));
			btnCancel.PerformClick();
		}

		public System.Xml.XmlNode LinkNode { get; set; }
	}

	/// <summary>
	/// This class contains methods that can be used for displaying the Semantic Domains in a TreeView and ListView.
	/// These views are used in FLEX for allowing the user to select Semantic Domains.
	/// </summary>
	public static class SemanticDomainSelectionUtility
	{
		/// <summary>
		/// Creates a ListViewItem for the given ICmObject
		/// </summary>
		/// <param name="label">A Semantic Domain</param>
		/// <param name="createChecked"></param>
		/// <param name="displayUsage"></param>
		/// <returns></returns>
		public static ListViewItem CreateLabelListItem(ICmObject label, bool createChecked, bool displayUsage)
		{
			var semanticDomainItem = label as ICmSemanticDomain;
			if (semanticDomainItem == null)
			{
				return new ListViewItem(DetailControlsStrings.ksSemanticDomainInvalid);
			}
			var text = semanticDomainItem.AbbrAndName;
			if (displayUsage)
			{
				// Don't count the reference from an overlay, since we have no way to tell
				// how many times that overlay has been used.  See FWR-1050.
				int count = 0;
				if (semanticDomainItem.ReferringObjects != null)
				{
					count = semanticDomainItem.ReferringObjects.Count;
					foreach (ICmObject x in semanticDomainItem.ReferringObjects)
					{
						if (x is ICmOverlay)
							--count;
					}
				}
				if (count > 0)
					text += " (" + count + ")";
			}

			return new ListViewItem(text) { Checked = createChecked, Tag = semanticDomainItem.Hvo };
		}

		/// <summary>
		/// Find the item in the selectedDomainsList if it is there and
		/// set the checkmark accordingly, or add it and check it.
		/// </summary>
		/// <param name="domain"></param>
		/// <param name="check"></param>
		/// <param name="selectedDomainsList"></param>
		public static void AdjustSelectedDomainList(ICmObject domain, bool check, ListView selectedDomainsList)
		{
			ListViewItem checkedItem = null;
			foreach (ListViewItem item in selectedDomainsList.Items)
			{
				if (item.Tag == domain)
				{
					checkedItem = item;
					item.Checked = check;
					break;
				}
			}
			if (checkedItem == null)
			{
				selectedDomainsList.Items.Add(CreateLabelListItem(domain, check, false));
			}
		}

		/// <summary>
		/// Creates the label node.
		/// </summary>
		/// <param name="label">The label.</param>
		/// <param name="stylesheet"></param>
		/// <param name="selectedItems"></param>
		/// <param name="displayUsage">if set to <c>true</c> [display usage].</param>
		/// <returns></returns>
		private static DomainNode CreateLabelNode(ObjectLabel label, IVwStylesheet stylesheet, IEnumerable<ICmObject> selectedItems, bool displayUsage)
		{
			var node = new DomainNode(label, stylesheet, displayUsage);
			node.AddChildren(true, selectedItems);
			if (selectedItems.Contains(label.Object))
			{
				node.Checked = true;
			}
			return node;
		}

		/// <summary>
		/// Adjust the checkbox for the nodes in the TreeView and ListView according to the 'tag' and 'check'
		/// parameter values.
		/// </summary>
		/// <param name="tag"></param>
		/// <param name="check"></param>
		/// <param name="domainTree"></param>
		/// <param name="domainList"></param>
		public static void AdjustTreeAndListView(object tag, bool check, TreeView domainTree, ListView domainList)
		{
			foreach (DomainNode node in domainTree.Nodes)
			{
				if (RecursivelyAdjustTreeNode(node, tag, check))
				{
					break;
				}
			}
			foreach (ListViewItem listViewItem in domainList.Items)
			{
				if (listViewItem.Tag == tag)
				{
					listViewItem.Checked = check;
					break;
				}
			}
		}

		/// <summary>
		/// Check/Uncheck the TreeView node and recursively do this to any children nodes if the node
		/// matches the 'tag' object.
		/// </summary>
		/// <param name="node"></param>
		/// <param name="tag"></param>
		/// <param name="check"></param>
		/// <returns></returns>
		private static bool RecursivelyAdjustTreeNode(DomainNode node, object tag, bool check)
		{
			if ((node.Tag as ObjectLabel).Object == tag)
			{
				node.Checked = check;
				return true;
			}
			return node.Nodes.Cast<DomainNode>().Any(child => RecursivelyAdjustTreeNode(child, tag, check));
		}

		/// <summary>
		/// Clear the ListView and add createObjectLabels to it. 'displayUsage' determines if the items are checked/unchecked.
		/// </summary>
		/// <param name="createObjectLabels"></param>
		/// <param name="domainList"></param>
		/// <param name="displayUsage"></param>
		public static void UpdateDomainListLabels(IEnumerable<ObjectLabel> createObjectLabels, ListView domainList, bool displayUsage)
		{
			domainList.Items.Clear();
			foreach (var selectedItem in createObjectLabels)
			{
				domainList.Items.Add(CreateLabelListItem(selectedItem.Object, false, displayUsage));
			}
		}

		/// <summary>
		/// Populate the TreeView with the labels and check/uncheck according to the selectedItems and displayUsage
		/// parameters.
		/// </summary>
		/// <param name="labels"></param>
		/// <param name="displayUsage"></param>
		/// <param name="domainTree"></param>
		/// <param name="stylesheet"></param>
		/// <param name="selectedItems"></param>
		public static void UpdateDomainTreeLabels(IEnumerable<ObjectLabel> labels, bool displayUsage, TreeView domainTree,
			IVwStylesheet stylesheet, HashSet<ICmObject> selectedItems)
		{
			domainTree.Nodes.Clear();
			foreach (var label in labels)
			{
				var x = CreateLabelNode(label, stylesheet, selectedItems, displayUsage);
				domainTree.Nodes.Add(x);
			}
		}

		/// <summary>
		/// This class extends the LabelNode class to provide a customized display for the semantic
		/// domain.
		/// </summary>
		private class DomainNode : LabelNode
		{
			public DomainNode(ObjectLabel label, IVwStylesheet stylesheet, bool displayUsage)
				: base(label, stylesheet, displayUsage)
			{
			}

			protected override string BasicNodeString { get { return (Label.Object as ICmSemanticDomain).AbbrAndName; } }

			protected override LabelNode Create(ObjectLabel nol, IVwStylesheet stylesheet, bool displayUsage)
			{
				return new DomainNode(nol, stylesheet, displayUsage);
			}
		}
	}
}
