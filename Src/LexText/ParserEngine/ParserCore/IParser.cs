﻿namespace SIL.FieldWorks.WordWorks.Parser
{
	public interface IParser
	{
		void Update();

		void Reset();

		ParseResult ParseWord(string word);

		string ParseWordXml(string word);

		string TraceWordXml(string word, string selectTraceMorphs);
	}
}
