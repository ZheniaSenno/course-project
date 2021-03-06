#pragma once
#include "Functions.h"

namespace CourseProject
{

void Functions::WriteToFile()
{
	JsonUtils::Serialize(questionsList, "..\\CourseProject\\learning\\" + _questionsfilename);
	JsonUtils::Serialize(snippetsList, "..\\CourseProject\\learning\\" + _snippetsfilename);
	JsonUtils::Serialize(users, "..\\CourseProject\\learning\\" + _usersfilename);
	JsonUtils::Serialize(recordsList, "..\\CourseProject\\learning\\" + _recordsfilename);

}
void Functions::ReadFromFile()
{
	questionsList = JsonUtils::Deserialize<DataModels::Questions^>("..\\CourseProject\\learning\\" + _questionsfilename);
	userList = JsonUtils::Deserialize<DataModels::Questions^>("..\\CourseProject\\learning\\"+_questionsfilename);
	snippetsList = JsonUtils::Deserialize<DataModels::Snippets^>("..\\CourseProject\\learning\\" + _snippetsfilename);
	users = JsonUtils::Deserialize<DataModels::Users^>("..\\CourseProject\\learning\\" + _usersfilename);
	recordsList = JsonUtils::Deserialize<DataModels::Records^>("..\\CourseProject\\learning\\" + _recordsfilename);

}


DataModels::Question^ Functions::GetRandomQuestion()
{
	int index = rnd->Next(questionsList->Items->Count);
	return questionsList->Items[index];
}


void Functions::Shuffle(DataModels::Questions ^list)
{
		int n = list->Items->Count;
		while (n > 1)
		{
			n--;
			int k = rnd->Next(n + 1);
			DataModels::Question ^value = list->Items[k];
			list->Items[k] = list->Items[n];
			list->Items[n] = value;
		}
}


DataModels::Question^ Functions::GetNext(DataModels::Questions ^list, DataModels::Question ^item)
{
	auto nextIndex = list->Items->IndexOf(item) + 1;

	if (nextIndex == list->Items->Count)
	{
		//GetResults();
		return list->Items[0];
	}

	return list->Items[nextIndex];
}

generic<typename T>
	bool Functions::isArraysEqual(array<T> ^a1, array<T> ^a2)
	{
		if (ReferenceEquals(a1, a2))
		{
			return true;
		}

		if (a1 == nullptr || a2 == nullptr)
		{
			return false;
		}

		if (a1->Length != a2->Length)
		{
			return false;
		}

		EqualityComparer<T> ^comparer = EqualityComparer<T>::Default;
		for (int i = 0; i < a1->Length; i++)
		{
			if (!comparer->Equals(a1[i], a2[i]))
			{
				return false;
			}
		}
		return true;
	}


	String^ Functions::GetHash(MD5 ^md5Hash, String ^input)
	{
		array<Byte> ^data = md5Hash->ComputeHash(Encoding::UTF8->GetBytes(input));
		StringBuilder ^sb = gcnew StringBuilder();

		for (int i = 0; i < data->Length; i++)
		{
			sb->Append(data[i].ToString("x2"));
		}

		return sb->ToString();
	}

	bool Functions::VerifyHash(MD5 ^md5Hash, String ^input, String ^hash)
	{
		String ^hashOfInput = GetHash(md5Hash, input);
		StringComparer ^comparer = StringComparer::OrdinalIgnoreCase;

		if (comparer->Compare(hashOfInput, hash) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


}
