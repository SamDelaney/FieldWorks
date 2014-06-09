﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using ExCSS;
using NUnit.Framework;
using Palaso.TestUtilities;
using SIL.CoreImpl;
using SIL.FieldWorks.Common.COMInterfaces;
using SIL.FieldWorks.Common.Framework;
using SIL.FieldWorks.Common.FwUtils;
using SIL.FieldWorks.Common.Widgets;
using SIL.FieldWorks.FDO;
using SIL.FieldWorks.FDO.DomainServices;
using SIL.FieldWorks.FDO.FDOTests;
using SIL.Utils;
using XCore;

namespace SIL.FieldWorks.XWorks
{
	class CssGeneratorTests : MemoryOnlyBackendProviderRestoredForEachTestTestBase
	{
		private Mediator m_mediator;
		private FwStyleSheet m_styleSheet;
		private MockFwXApp m_application;
		private string m_configFilePath;
		private MockFwXWindow m_window;
		private readonly Color FontColor = Color.Blue;
		private readonly Color FontBGColor = Color.Green;
		private readonly string FontName = "foofoo";
		private readonly Color BorderColor = Color.Red;
		private StyleInfoTable m_owningTable;
		private const int LineHeight = 2;
		private const FwTextAlign ParagraphAlignment = FwTextAlign.ktalJustify;
		private const bool FontBold = true;
		private const bool FontItalic = true;
		private const int BorderTrailing = 5;
		private const int BorderTop = 20;
		private const int BorderBottom = 10;
		private const int LeadingIndent = 24;
		private const int TrailingIndent = 48;
		private const int PadTop = 15;
		private const int PadBottom = 30;
		private const int FontSize = 10000;

		[SetUp]
		public void ResetAssemblyFile()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "FDO";
		}

		[Test]
		public void GenerateCssForConfiguration_NullModelThrowsNullArgument()
		{
			Assert.Throws(typeof(ArgumentNullException), () => CssGenerator.GenerateCssFromConfiguration(null, m_mediator));
		}

		[Test]
		public void GenerateCssForConfiguration_SimpleConfigurationGeneratesValidCss()
		{
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "HeadWord",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" })
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { headwordNode },
				FieldDescription = "LexEntry"
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> { mainEntryNode });

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { mainEntryNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			// verify that the css result contains a line similar to: .lexentry {
			Assert.IsTrue(Regex.Match(cssResult, "^\\s*\\.lexentry\\s*{.*").Success,
							  "Css for root node(lexentry) did not generate a specific match");
			// verify that the css result contains a line similar to: .lexentry .headword {
			Assert.IsTrue(Regex.Match(cssResult, "\\.lexentry\\s*\\.headword\\s*{.*").Success,
							  "Css for child node(headword) did not generate a specific match");
		}

		[Test]
		public void GenerateCssForConfiguration_BeforeAfterConfigGeneratesBeforeAfterCss()
		{
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "HeadWord",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Before = "Z",
				After = "A"
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { headwordNode },
				FieldDescription = "LexEntry"
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> { mainEntryNode });

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { mainEntryNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			// Check result for before and after rules equivalent to .headword:before{content:'Z';} and .headword:after{content:'A'}
			Assert.IsTrue(Regex.Match(cssResult, "\\.headword\\s*:\\s*before\\s*{\\s*content\\s*:\\s*'Z';\\s*}").Success,
							  "css before rule with Z content not found on headword");
			Assert.IsTrue(Regex.Match(cssResult, "\\.headword\\s*:\\s*after\\s*{\\s*content\\s*:\\s*'A';\\s*}").Success,
							  "css after rule with A content not found on headword");
		}

		[Test]
		public void GenerateCssForStyleName_CharacterStyleWorks()
		{
			GenerateStyle("Dictionary-Vernacular");
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Vernacular", CssGenerator.DefaultStyle, m_mediator);
			VerifyFontInfoInCss(FontColor, FontBGColor, FontName, FontBold, FontItalic, FontSize, styleDeclaration.ToString());
		}

