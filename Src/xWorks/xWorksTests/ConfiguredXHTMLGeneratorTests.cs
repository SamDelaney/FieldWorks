﻿// Copyright (c) 2014 SIL International
// This software is licensed under the LGPL, version 2.1 or later
// (http://www.gnu.org/licenses/lgpl-2.1.html)

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;
using NUnit.Framework;
using Palaso.TestUtilities;
using SIL.CoreImpl;
using SIL.FieldWorks.Common.FwUtils;
using SIL.FieldWorks.FDO;
using SIL.FieldWorks.FDO.FDOTests;

namespace SIL.FieldWorks.XWorks
{
	[TestFixture]
	class ConfiguredXHTMLGeneratorTests : MemoryOnlyBackendProviderRestoredForEachTestTestBase
	{
		StringBuilder XHTMLStringBuilder { get; set; }

		[SetUp]
		public void SetupExportVariables()
		{
			XHTMLStringBuilder = new StringBuilder();
		}

		[TearDown]
		public void ResetAssemblyFile()
		{
			// Specific tests override this, reset to Fdo.dll needed by most tests in the file
			ConfiguredXHTMLGenerator.AssemblyFile = "FDO";
		}

		[Test]
		public void GenerateXHTMLForEntry_NullArgsThrowArgumentNull()
		{
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				var mainEntryNode = new ConfigurableDictionaryNode();
				var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
				var entry = factory.Create();
				//SUT
				Assert.Throws(typeof(ArgumentNullException), () => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(null, mainEntryNode, XHTMLWriter, Cache));
				Assert.Throws(typeof(ArgumentNullException), () => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, null, XHTMLWriter, Cache));
				Assert.Throws(typeof(ArgumentNullException), () => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, null, Cache));
				Assert.Throws(typeof(ArgumentNullException), () => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, null));
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_BadConfigurationThrows()
		{
			var mainEntryNode = new ConfigurableDictionaryNode();
			var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
			var entry = factory.Create();
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//Test a blank main node description
				//SUT
				Assert.That(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache),
					Throws.InstanceOf<ArgumentException>().With.Message.Contains("Invalid configuration"));
				mainEntryNode.FieldDescription = "LexSense";
				//Test a configuration with a valid but incorrect type
				Assert.That(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache),
					Throws.InstanceOf<ArgumentException>().With.Message.Contains("doesn't configure this type"));
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_HeadwordConfigurationGeneratesCorrectResult()
		{
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "HeadWord",
				Label = "Headword",
				DictionaryNodeOptions = GetWsOptionsForLanguages(new[] { "fr" }),
				IsEnabled = true
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { headwordNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> { mainEntryNode });
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			var entry = CreateInterestingLexEntry();
			// The headword field is special it uses either Citation or LexemeForm if Citation isn't filled in
			entry.CitationForm.set_String(wsFr, Cache.TsStrFactory.MakeString("HeadWordTest", wsFr));
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var frenchHeadwordOfHeadwordTest = "/div[@class='lexentry']/span[@class='headword' and @lang='fr' and text()='HeadWordTest']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(frenchHeadwordOfHeadwordTest, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_LexemeFormConfigurationGeneratesCorrectResult()
		{
			var headwordNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "LexemeFormOA",
				Label = "Lexeme Form",
				DictionaryNodeOptions = GetWsOptionsForLanguages(new[] { "vernacular" }),
				IsEnabled = true
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { headwordNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			var entry = CreateInterestingLexEntry();
			//Fill in the LexemeForm
			var morph = Cache.ServiceLocator.GetInstance<IMoStemAllomorphFactory>().Create();
			entry.LexemeFormOA = morph;
			morph.Form.set_String(wsFr, Cache.TsStrFactory.MakeString("LexemeFormTest", wsFr));
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var frenchLexForm = "/div[@class='lexentry']/span[@class='lexemeformoa' and @lang='fr' and text()='LexemeFormTest']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(frenchLexForm, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_PronunciationLocationGeneratesCorrectResult()
		{
			var nameNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "Name",
				Label = "Name",
				DictionaryNodeOptions = GetWsOptionsForLanguages(new[] { "fr" }),
				IsEnabled = true
			};
			var locationNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "LocationRA",
				Label = "Spoken here",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { nameNode }
			};
			var pronunciationsNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "PronunciationsOS",
				ClassNameOverride = "Pronunciations",
				Label = "Speak this",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { locationNode }
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { pronunciationsNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			var entry = CreateInterestingLexEntry();
			//Create and fill in the Location
			var pronunciation = Cache.ServiceLocator.GetInstance<ILexPronunciationFactory>().Create();
			entry.PronunciationsOS.Add(pronunciation);
			var possListFactory = Cache.ServiceLocator.GetInstance<ICmPossibilityListFactory>();
			var possList1 = possListFactory.Create();
			Cache.LangProject.LocationsOA = possList1;
			var location = Cache.ServiceLocator.GetInstance<ICmLocationFactory>().Create();
			possList1.PossibilitiesOS.Add(location);
			location.Name.set_String(wsFr, Cache.TsStrFactory.MakeString("Here!", wsFr));
			pronunciation.LocationRA = location;
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var hereLocation = "/div[@class='lexentry']/span[@class='pronunciations']/span[@class='pronunciation']/span[@class='location']/span[@class='name' and @lang='fr' and text()='Here!']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(hereLocation, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_NoEnabledConfigurationsThrowsArgument()
		{
			var homographNum = new ConfigurableDictionaryNode
			{
				FieldDescription = "HomographNumber",
				Label = "Homograph Number",
				IsEnabled = true
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { homographNum },
				FieldDescription = "LexEntry"
			};
			var entryOne = CreateInterestingLexEntry();

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.That(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryOne, mainEntryNode, XHTMLWriter,Cache),
								Throws.InstanceOf<ArgumentException>().With.Message.Contains("must use an enabled configuration node"));
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_HomographNumbersGeneratesCorrectResult()
		{
			var homographNum = new ConfigurableDictionaryNode
			{
				FieldDescription = "HomographNumber",
				Label = "Homograph Number",
				IsEnabled = true
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { homographNum },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> { mainEntryNode });
			var entryOne = CreateInterestingLexEntry();
			var entryTwo = CreateInterestingLexEntry();

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				XHTMLWriter.WriteStartElement("TESTWRAPPER"); //keep the xml valid (single root element)
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryOne, mainEntryNode, XHTMLWriter,
																								Cache));
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryTwo, mainEntryNode, XHTMLWriter,
																								Cache));
				XHTMLWriter.WriteEndElement();
				XHTMLWriter.Flush();
				var entryWithHomograph = "/TESTWRAPPER/div[@class='lexentry']/span[@class='homographnumber' and text()='1']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryWithHomograph, 1);
				entryWithHomograph = entryWithHomograph.Replace('1', '2');
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryWithHomograph, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_OneSenseWithGlossGeneratesCorrectResult()
		{
			var wsOpts = new DictionaryNodeWritingSystemOptions
			{
				Options = new List<DictionaryNodeListOptions.DictionaryNodeOption>
				{
					new DictionaryNodeListOptions.DictionaryNodeOption { Id = "en", IsEnabled = true }
				}
			};

			var sensesNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "Senses",
				Label = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode>
				{
					new ConfigurableDictionaryNode { FieldDescription = "Gloss", DictionaryNodeOptions = wsOpts, IsEnabled = true }
				}
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { sensesNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var testEntry = CreateInterestingLexEntry();

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(testEntry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				const string oneSenseWithGlossOfGloss = "/div[@class='lexentry']/span[@class='senses']/span[@class='sense']/span[@lang='en' and text()='gloss']";
				//This assert is dependent on the specific entry data created in CreateInterestingLexEntry
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(oneSenseWithGlossOfGloss, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_OneEntryWithSenseAndOneWithoutWorks()
		{
			var wsOpts = new DictionaryNodeWritingSystemOptions
			{
				Options = new List<DictionaryNodeListOptions.DictionaryNodeOption>
				{ new DictionaryNodeListOptions.DictionaryNodeOption { Id = "en", IsEnabled = true} }
			};

			var sensesNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "Senses",
				Label = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { new ConfigurableDictionaryNode { FieldDescription = "Gloss",
																															  DictionaryNodeOptions = wsOpts} }
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { sensesNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var entryOne = CreateInterestingLexEntry();
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			entryOne.CitationForm.set_String(wsFr, Cache.TsStrFactory.MakeString("FirstHeadword", wsFr));
			var entryTwo = CreateInterestingLexEntry();
			entryTwo.CitationForm.set_String(wsFr, Cache.TsStrFactory.MakeString("SecondHeadword", wsFr));
			entryTwo.SensesOS.Clear();
			var entryOneId = entryOne.Hvo;
			var entryTwoId = entryTwo.Hvo;

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				XHTMLWriter.WriteStartElement("TESTWRAPPER"); //keep the xml valid (single root element)
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryOne, mainEntryNode, XHTMLWriter,
																							  Cache));
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryTwo, mainEntryNode, XHTMLWriter,
																							  Cache));
				XHTMLWriter.WriteEndElement();
				XHTMLWriter.Flush();
				var entryOneHasSensesSpan = "/TESTWRAPPER/div[@class='lexentry' and @id='hvo" + entryOneId + "']/span[@class='senses']";
				var entryTwoExists = "/TESTWRAPPER/div[@class='lexentry' and @id='hvo" + entryTwoId + "']";
				var entryTwoHasNoSensesSpan = "/TESTWRAPPER/div[@class='lexentry' and @id='hvo" + entryTwoId + "']/span[@class='senses']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryOneHasSensesSpan, 1);
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryTwoExists, 1);
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryTwoHasNoSensesSpan, 0);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_DefaultRootGeneratesResult()
		{
			string defaultRoot =
				Path.Combine(Path.Combine(DirectoryFinder.DefaultConfigurations, "Dictionary"), "Root.xml");
			var entry = CreateInterestingLexEntry();
			var dictionaryModel = new DictionaryConfigurationModel(defaultRoot, Cache);
			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, dictionaryModel.Parts[0], XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var entryExists = "/div[@class='entry' and @id='hvo" + entry.Hvo + "']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(entryExists, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_DoesNotDescendThroughDisabledNode()
		{
			var wsOpts = new DictionaryNodeWritingSystemOptions
			{
				Options = new List<DictionaryNodeListOptions.DictionaryNodeOption>
				{
					new DictionaryNodeListOptions.DictionaryNodeOption { Id = "en", IsEnabled = true }
				}
			};
			var senses = new ConfigurableDictionaryNode
			{
				FieldDescription = "Senses",
				Label = "Senses",
				IsEnabled = false,
				Children = new List<ConfigurableDictionaryNode>
				{
					new ConfigurableDictionaryNode { FieldDescription = "Gloss", DictionaryNodeOptions = wsOpts, IsEnabled = true }
				}
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { senses },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			var entryOne = CreateInterestingLexEntry();

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryOne, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				const string sensesThatShouldNotBe = "/div[@class='entry']/span[@class='senses']";
				const string headwordThatShouldNotBe = "//span[@class='gloss']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(sensesThatShouldNotBe, 0);
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(headwordThatShouldNotBe, 0);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_MakesSpanForRA()
		{
			var gramInfoNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "MorphoSyntaxAnalysisRA",
				IsEnabled = true
			};
			var sensesNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { gramInfoNode }
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { sensesNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var entry = CreateInterestingLexEntry();

			var sense = entry.SensesOS.First();

			var msa = Cache.ServiceLocator.GetInstance<IMoInflAffMsaFactory>().Create();
			entry.MorphoSyntaxAnalysesOC.Add(msa);
			sense.MorphoSyntaxAnalysisRA = msa;

			using (var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				// SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var gramInfoPath = "/div[@class='lexentry']/span[@class='senses']/span[@class='sense']/span[@class='morphosyntaxanalysis']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(gramInfoPath, 1);
			}
		}

		/// <summary>
		/// If the dictionary configuration specifies to export grammatical info, but there is no such grammatical info object to export, don't write a span.
		/// </summary>
		[Test]
		public void GenerateXHTMLForEntry_DoesNotMakeSpanForRAIfNoData()
		{
			var gramInfoNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "MorphoSyntaxAnalysisRA",
				IsEnabled = true
			};
			var sensesNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { gramInfoNode }
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { sensesNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var entry = CreateInterestingLexEntry();

			using (var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				// SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				var gramInfoPath = "/div[@class='entry']/span[@class='senses']/span[@class='sense']/span[@class='morphosyntaxanalysis']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(gramInfoPath, 0);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_SupportsGramAbbrChildOfMSARA()
		{
			var gramAbbrNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "InterlinearAbbrTSS",
				IsEnabled = true,
				DictionaryNodeOptions = GetWsOptionsForLanguages(new[] { "fr" })
			};
			var gramNameNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "InterlinearNameTSS",
				IsEnabled = true,
				DictionaryNodeOptions = GetWsOptionsForLanguages(new[] { "fr" })
			};
			var gramInfoNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "MorphoSyntaxAnalysisRA",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode>{gramAbbrNode,gramNameNode}
			};
			var sensesNode = new ConfigurableDictionaryNode()
			{
				FieldDescription = "Senses",
				IsEnabled = true,
				Children=new List<ConfigurableDictionaryNode>{gramInfoNode}
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { sensesNode },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			var entry = CreateInterestingLexEntry();

			ILangProject lp = Cache.LangProject;

			IFdoOwningSequence<ICmPossibility> posSeq = lp.PartsOfSpeechOA.PossibilitiesOS;
			IPartOfSpeech pos = Cache.ServiceLocator.GetInstance<IPartOfSpeechFactory>().Create();
			posSeq.Add(pos);

			var sense = entry.SensesOS.First();

			var msa = Cache.ServiceLocator.GetInstance<IMoInflAffMsaFactory>().Create();
			entry.MorphoSyntaxAnalysesOC.Add(msa);
			sense.MorphoSyntaxAnalysisRA = msa;

			msa.PartOfSpeechRA = pos;
			msa.PartOfSpeechRA.Abbreviation.set_String(wsFr,"Blah");

			using (var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				// SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entry, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();

				var gramAbbr = "/div[@class='lexentry']/span[@class='senses']/span[@class='sense']/span[@class='morphosyntaxanalysis']/span[@class='interlinearabbrtss' and @lang='fr' and text()='Blah:Any']";
				var gramName = "/div[@class='lexentry']/span[@class='senses']/span[@class='sense']/span[@class='morphosyntaxanalysis']/span[@class='interlinearnametss' and @lang='fr' and text()='Blah:Any']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(gramAbbr, 1);
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(gramName, 1);
			}
		}

		[Test]
		public void GenerateXHTMLForEntry_DefinitionOrGlossWorks()
		{
			var wsOpts = new DictionaryNodeWritingSystemOptions
			{
				Options = new List<DictionaryNodeListOptions.DictionaryNodeOption>
				{
					new DictionaryNodeListOptions.DictionaryNodeOption { Id = "en", IsEnabled = true }
				}
			};
			var senses = new ConfigurableDictionaryNode
			{
				FieldDescription = "Senses",
				Label = "Senses",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode>
				{
					new ConfigurableDictionaryNode { FieldDescription = "DefinitionOrGloss", DictionaryNodeOptions = wsOpts, IsEnabled = true }
				}
			};
			var mainEntryNode = new ConfigurableDictionaryNode
			{
				Children = new List<ConfigurableDictionaryNode> { senses },
				FieldDescription = "LexEntry",
				IsEnabled = true
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {mainEntryNode});
			var entryOne = CreateInterestingLexEntry();

			using(var XHTMLWriter = XmlWriter.Create(XHTMLStringBuilder))
			{
				//SUT
				Assert.DoesNotThrow(() => ConfiguredXHTMLGenerator.GenerateXHTMLForEntry(entryOne, mainEntryNode, XHTMLWriter, Cache));
				XHTMLWriter.Flush();
				const string senseWithdefinitionOrGloss = "//span[@class='sense']/span[@class='definitionorgloss' and text()='gloss']";
				AssertThatXmlIn.String(XHTMLStringBuilder.ToString()).HasSpecifiedNumberOfMatchesForXpath(senseWithdefinitionOrGloss, 1);
			}
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_NullConfigurationNodeThrowsNullArgument()
		{
			// SUT
			Assert.Throws<ArgumentNullException>(() => ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(null));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_RootMemberWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var stringNode = new ConfigurableDictionaryNode { FieldDescription = "RootMember" };
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				IsEnabled = true,
				Children = new List<ConfigurableDictionaryNode> { stringNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(stringNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.PrimitiveType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_InterfacePropertyWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var interfaceNode = new ConfigurableDictionaryNode { FieldDescription = "TestString" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "RootMember",
				Children = new List<ConfigurableDictionaryNode> { interfaceNode }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(interfaceNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.PrimitiveType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_FirstParentInterfacePropertyIsUsable()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var interfaceNode = new ConfigurableDictionaryNode { FieldDescription = "TestMoForm" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "RootMember",
				Children = new List<ConfigurableDictionaryNode> { interfaceNode }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(interfaceNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.MoFormType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_SecondParentInterfacePropertyIsUsable()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var interfaceNode = new ConfigurableDictionaryNode { FieldDescription = "TestIcmObject" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "RootMember",
				Children = new List<ConfigurableDictionaryNode> { interfaceNode }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(interfaceNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.CmObjectType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_GrandparentInterfacePropertyIsUsable()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var interfaceNode = new ConfigurableDictionaryNode { FieldDescription = "TestCollection" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "RootMember",
				Children = new List<ConfigurableDictionaryNode> { interfaceNode }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(interfaceNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.CollectionType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_NonInterfaceMemberIsUsable()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var stringNodeInClass = new ConfigurableDictionaryNode { FieldDescription = "TestNonInterfaceString" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "ConcreteMember",
				Children = new List<ConfigurableDictionaryNode> { stringNodeInClass }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(stringNodeInClass));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.PrimitiveType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_InvalidChildDoesNotThrow()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var interfaceNode = new ConfigurableDictionaryNode { FieldDescription = "TestCollection" };
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "ConcreteMember",
				SubField = "TestNonInterfaceString",
				Children = new List<ConfigurableDictionaryNode> { interfaceNode }
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.PrimitiveType;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(interfaceNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.InvalidProperty));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_SubFieldWorks()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "ConcreteMember",
				SubField = "TestNonInterfaceString"
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> {rootNode});
			var result = ConfiguredXHTMLGenerator.PropertyType.InvalidProperty;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(memberNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.PrimitiveType));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_InvalidSubFieldReturnsInvalidProperty()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var memberNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "ConcreteMember",
				SubField = "NonExistantSubField"
			};
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.TestRootClass",
				Children = new List<ConfigurableDictionaryNode> { memberNode }
			};
			DictionaryConfigurationModel.SpecifyParents(new List<ConfigurableDictionaryNode> { rootNode });
			var result = ConfiguredXHTMLGenerator.PropertyType.PrimitiveType;
			// SUT
			Assert.DoesNotThrow(() => result = ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(memberNode));
			Assert.That(result, Is.EqualTo(ConfiguredXHTMLGenerator.PropertyType.InvalidProperty));
		}

		[Test]
		public void GetPropertyTypeForConfigurationNode_InvalidRootThrowsWithMessage()
		{
			ConfiguredXHTMLGenerator.AssemblyFile = "xWorksTests";
			var rootNode = new ConfigurableDictionaryNode
			{
				FieldDescription = "SIL.FieldWorks.XWorks.NonExistantClass",
			};
			// SUT
			Assert.Throws<ArgumentException>(() => ConfiguredXHTMLGenerator.GetPropertyTypeForConfigurationNode(rootNode)).Message.Contains(rootNode.FieldDescription);
		}

		private ILexEntry CreateInterestingLexEntry()
		{
			var factory = Cache.ServiceLocator.GetInstance<ILexEntryFactory>();
			var senseFactory = Cache.ServiceLocator.GetInstance<ILexSenseFactory>();
			var entry = factory.Create();
			Cache.LangProject.AddToCurrentAnalysisWritingSystems(
				Cache.WritingSystemFactory.get_Engine("en") as IWritingSystem);
			Cache.LangProject.AddToCurrentVernacularWritingSystems(
				Cache.WritingSystemFactory.get_Engine("fr") as IWritingSystem);
			var wsEn = Cache.WritingSystemFactory.GetWsFromStr("en");
			var wsFr = Cache.WritingSystemFactory.GetWsFromStr("fr");
			entry.CitationForm.set_String(wsFr, Cache.TsStrFactory.MakeString("Citation", wsFr));
			entry.Comment.set_String(wsEn, Cache.TsStrFactory.MakeString("Comment", wsEn));
			var sense = senseFactory.Create();
			entry.SensesOS.Add(sense);
			sense.Gloss.set_String(wsEn, Cache.TsStrFactory.MakeString("gloss", wsEn));
			return entry;
		}

		public static DictionaryNodeOptions GetWsOptionsForLanguages(string[] languages)
		{
			var wsOptions = new DictionaryNodeWritingSystemOptions();
			wsOptions.Options = DictionaryDetailsControllerTests.ListOfEnabledDNOsFromStrings(languages);
			return wsOptions;
		}
	}

	#region Test classes and interfaces for testing the reflection code in GetPropertyTypeForConfigurationNode
	class TestRootClass
	{
		public ITestInterface RootMember { get; set; }
		public TestNonInterface ConcreteMember { get; set; }
	}

	interface ITestInterface : ITestBaseOne, ITestBaseTwo
	{
		String TestString { get; }
	}

	interface ITestBaseOne
	{
		IMoForm TestMoForm { get; }
	}

	interface ITestBaseTwo : ITestGrandParent
	{
		ICmObject TestIcmObject { get; }
	}

	class TestNonInterface
	{
		String TestNonInterfaceString { get; set; }
	}

	interface ITestGrandParent
	{
		Stack<TestRootClass> TestCollection { get; }
	}
	#endregion
}
