﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using SIL.FieldWorks.FwCoreDlgControls;

namespace SIL.FieldWorks.XWorks.DictionaryDetailsView
{
	public partial class ParagraphOptionsView : UserControl, IDictionaryParagraphOptionsView
	{
		public ParagraphOptionsView()
		{
			InitializeComponent();

			dropDownParaStyle.Enabled = false;
			dropDownContParaStyle.Enabled = false;
		}

		public bool NumberMetaConfigEnabled
		{
			set
			{
				labelParaStyle.Enabled = labelContParaStyle.Enabled = value;
				dropDownParaStyle.Enabled = dropDownContParaStyle.Enabled = value;
			}
		}

		/// <summary>Populate the Paragraph Style dropdown</summary>
		public void SetParaStyles(List<StyleComboItem> styles, string selectedStyle)
		{
			dropDownParaStyle.Items.Clear();
			dropDownParaStyle.Items.AddRange(styles.ToArray());
			dropDownParaStyle.SelectedIndex = 0; // default so we don't have a null item selected.  If there are 0 items, we have other problems.
			for (int i = 0; i < styles.Count; ++i)
			{
				if (styles[i].Style != null && styles[i].Style.Name == selectedStyle)
				{
					dropDownParaStyle.SelectedIndex = i;
					break;
				}
			}
		}

		/// <summary>Populate the Continuation Paragraph Style dropdown</summary>
		public void SetContParaStyles(List<StyleComboItem> styles, string selectedStyle)
		{
			dropDownContParaStyle.Items.Clear();
			dropDownContParaStyle.Items.AddRange(styles.ToArray());
			dropDownContParaStyle.SelectedIndex = 0; // default so we don't have a null item selected.  If there are 0 items, we have other problems.
			for (int i = 0; i < styles.Count; ++i)
			{
				if (styles[i].Style != null && styles[i].Style.Name == selectedStyle)
				{
					dropDownContParaStyle.SelectedIndex = i;
					break;
				}
			}
		}

		public string ParaStyle
		{
			get
			{
				var style = ((StyleComboItem)dropDownParaStyle.SelectedItem).Style;
				return style != null ? style.Name : null;
			}
		}

		public string ContParaStyle
		{
			get
			{
				var style = ((StyleComboItem)dropDownContParaStyle.SelectedItem).Style;
				return style != null ? style.Name : null;
			}
		}

		#region EventHandlers

		private EventHandler ButtonParaStylesOnClick(EventHandler value) { return (sender, e) => value(dropDownParaStyle, e); }
		private EventHandler ButtonContParaStylesOnClick(EventHandler value) { return (sender, e) => value(dropDownContParaStyle, e); }

		/// <summary>Fired when the Styles... button is clicked. Object sender is the Style ComboBox so it can be updated</summary>
		public event EventHandler StyleParaButtonClick
		{
			add { buttonParaStyles.Click += ButtonParaStylesOnClick(value); }
			remove { buttonParaStyles.Click -= ButtonParaStylesOnClick(value); }
		}

		public event EventHandler StyleContParaButtonClick
		{
			add { buttonContParaStyles.Click += ButtonContParaStylesOnClick(value); }
			remove { buttonContParaStyles.Click -= ButtonContParaStylesOnClick(value); }
		}

		public event EventHandler ParaStyleChanged
		{
			add { dropDownParaStyle.SelectedValueChanged += value; }
			remove { dropDownParaStyle.SelectedValueChanged -= value; }
		}

		public event EventHandler ContParaStyleChanged
		{
			add { dropDownContParaStyle.SelectedValueChanged += value; }
			remove { dropDownContParaStyle.SelectedValueChanged -= value; }
		}

		#endregion
	}
}