#pragma once
//implemented+
using namespace System;
using namespace Collections::Generic;
namespace CourseProject
{
	public ref class DataModels abstract sealed
	{
		public:
			[Serializable]
		ref class Question
		{
			public:
			//incremental
			[JsonPropertyAttribute("id")]
			property UInt32 ID;
			[JsonPropertyAttribute("text")]
			property String^ Text;
			[JsonPropertyAttribute("answers")]
			property array<String^> ^TextVariants;
			[JsonPropertyAttribute("checks")]
			property array<bool> ^RightVariants;
			[JsonPropertyAttribute("isright")]
			property bool ^isRight;
			[JsonPropertyAttribute("complexity_level")]
			property UInt32 Level;
			[JsonPropertyAttribute("snippet_id")]
			property UInt32 SnippetID;
			[JsonPropertyAttribute("created")]
			property String^ CreatedTime;
			

		};


ref class Questions
{
	private:
	List<Question^> ^_items = gcnew List<Question^>();
	public:
	[JsonPropertyAttribute("items")]
	property List<Question^> ^Items
	{
		List<Question^> ^get()
		{
			return _items;
		}
		void set(List<Question^> ^value)
		{
			_items = value;
		}
	}
};


	public:
		[Serializable]
		ref class Snippet
		{
		public:
			[JsonPropertyAttribute("id")]
			property UInt32 ID;
			[JsonPropertyAttribute("text")]
			property String^ Code;
		};

		ref class Snippets
		{
		private:
			List<Snippet^> ^_items = gcnew List<Snippet^>();
		public:
			[JsonPropertyAttribute("items")]
			property List<Snippet^> ^Items
			{
				List<Snippet^> ^get()
				{
					return _items;
				}
				void set(List<Snippet^> ^value)
				{
					_items = value;
				}
			}
		};

	public:
		[Serializable]
		ref class User
		{
		public:
			[JsonPropertyAttribute("login")]
			property String^ Login;
			[JsonPropertyAttribute("hash")]
			property String^ Hash;
		};

		ref class Users
		{
		private:
			List<User^> ^_items = gcnew List<User^>();
		public:
			[JsonPropertyAttribute("users")]
			property List<User^> ^Items
			{
				List<User^> ^get()
				{
					return _items;
				}
				void set(List<User^> ^value)
				{
					_items = value;
				}
			}
		};

		public:
			[Serializable]
			ref class Record
			{
			public:
				[JsonPropertyAttribute("user")]
				property String^ User;
				[JsonPropertyAttribute("result")]
				property String^ Result;
			};

			ref class Records
			{
			private:
				List<Record^> ^_items = gcnew List<Record^>();
			public:
				[JsonPropertyAttribute("items")]
				property List<Record^> ^Items
				{
					List<Record^> ^get()
					{
						return _items;
					}
					void set(List<Record^> ^value)
					{
						_items = value;
					}
				}
			};


};
}
