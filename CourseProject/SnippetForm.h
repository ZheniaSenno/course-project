#pragma once
#include "Functions.h"
#include "SyntaxHighlighter.h"


namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//for WPF integration
	using namespace System::Windows::Controls;
	using namespace System::Windows::Forms::Integration;

	//Syncfusion UI
	using namespace Syncfusion::Windows::Forms;
	using namespace Syncfusion::Pdf::Parsing;

	/// <summary>
	/// —водка дл€ SnippetForm
	/// </summary>
	public ref class SnippetForm : public Syncfusion::Windows::Forms::MetroForm
	{
	public:
		SnippetForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SnippetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(42, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(379, 308);
			this->panel1->TabIndex = 0;
			// 
			// SnippetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 377);
			this->Controls->Add(this->panel1);
			this->Name = L"SnippetForm";
			this->ShowMaximizeBox = false;
			this->Text = L"SnippetForm";
			this->Load += gcnew System::EventHandler(this, &SnippetForm::SnippetForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: Void RunHighlighter(String^ code)
	{
		ElementHost ^elementHost = gcnew ElementHost();
		elementHost->Dock = DockStyle::Fill;
		this->panel1->Controls->Add(elementHost);

		TextBlock ^tb = gcnew TextBlock();
		elementHost->Child = tb;
		elementHost->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
		elementHost->Region = gcnew System::Drawing::Region();
		elementHost->BackColor = System::Drawing::Color::White;

		SyntaxHighlighter ^syntax = gcnew SyntaxHighlighter(tb);
		syntax->DoHighlight(code);
		elementHost->Font = gcnew System::Drawing::Font("Consolas", 8.0F);
	}
	private: System::Void SnippetForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	};
}