		[Test]
		public void GenerateCssForStyleName_ParagraphBorderWorks()
		{
			GenerateParagraphStyle("Dictionary-Paragraph");
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Paragraph", CssGenerator.DefaultStyle, m_mediator);
			//border leading omitted from paragraph style definition which should result in 0pt left width
			VerifyParagraphBorderInCss(BorderColor, 0, BorderTrailing, BorderBottom, BorderTop, styleDeclaration.ToString());
		}

		[Test]
		public void GenerateCssForStyleName_ParagraphPaddingWorks()
		{
			GenerateParagraphStyle("Dictionary-Paragraph-Padding");
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Paragraph-Padding", CssGenerator.DefaultStyle, m_mediator);
			Assert.That(styleDeclaration.ToString(), Contains.Substring("padding-left:" + LeadingIndent + "pt"));
			Assert.That(styleDeclaration.ToString(), Contains.Substring("padding-right:" + TrailingIndent + "pt"));
			Assert.That(styleDeclaration.ToString(), Contains.Substring("padding-top:" + PadTop + "pt"));
			Assert.That(styleDeclaration.ToString(), Contains.Substring("padding-bottom:" + PadBottom + "pt"));
		}

		[Test]
		public void GenerateCssForStyleName_ParagraphAlignmentWorks()
		{
			GenerateParagraphStyle("Dictionary-Paragraph-Justify");
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Paragraph-Justify", CssGenerator.DefaultStyle, m_mediator);
			Assert.That(styleDeclaration.ToString(), Contains.Substring("align:" + ParagraphAlignment.AsCssString()));
		}

		[Test]
		public void GenerateCssForStyleName_ParagraphRelativeLineSpacingWorks()
		{
			GenerateParagraphStyle("Dictionary-Paragraph-RelativeLine");
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Paragraph-RelativeLine", CssGenerator.DefaultStyle, m_mediator);
			Assert.That(styleDeclaration.ToString(), Contains.Substring("line-height:" + LineHeight + ";"));
		}

