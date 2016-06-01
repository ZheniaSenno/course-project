#pragma once
//implemented+

using namespace System;
using namespace System::Linq;
using namespace System::Text;
using namespace System::Text::RegularExpressions;
using namespace System::Windows::Controls;
using namespace System::Windows::Media;
using namespace Collections::Generic;


namespace CourseProject
{
	public ref class SyntaxHighlighter
	{
		private:
		static initonly Regex ^KeywordRegex = gcnew Regex(R"([a-z]+)");
		initonly TextBlock ^_textBlock;
		String ^_text;
		int _index = 0;
		StringBuilder ^_builder;

		public:
		SyntaxHighlighter(TextBlock ^textBlock);

		private:
		property Char Current
		{
			Char get();
}

public:
static property HashSet<String^> ^Keywords
{
	HashSet<String^> ^get();
}

void DoHighlight(String ^text);

private:
void CheckKeywords();

void HighlightStringConstant();

void AddRun(System::Windows::Media::Color color);
};
}
