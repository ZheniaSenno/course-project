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
	using namespace System::Security::Cryptography;


	public ref class Functions abstract sealed
	{
		private:
		static Random ^rnd = gcnew Random();
		// to settings file
		public:
		static int counter;
		static String^ _questionsfilename = "questions.json";
		static String^ _snippetsfilename = "snippets.json";
		static String^ _usersfilename = "users.json";
		static String^ _recordsfilename = "records.json";

		static DataModels::Questions^ questionsList = gcnew DataModels::Questions();
		static DataModels::Questions^ userList = gcnew DataModels::Questions();
		static DataModels::Snippets^ snippetsList = gcnew DataModels::Snippets();
		static DataModels::Question^ current = gcnew DataModels::Question();
		static DataModels::Users^ users = gcnew DataModels::Users();
		static DataModels::Records^ recordsList = gcnew DataModels::Records();

		static void WriteToFile();
		static void ReadFromFile();

		static DataModels::Question^ GetRandomQuestion();
		static DataModels::Question^ GetNext(DataModels::Questions ^list, DataModels::Question ^item);
		static void Shuffle(DataModels::Questions ^list);

		generic<typename T>
			static bool isArraysEqual(array<T> ^a1, array<T> ^a2);

		static String ^GetHash(MD5 ^md5Hash, String ^input);

		static bool VerifyHash(MD5 ^md5Hash, String ^input, String ^hash);

};
}