		[Test]
		public void GenerateCssForStyleName_ParagraphAbsoluteLineSpacingWorks()
		{
			var style = GenerateParagraphStyle("Dictionary-Paragraph-Absolute");
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptLineHeight, (int)FwTextPropVar.ktpvMilliPoint, 9);
			//SUT
			var styleDeclaration = CssGenerator.GenerateCssStyleFromFwStyleSheet("Dictionary-Paragraph-Absolute", CssGenerator.DefaultStyle, m_mediator);
			Assert.That(styleDeclaration.ToString(), Contains.Substring("line-height:9pt;"));
		}

		[Test]
		public void GenerateCssForConfiguration_ConfigWithCharStyleWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			GenerateStyle("Dictionary-Headword");
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "Dictionary-Headword"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			VerifyFontInfoInCss(FontColor, FontBGColor, FontName, true, true, FontSize, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleWsOverrideWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("WsStyleTest");
			var fontInfo = new FontInfo();
			fontInfo.m_italic.ExplicitValue = false; //override the italic value to false
			fontInfo.m_fontName.ExplicitValue = "french"; //override the fontname to 'french'
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "WsStyleTest"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the french overrides is present
			VerifyFontInfoInCss(FontColor, FontBGColor, "french", true, false, FontSize, cssResult);
			//make sure that the default options are also present
			VerifyFontInfoInCss(FontColor, FontBGColor, FontName, true, true, FontSize, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_ConfigWithParaStyleWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			GenerateParagraphStyle("Dictionary-Paragraph-Border");
			var minorEntryNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				ClassNameOverride = "minor",
				Label = "Minor Entry",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "Dictionary-Paragraph-Border"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { minorEntryNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			Assert.That(cssResult, Contains.Substring(".minor"));
			VerifyFontInfoInCss(FontColor, FontBGColor, FontName, true, true, FontSize, cssResult);
			//border leading omitted from paragraph style definition which should result in 0pt left width
			VerifyParagraphBorderInCss(BorderColor, 0, BorderTrailing, BorderBottom, BorderTop, cssResult);
		}

		[Ignore("Won't pass yet.")]
		[Test]
		public void GenerateCssForConfiguration_DefaultRootConfigGeneratesResult()
		{
			GenerateStyle("Dictionary-Headword");
			string defaultRoot =
				Path.Combine(Path.Combine(DirectoryFinder.DefaultConfigurations, "Dictionary"), "Root.xml");
			var model = new DictionaryConfigurationModel(defaultRoot, Cache);
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			var parser = new ExCSS.Parser();
			var styleSheet = parser.Parse(cssResult);
			Debug.WriteLine(cssResult);
			Assert.AreEqual(0, styleSheet.Errors.Count);
		}

		[Test]
		public void GenerateCssForConfiguration_FwStyleInheritanceWorks()
		{
			var parentStyle = GenerateParagraphStyle("Parent");
			var childStyle = GenerateEmptyParagraphStyle("Child");
			childStyle.SetBasedOnStyle(parentStyle);
			childStyle.SetExplicitParaIntProp((int)FwTextPropType.ktptBorderColor, 0, (int)ColorUtil.ConvertColorToBGR(Color.HotPink));
			//SUT - Generate using default font info
			var cssResult = CssGenerator.GenerateCssStyleFromFwStyleSheet("Child", CssGenerator.DefaultStyle, m_mediator);
			// The css should have the overridden border color, but report all other values as the parent style
			//border leading omitted from paragraph style definition which should result in 0pt left width
			VerifyParagraphBorderInCss(Color.HotPink, 0, BorderTrailing, BorderBottom, BorderTop, cssResult.ToString());
		}

		[Test]
		public void GenerateCssForStyleName_CharStyleUnsetValuesAreNotExported()
		{
			var emptyCharStyle = GenerateEmptyStyle("EmptyChar");
			var cssResult = CssGenerator.GenerateCssStyleFromFwStyleSheet("EmptyChar", CssGenerator.DefaultStyle, m_mediator);
			Assert.AreEqual(cssResult.ToString().Trim(), String.Empty);
		}

		[Test]
		public void GenerateCssForStyleName_DefaultVernMagicConfigResultsInRealLanguageCss()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			GenerateParagraphStyle("VernacularStyle");
			var testNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				ClassNameOverride = "vernholder",
				Label = "Vern Holder",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "vernacular" }),
				Style = "VernacularStyle"
			};
			var model = new DictionaryConfigurationModel
				{
					Parts = new List<ConfigurableDictionaryNode> { testNode }
				};
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//Verify that vernacular was converted into french to match the vernholder node
			Assert.That(cssResult, Contains.Substring(".vernholder[lang|=\"fr\"]"));
		}

		[Test]
		public void GenerateCssForStyleName_DefaultAnalysisMagicConfigResultsInRealLanguageCss()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			GenerateParagraphStyle("AnalysisStyle");
			var testNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				ClassNameOverride = "analyholder",
				Label = "Analy Holder",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "analysis" }),
				Style = "AnalysisStyle"
			};
			var model = new DictionaryConfigurationModel
			{
				Parts = new List<ConfigurableDictionaryNode> { testNode }
			};
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//Verify that analysis was converted into english to match the analyholder node
			Assert.That(cssResult, Contains.Substring(".analyholder[lang|=\"en\"]"));
		}

		[Test]
		public void ClassMappingOverrides_ApplyAtRoot()
		{
			var testNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "LexEntry",
				Label = "Bow, Bolo, Ect",
				IsEnabled = true,
				ClassNameOverride = "Bolo",
				Children = new List<ConfigurableDictionaryNode>()
			};
			var model = new DictionaryConfigurationModel
			{
				Parts = new List<ConfigurableDictionaryNode> { testNode }
			};
			var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
			var entry = factory.Create();
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			Assert.That(cssResult, Is.Not.StringContaining(".lexentry"));
			Assert.That(cssResult, Contains.Substring(".bolo"));
			var xhtmResult = new StringBuilder();
			using(var XHTMLWriter = XmlWriter.Create(xhtmResult))
			{
				ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, testNode, XHTMLWriter, Cache);
				XHTMLWriter.Flush();
				const string positiveTest = "//*[@class='bolo']";
				const string negativeTest = "//*[@class='lexentry']";
				AssertThatXmlIn.String(xhtmResult.ToString()).HasNoMatchForXpath(negativeTest);
				AssertThatXmlIn.String(xhtmResult.ToString()).HasSpecifiedNumberOfMatchesForXpath(positiveTest, 1);
			}
		}

		[Test]
		public void ClassMappingOverrides_ApplyToChildren()
		{
			var testChildNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "HeadWord",
				ClassNameOverride = "tailwind",
				IsEnabled = true
			};
			var testParentNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "LexEntry",
				Label = "Bow, Bolo, Ect",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { testChildNode }
			};
			testChildNode.Parent = testParentNode;
			var model = new DictionaryConfigurationModel
			{
				Parts = new List<ConfigurableDictionaryNode> { testParentNode }
			};
			var testOverrides = new Dictionary<string, Dictionary<string, string>>();
			// Make a LexEntry with a headword so something is Generated
			var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
			var entry = factory.Create();
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			entry.CitationForm.set_String(wsFr, Cache.TsStrFactory.MakeString("HeadWordTest", wsFr));
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			Assert.That(cssResult, Is.Not.StringContaining(".headword"));
			Assert.That(cssResult, Contains.Substring(".tailwind"));
			var xhtmResult = new StringBuilder();
			using(var XHTMLWriter = XmlWriter.Create(xhtmResult))
			{
				ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, testParentNode, XHTMLWriter, Cache);
				XHTMLWriter.Flush();
				const string positiveTest = "//*[@class='tailwind']";
				const string negativeTest = "//*[@class='headword']";
				AssertThatXmlIn.String(xhtmResult.ToString()).HasNoMatchForXpath(negativeTest);
				AssertThatXmlIn.String(xhtmResult.ToString()).HasSpecifiedNumberOfMatchesForXpath(positiveTest, 1);
			}
		}

		[Test]
		public void CssAndXhtmlMatchOnSenseCollectionItems()
		{
			var glossNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "Gloss",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new [] { "en" }),
				IsEnabled = true
			};
			var testSensesNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { glossNode }
			};
			var testEntryNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "LexEntry",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { testSensesNode }
			};
			var model = new DictionaryConfigurationModel
			{
				Parts = new List<ConfigurableDictionaryNode> { testEntryNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {testEntryNode});
			var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
			var entry = factory.Create();
			var sense = Cache.ServiceLocator.GetInstance<ILexSenseFactory>().Create();
			entry.SensesOS.Add(sense);
			var wsEn = Cache.WritingSystemFactory.GetWsFromStr("en");
			sense.Gloss.set_String(wsEn, Cache.TsStrFactory.MakeString("gloss", wsEn));
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			Assert.That(cssResult, Contains.Substring(".lexentry .senses .sense .gloss"));
			var xhtmResult = new StringBuilder();
			using(var XHTMLWriter = XmlWriter.Create(xhtmResult))
			{
				ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, testEntryNode, XHTMLWriter, Cache);
				XHTMLWriter.Flush();
				const string positiveTest = "/*[@class='lexentry']/span[@class='senses']/span[@class='sense']/span[@class='gloss']";
				AssertThatXmlIn.String(xhtmResult.ToString()).HasSpecifiedNumberOfMatchesForXpath(positiveTest, 1);
			}
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleSubscriptWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("subscript");
			var fontInfo = new FontInfo();
			fontInfo.m_superSub.ExplicitValue = FwSuperscriptVal.kssvSub;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "subscript"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the subscript overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvSub, FwUnderlineType.kuntNone, Color.Black, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleSuperscriptWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("superscript");
			var fontInfo = new FontInfo();
			fontInfo.m_superSub.ExplicitValue = FwSuperscriptVal.kssvSuper;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "superscript"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the superscript overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvSuper, FwUnderlineType.kuntNone, Color.Black, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleBasicUnderlineWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("underline");
			var fontInfo = new FontInfo();
			fontInfo.m_underline.ExplicitValue = FwUnderlineType.kuntSingle;
			fontInfo.m_underlineColor.ExplicitValue = Color.HotPink;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "underline"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the underline overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntSingle, Color.HotPink, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleDoubleUnderlineWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("doubleline");
			var fontInfo = new FontInfo();
			fontInfo.m_underline.ExplicitValue = FwUnderlineType.kuntDouble;
			fontInfo.m_underlineColor.ExplicitValue = Color.Khaki;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "doubleline"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the underline overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntDouble, Color.Khaki, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleDashedUnderlineWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("dashed");
			var fontInfo = new FontInfo();
			fontInfo.m_underline.ExplicitValue = FwUnderlineType.kuntDashed;
			fontInfo.m_underlineColor.ExplicitValue = Color.Black;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "dashed"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the underline overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntDashed, Color.Black, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleStrikethroughWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("strike");
			var fontInfo = new FontInfo();
			fontInfo.m_underline.ExplicitValue = FwUnderlineType.kuntStrikethrough;
			fontInfo.m_underlineColor.ExplicitValue = Color.Black;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "strike"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the underline overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntStrikethrough, Color.Black, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleDottedUnderlineWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("dotted");
			var fontInfo = new FontInfo();
			fontInfo.m_underline.ExplicitValue = FwUnderlineType.kuntDotted;
			fontInfo.m_underlineColor.ExplicitValue = Color.Black;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "dotted"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the underline overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntDotted, Color.Black, cssResult);
		}

		[Test]
		public void GenerateCssForConfiguration_CharStyleDisableSuperWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var style = GenerateStyle("notsosuper");
			var fontInfo = new FontInfo();
			fontInfo.m_superSub.ExplicitValue = FwSuperscriptVal.kssvOff;
			style.SetWsStyle(fontInfo, Cache.DefaultVernWs);
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Label = "Headword",
				DictionaryNodeOptions = ConfiguredXHTMLGeneratorTests.GetWsOptionsForLanguages(new[] { "fr" }),
				Style = "notsosuper"
			};

			var model = new DictionaryConfigurationModel();
			model.Parts = new List<ConfigurableDictionaryNode> { headwordNode };
			//SUT
			var cssResult = CssGenerator.GenerateCssFromConfiguration(model, m_mediator);
			//make sure that fontinfo with the superscript overrides made it into css
			VerifyExtraFontInfoInCss(0, FwSuperscriptVal.kssvOff, FwUnderlineType.kuntNone, Color.Black, cssResult);
		}

		[TestFixtureSetUp]
		protected void Init()
		{
			FwRegistrySettings.Init();
			m_application = new MockFwXApp(new MockFwManager { Cache = Cache }, null, null);
			m_configFilePath = Path.Combine(DirectoryFinder.FWCodeDirectory, m_application.DefaultConfigurationPathname);
			m_window = new MockFwXWindow(m_application, m_configFilePath);
			((MockFwXWindow)m_window).Init(Cache); // initializes Mediator values
			m_mediator = m_window.Mediator;
			m_window.LoadUI(m_configFilePath); // actually loads UI here; needed for non-null stylesheet

			m_styleSheet = FontHeightAdjuster.StyleSheetFromMediator(m_mediator);
			m_owningTable = new StyleInfoTable("AbbySomebody", (IWritingSystemManager)Cache.WritingSystemFactory);
		}

		[TestFixtureTearDown]
		protected void TearDown()
		{
			m_application.Dispose();
			m_mediator.Dispose();
			FwRegistrySettings.Release();
		}

		private TestStyle GenerateStyle(string name)
		{
			var fontInfo = new FontInfo();
			fontInfo.m_fontColor.ExplicitValue = FontColor;
			fontInfo.m_backColor.ExplicitValue = FontBGColor;
			fontInfo.m_fontName.ExplicitValue = FontName;
			fontInfo.m_italic.ExplicitValue = true;
			fontInfo.m_bold.ExplicitValue = true;
			fontInfo.m_fontSize.ExplicitValue = FontSize;
			var style = new TestStyle(fontInfo, Cache) { Name = name, IsParagraphStyle = false };
			m_styleSheet.Styles.Add(style);
			m_owningTable.Add(name, style);
			return style;
		}

		private TestStyle GenerateEmptyStyle(string name)
		{
			var fontInfo = new FontInfo();
			var style = new TestStyle(fontInfo, Cache) { Name = name, IsParagraphStyle = false };
			m_styleSheet.Styles.Add(style);
			m_owningTable.Add(name, style);
			return style;
		}

		private TestStyle GenerateParagraphStyle(string name)
		{
			var fontInfo = new FontInfo();
			fontInfo.m_fontColor.ExplicitValue = FontColor;
			fontInfo.m_backColor.ExplicitValue = FontBGColor;
			fontInfo.m_fontName.ExplicitValue = FontName;
			fontInfo.m_italic.ExplicitValue = true;
			fontInfo.m_bold.ExplicitValue = true;
			fontInfo.m_fontSize.ExplicitValue = FontSize;
			var style = new TestStyle(fontInfo, Cache) { Name = name, IsParagraphStyle = true };
			// Border style settings
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptBorderColor, 0, (int)ColorUtil.ConvertColorToBGR(BorderColor));
			//border leading omitted from paragraph style definition which should result in 0pt left width
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptBorderTrailing, 0, BorderTrailing);
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptBorderTop, 0, BorderTop);
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptBorderBottom, 0, BorderBottom);
			// Padding style settings
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptLeadingIndent, 0, LeadingIndent);
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptTrailingIndent, 0, TrailingIndent);
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptSpaceBefore, 0, PadTop);
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptSpaceAfter, 0, PadBottom);
			// Alignment setting
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptAlign, 0, (int)ParagraphAlignment);
			// Line space setting (set to double space)
			style.SetExplicitParaIntProp((int)FwTextPropType.ktptLineHeight, (int)FwTextPropVar.ktpvRelative, LineHeight);
			m_styleSheet.Styles.Add(style);
			m_owningTable.Add(name, style);
			return style;
		}

		private TestStyle GenerateEmptyParagraphStyle(string name)
		{
			var fontInfo = new FontInfo();
			var style = new TestStyle(fontInfo, Cache) { Name = name, IsParagraphStyle = true };
			m_styleSheet.Styles.Add(style);
			m_owningTable.Add(name, style);
			return style;
		}

		private void VerifyFontInfoInCss(Color color, Color bgcolor, string fontName, bool bold, bool italic, int size, string css)
		{
			Assert.That(css, Contains.Substring("color:" + HtmlColor.FromRgb(color.R, color.G, color.B)), "font color missing");
			Assert.That(css, Contains.Substring("background-color:" + HtmlColor.FromRgb(bgcolor.R, bgcolor.G, bgcolor.B)), "background-color missing");
			Assert.That(css, Contains.Substring("font-family:'" + fontName + "'"), "font name missing");
			Assert.That(css, Contains.Substring("font-weight:" + (bold ? "bold" : "normal") + ";"), "font bold missing");
			Assert.That(css, Contains.Substring("font-style:" + (italic ? "italic" : "normal") + ";"), "font italic missing");
			// Font sizes are stored as integers in the styles by FLEx and turned into pt values on export
			Assert.That(css, Contains.Substring("font-size:" + (float)size / 1000 + "pt;"), "font size missing");
		}

		private void VerifyExtraFontInfoInCss(int offset, FwSuperscriptVal superscript,
														  FwUnderlineType underline, Color underlineColor, string css)
		{
			switch(underline)
			{
				case (FwUnderlineType.kuntSingle):
				{
					Assert.That(css, Contains.Substring("text-decoration:underline;"), "underline not applied");
					Assert.That(css, Contains.Substring("text-decoration-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"underline color missing");
					break;
				}
				case (FwUnderlineType.kuntDashed):
				{
					Assert.That(css, Contains.Substring("border-bottom:1px dashed"), "dashed underline not applied");
					Assert.That(css, Contains.Substring("border-bottom-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"underline color missing");
					break;
				}
				case (FwUnderlineType.kuntDotted):
				{
					Assert.That(css, Contains.Substring("border-bottom:1px dotted"), "dotted underline not applied");
					Assert.That(css, Contains.Substring("border-bottom-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"underline color missing");
					break;
				}
				case (FwUnderlineType.kuntNone):
				{
					Assert.That(css, Is.Not.StringContaining("border-bottom:"), "underline should not have been applied");
					Assert.That(css, Is.Not.StringContaining("text-decoration:underline"), "underline should not have been applied");
					break;
				}
				case (FwUnderlineType.kuntStrikethrough):
				{
					Assert.That(css, Contains.Substring("text-decoration:line-through;"), "strike through not applied");
					Assert.That(css, Contains.Substring("text-decoration-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"strike through color missing");
					break;
				}
				case (FwUnderlineType.kuntDouble):
				{
					Assert.That(css, Contains.Substring("border-bottom:1px solid"), "double underline not applied");
					Assert.That(css, Contains.Substring("text-decoration:underline;"), "double underline not applied");
					Assert.That(css, Contains.Substring("text-decoration-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"underline color missing");
					Assert.That(css, Contains.Substring("border-bottom-color:" + HtmlColor.FromRgb(underlineColor.R, underlineColor.G, underlineColor.B)),
									"underline color missing");
					break;
				}
				default:
					Assert.Fail("Um, I don't know how to do that yet");
					break;
			}
			if(offset != 0)
			{
				Assert.That(css, Contains.Substring("position:relative;"), "offset was not applied");
				Assert.That(css, Contains.Substring("bottom:" + offset + ";"), "offset was not applied");
			}
			switch(superscript)
			{
				case(FwSuperscriptVal.kssvSub):
				{
					Assert.That(css, Contains.Substring("vertical-align:sub;"), "subscript was not applied");
					break;
				}
				case (FwSuperscriptVal.kssvSuper):
				{
					Assert.That(css, Contains.Substring("vertical-align:super;"), "superscript was not applied");
					break;
				}
				case (FwSuperscriptVal.kssvOff):
				{
					//superscript and subscript are disabled either by having the value of vertical-align:initial, or by having no vertical-align at all.
					if(css.Contains("vertical-align"))
					{
						Assert.That(css, Contains.Substring("vertical-align:initial;"), "superscript was not disabled");
					}
					break;
				}
			}
		}

		private void VerifyParagraphBorderInCss(Color color, int leading, int trailing, int bottom, int top, string css)
		{
			Assert.That(css, Contains.Substring("border-color:" + HtmlColor.FromRgb(color.R, color.G, color.B)));
			Assert.That(css, Contains.Substring("border-top-width:" + top + "pt"));
			Assert.That(css, Contains.Substring("border-bottom-width:" + bottom + "pt"));
			Assert.That(css, Contains.Substring("border-left-width:" + leading + "pt"));
			Assert.That(css, Contains.Substring("border-right-width:" + trailing + "pt"));
		}
	}

	class TestStyle : BaseStyleInfo
	{
		public TestStyle(FontInfo defaultFontInfo, FdoCache cache) : base(cache)
		{
			m_defaultFontInfo = defaultFontInfo;
		}

		public void SetWsStyle(FontInfo fontInfo, int wsId)
		{
			m_fontInfoOverrides[wsId] = fontInfo;
		}

		/// <summary>
		/// Sets the based on style and resets all properties to inherited.
		/// </summary>
		/// <param name="parent"></param>
		public void SetBasedOnStyle(BaseStyleInfo parent)
		{
			m_basedOnStyle = parent;
			SetAllPropertiesToInherited();
		}
	}
}