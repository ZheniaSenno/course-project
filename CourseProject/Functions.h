#pragma once
#include "JsonUtils.h"
#include "DataModels.h"

namespace CourseProject
{
	using namespace System;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace System::Diagnostics;


	public ref class Functions abstract sealed
	{
		private:
		static Random ^rnd = gcnew Random();
		// to settings file
		public:
		static int counter;
		static String^ _questionsfilename = "questions.json";
		static String^ _snippetsfilename = "snippets.json";

		static DataModels::Questions^ questionsList = gcnew DataModels::Questions();
		static DataModels::Questions^ userList = gcnew DataModels::Questions();
		static DataModels::Snippets^ snippetsList = gcnew DataModels::Snippets();
		static DataModels::Question^ current = gcnew DataModels::Question();

		static void WriteToFile();
		static void ReadFromFile();

		static DataModels::Question^ GetRandomQuestion();
		static DataModels::Question^ GetNext(DataModels::Questions ^list, DataModels::Question ^item);
		static void Shuffle(DataModels::Questions ^list);

		generic<typename T>
			static bool isArraysEqual(array<T> ^a1, array<T> ^a2);

};
}
