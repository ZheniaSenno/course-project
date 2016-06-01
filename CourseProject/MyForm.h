#pragma once
#include "Functions.h"
#include "SnippetForm.h"
#include "Editor.h"
#include "ResultsFrm.h"

namespace CourseProject
{
	//Windows Forms namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//for WPF integration
	using namespace System::Windows::Controls;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::Integration;

	//Syncfusion UI
	using namespace Syncfusion::Windows::Forms;
	using namespace Syncfusion::Pdf::Parsing;


	using namespace System::Linq;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public Syncfusion::Windows::Forms::MetroForm
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		delegate void SubmitHandler();
		event SubmitHandler ^SubmitClicked;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;




	private: Syncfusion::Windows::Forms::Tools::TabControlAdv^  tabControl1;
	private: Syncfusion::Windows::Forms::Tools::TabPageAdv^  tabPage1;
	private: Syncfusion::Windows::Forms::Tools::TabPageAdv^  tabPage2;

	private: System::Windows::Forms::Button^  button7;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;

	private: Syncfusion::Windows::Forms::SkinManager^  skinManager1;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: Syncfusion::Windows::Forms::VScrollBarCustomDraw^  object_97ad5c86_75c2_44e5_92f7_a36aa0df199d;
	private: Syncfusion::Windows::Forms::HScrollBarCustomDraw^  object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e;



	private: Syncfusion::Windows::Forms::PdfViewer::PdfDocumentView^  pdfDocumentView1;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel7;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel6;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel5;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel4;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel3;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel2;
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel1;

	private: Syncfusion::Windows::Forms::Tools::RadioButtonAdv^  radioButtonAdv4;
	private: Syncfusion::Windows::Forms::Tools::RadioButtonAdv^  radioButtonAdv3;
	private: Syncfusion::Windows::Forms::Tools::RadioButtonAdv^  radioButtonAdv2;
	private: Syncfusion::Windows::Forms::Tools::RadioButtonAdv^  radioButtonAdv1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: PdfLoadedDocument^ pdf1;
	private: PdfLoadedDocument^ pdf2;
	private: PdfLoadedDocument^ pdf3;
	private: PdfLoadedDocument^ pdf4;
	private: PdfLoadedDocument^ pdf5;
	private: PdfLoadedDocument^ pdf6;
	private: PdfLoadedDocument^ pdf7;




	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			Syncfusion::Windows::Forms::MetroColorTable^  metroColorTable1 = (gcnew Syncfusion::Windows::Forms::MetroColorTable());
			Syncfusion::Windows::Forms::MetroColorTable^  metroColorTable2 = (gcnew Syncfusion::Windows::Forms::MetroColorTable());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew Syncfusion::Windows::Forms::Tools::TabControlAdv());
			this->tabPage1 = (gcnew Syncfusion::Windows::Forms::Tools::TabPageAdv());
			this->gradientLabel7 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel6 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel5 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel4 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel3 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel2 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->gradientLabel1 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->pdfDocumentView1 = (gcnew Syncfusion::Windows::Forms::PdfViewer::PdfDocumentView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew Syncfusion::Windows::Forms::Tools::TabPageAdv());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonAdv4 = (gcnew Syncfusion::Windows::Forms::Tools::RadioButtonAdv());
			this->radioButtonAdv1 = (gcnew Syncfusion::Windows::Forms::Tools::RadioButtonAdv());
			this->radioButtonAdv2 = (gcnew Syncfusion::Windows::Forms::Tools::RadioButtonAdv());
			this->radioButtonAdv3 = (gcnew Syncfusion::Windows::Forms::Tools::RadioButtonAdv());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->skinManager1 = (gcnew Syncfusion::Windows::Forms::SkinManager(this->components));
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d = (gcnew Syncfusion::Windows::Forms::VScrollBarCustomDraw());
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e = (gcnew Syncfusion::Windows::Forms::HScrollBarCustomDraw());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabControl1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv3))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(462, 428);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 50);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Firebrick;
			this->button4->Location = System::Drawing::Point(1061, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 37);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(271, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Question: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->richTextBox1->Location = System::Drawing::Point(367, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(311, 98);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// tabControl1
			// 
			this->tabControl1->BeforeTouchSize = System::Drawing::Size(1179, 626);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(108, 26);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Size = System::Drawing::Size(1179, 626);
			this->tabControl1->SizeMode = Syncfusion::Windows::Forms::Tools::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 23;
			this->tabControl1->ThemesEnabled = true;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->gradientLabel7);
			this->tabPage1->Controls->Add(this->gradientLabel6);
			this->tabPage1->Controls->Add(this->gradientLabel5);
			this->tabPage1->Controls->Add(this->gradientLabel4);
			this->tabPage1->Controls->Add(this->gradientLabel3);
			this->tabPage1->Controls->Add(this->gradientLabel2);
			this->tabPage1->Controls->Add(this->gradientLabel1);
			this->tabPage1->Controls->Add(this->pdfDocumentView1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Image = nullptr;
			this->tabPage1->ImageSize = System::Drawing::Size(16, 16);
			this->tabPage1->Location = System::Drawing::Point(3, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->ShowCloseButton = true;
			this->tabPage1->Size = System::Drawing::Size(1172, 591);
			this->tabPage1->TabFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->TabForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Learning";
			this->tabPage1->ThemesEnabled = true;
			// 
			// gradientLabel7
			// 
			this->gradientLabel7->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel7->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel7->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel7->Location = System::Drawing::Point(9, 391);
			this->gradientLabel7->Name = L"gradientLabel7";
			this->gradientLabel7->Size = System::Drawing::Size(161, 23);
			this->gradientLabel7->TabIndex = 28;
			this->gradientLabel7->Text = L"Ввод и вывод. Работа с файлами";
			this->gradientLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel7->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel7_Click);
			// 
			// gradientLabel6
			// 
			this->gradientLabel6->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel6->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel6->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel6->Location = System::Drawing::Point(9, 339);
			this->gradientLabel6->Name = L"gradientLabel6";
			this->gradientLabel6->Size = System::Drawing::Size(161, 23);
			this->gradientLabel6->TabIndex = 27;
			this->gradientLabel6->Text = L"Структуры";
			this->gradientLabel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel6->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel6_Click);
			// 
			// gradientLabel5
			// 
			this->gradientLabel5->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel5->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel5->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel5->Location = System::Drawing::Point(9, 284);
			this->gradientLabel5->Name = L"gradientLabel5";
			this->gradientLabel5->Size = System::Drawing::Size(161, 23);
			this->gradientLabel5->TabIndex = 26;
			this->gradientLabel5->Text = L"Указатели и массивы";
			this->gradientLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel5->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel5_Click);
			// 
			// gradientLabel4
			// 
			this->gradientLabel4->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel4->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel4->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel4->Location = System::Drawing::Point(9, 229);
			this->gradientLabel4->Name = L"gradientLabel4";
			this->gradientLabel4->Size = System::Drawing::Size(161, 23);
			this->gradientLabel4->TabIndex = 25;
			this->gradientLabel4->Text = L"Препроцессор языка С";
			this->gradientLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel4->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel4_Click);
			// 
			// gradientLabel3
			// 
			this->gradientLabel3->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel3->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel3->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel3->Location = System::Drawing::Point(9, 172);
			this->gradientLabel3->Name = L"gradientLabel3";
			this->gradientLabel3->Size = System::Drawing::Size(161, 23);
			this->gradientLabel3->TabIndex = 24;
			this->gradientLabel3->Text = L"Инструкции управления. Циклы";
			this->gradientLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel3->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel3_Click);
			// 
			// gradientLabel2
			// 
			this->gradientLabel2->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel2->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel2->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel2->Location = System::Drawing::Point(9, 117);
			this->gradientLabel2->Name = L"gradientLabel2";
			this->gradientLabel2->Size = System::Drawing::Size(161, 23);
			this->gradientLabel2->TabIndex = 23;
			this->gradientLabel2->Text = L"Типы.Операторы.Выражения";
			this->gradientLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel2->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel2_Click);
			// 
			// gradientLabel1
			// 
			this->gradientLabel1->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(Syncfusion::Drawing::GradientStyle::Vertical, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(247))), System::Drawing::Color::LavenderBlush));
			this->gradientLabel1->BeforeTouchSize = System::Drawing::Size(161, 23);
			this->gradientLabel1->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel1->Location = System::Drawing::Point(9, 60);
			this->gradientLabel1->Name = L"gradientLabel1";
			this->gradientLabel1->Size = System::Drawing::Size(161, 23);
			this->gradientLabel1->TabIndex = 22;
			this->gradientLabel1->Text = L"Введение";
			this->gradientLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->gradientLabel1->Click += gcnew System::EventHandler(this, &MyForm::gradientLabel1_Click);
			// 
			// pdfDocumentView1
			// 
			this->pdfDocumentView1->AutoScroll = true;
			this->pdfDocumentView1->BackColor = System::Drawing::Color::White;
			this->pdfDocumentView1->Location = System::Drawing::Point(176, 21);
			this->pdfDocumentView1->Name = L"pdfDocumentView1";
			this->pdfDocumentView1->ScrollDisplacementValue = 0;
			this->pdfDocumentView1->Size = System::Drawing::Size(847, 511);
			this->pdfDocumentView1->TabIndex = 21;
			this->pdfDocumentView1->ZoomMode = Syncfusion::Windows::Forms::PdfViewer::ZoomMode::Default;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Firebrick;
			this->button7->Location = System::Drawing::Point(1061, 482);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 37);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Image = nullptr;
			this->tabPage2->ImageSize = System::Drawing::Size(16, 16);
			this->tabPage2->Location = System::Drawing::Point(3, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->ShowCloseButton = true;
			this->tabPage2->Size = System::Drawing::Size(1172, 591);
			this->tabPage2->TabFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->TabForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Testing";
			this->tabPage2->ThemesEnabled = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(271, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 37;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonAdv4);
			this->groupBox1->Controls->Add(this->radioButtonAdv1);
			this->groupBox1->Controls->Add(this->radioButtonAdv2);
			this->groupBox1->Controls->Add(this->radioButtonAdv3);
			this->groupBox1->Location = System::Drawing::Point(367, 149);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(311, 242);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options:";
			this->groupBox1->Visible = false;
			// 
			// radioButtonAdv4
			// 
			this->radioButtonAdv4->BeforeTouchSize = System::Drawing::Size(260, 41);
			this->radioButtonAdv4->DrawFocusRectangle = false;
			this->radioButtonAdv4->Location = System::Drawing::Point(24, 195);
			this->radioButtonAdv4->MetroColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->radioButtonAdv4->Name = L"radioButtonAdv4";
			this->radioButtonAdv4->Size = System::Drawing::Size(260, 41);
			this->radioButtonAdv4->Style = Syncfusion::Windows::Forms::Tools::RadioButtonAdvStyle::Metro;
			this->radioButtonAdv4->TabIndex = 34;
			this->radioButtonAdv4->ThemesEnabled = false;
			this->radioButtonAdv4->CheckChanged += gcnew System::EventHandler(this, &MyForm::radioButtonAdv4_CheckChanged);
			// 
			// radioButtonAdv1
			// 
			this->radioButtonAdv1->BeforeTouchSize = System::Drawing::Size(260, 41);
			this->radioButtonAdv1->DrawFocusRectangle = false;
			this->radioButtonAdv1->Location = System::Drawing::Point(24, 11);
			this->radioButtonAdv1->MetroColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->radioButtonAdv1->Name = L"radioButtonAdv1";
			this->radioButtonAdv1->Size = System::Drawing::Size(260, 41);
			this->radioButtonAdv1->Style = Syncfusion::Windows::Forms::Tools::RadioButtonAdvStyle::Metro;
			this->radioButtonAdv1->TabIndex = 31;
			this->radioButtonAdv1->ThemesEnabled = false;
			this->radioButtonAdv1->CheckChanged += gcnew System::EventHandler(this, &MyForm::radioButtonAdv1_CheckChanged);
			// 
			// radioButtonAdv2
			// 
			this->radioButtonAdv2->BeforeTouchSize = System::Drawing::Size(260, 41);
			this->radioButtonAdv2->DrawFocusRectangle = false;
			this->radioButtonAdv2->Location = System::Drawing::Point(24, 75);
			this->radioButtonAdv2->MetroColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->radioButtonAdv2->Name = L"radioButtonAdv2";
			this->radioButtonAdv2->Size = System::Drawing::Size(260, 41);
			this->radioButtonAdv2->Style = Syncfusion::Windows::Forms::Tools::RadioButtonAdvStyle::Metro;
			this->radioButtonAdv2->TabIndex = 32;
			this->radioButtonAdv2->ThemesEnabled = false;
			this->radioButtonAdv2->CheckChanged += gcnew System::EventHandler(this, &MyForm::radioButtonAdv2_CheckChanged);
			// 
			// radioButtonAdv3
			// 
			this->radioButtonAdv3->BeforeTouchSize = System::Drawing::Size(260, 41);
			this->radioButtonAdv3->DrawFocusRectangle = false;
			this->radioButtonAdv3->Location = System::Drawing::Point(24, 137);
			this->radioButtonAdv3->MetroColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->radioButtonAdv3->Name = L"radioButtonAdv3";
			this->radioButtonAdv3->Size = System::Drawing::Size(260, 41);
			this->radioButtonAdv3->Style = Syncfusion::Windows::Forms::Tools::RadioButtonAdvStyle::Metro;
			this->radioButtonAdv3->TabIndex = 33;
			this->radioButtonAdv3->ThemesEnabled = false;
			this->radioButtonAdv3->CheckChanged += gcnew System::EventHandler(this, &MyForm::radioButtonAdv3_CheckChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(271, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Choose: ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Visible = false;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::SteelBlue;
			this->button9->Location = System::Drawing::Point(1061, 428);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 37);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Editor";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::ForestGreen;
			this->button8->Location = System::Drawing::Point(957, 482);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 37);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Start!";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// skinManager1
			// 
			this->skinManager1->Controls = nullptr;
			this->skinManager1->VisualTheme = Syncfusion::Windows::Forms::VisualTheme::Metro;
			// 
			// object_97ad5c86_75c2_44e5_92f7_a36aa0df199d
			// 
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Enabled = false;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->LargeChange = 0;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Location = System::Drawing::Point(505, 0);
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Maximum = 0;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->MetroColorScheme = Syncfusion::Windows::Forms::MetroColorScheme::Managed;
			metroColorTable1->ArrowChecked = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			metroColorTable1->ArrowInActive = System::Drawing::Color::White;
			metroColorTable1->ArrowNormal = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			metroColorTable1->ArrowNormalBackGround = System::Drawing::Color::Empty;
			metroColorTable1->ArrowPushed = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			metroColorTable1->ArrowPushedBackGround = System::Drawing::Color::Empty;
			metroColorTable1->ScrollerBackground = System::Drawing::Color::White;
			metroColorTable1->ThumbChecked = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			metroColorTable1->ThumbInActive = System::Drawing::Color::White;
			metroColorTable1->ThumbNormal = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			metroColorTable1->ThumbPushed = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			metroColorTable1->ThumbPushedBorder = System::Drawing::Color::Empty;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->MetroColorTable = metroColorTable1;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Name = L"object_97ad5c86_75c2_44e5_92f7_a36aa0df199d";
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Office2010ColorScheme = Syncfusion::Windows::Forms::Office2010ColorScheme::Blue;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->OfficeColorScheme = Syncfusion::Windows::Forms::Office2007ColorScheme::Blue;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->RefreshOnValueChange = true;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Size = System::Drawing::Size(17, 355);
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->SmallChange = 16;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->TabIndex = 1;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->TabStop = false;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Value = 1;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->Visible = false;
			this->object_97ad5c86_75c2_44e5_92f7_a36aa0df199d->VisualStyle = Syncfusion::Windows::Forms::ScrollBarCustomDrawStyles::Classic;
			// 
			// object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e
			// 
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Enabled = false;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->LargeChange = 0;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Location = System::Drawing::Point(0, 144);
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->MetroColorScheme = Syncfusion::Windows::Forms::MetroColorScheme::Managed;
			metroColorTable2->ArrowChecked = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			metroColorTable2->ArrowInActive = System::Drawing::Color::White;
			metroColorTable2->ArrowNormal = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			metroColorTable2->ArrowNormalBackGround = System::Drawing::Color::Empty;
			metroColorTable2->ArrowPushed = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			metroColorTable2->ArrowPushedBackGround = System::Drawing::Color::Empty;
			metroColorTable2->ScrollerBackground = System::Drawing::Color::White;
			metroColorTable2->ThumbChecked = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			metroColorTable2->ThumbInActive = System::Drawing::Color::White;
			metroColorTable2->ThumbNormal = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			metroColorTable2->ThumbPushed = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			metroColorTable2->ThumbPushedBorder = System::Drawing::Color::Empty;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->MetroColorTable = metroColorTable2;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Name = L"object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e";
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Office2010ColorScheme = Syncfusion::Windows::Forms::Office2010ColorScheme::Blue;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->OfficeColorScheme = Syncfusion::Windows::Forms::Office2007ColorScheme::Blue;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->RefreshOnValueChange = true;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Size = System::Drawing::Size(224, 17);
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->SmallChange = 16;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->TabIndex = 0;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->TabStop = false;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Value = 10;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->Visible = false;
			this->object_ebe24d74_f81e_4bc9_bcd8_c3ce39bb188e->VisualStyle = Syncfusion::Windows::Forms::ScrollBarCustomDrawStyles::Classic;
			// 
			// MyForm
			// 
			this->AcceptButton = this->button5;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1179, 626);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"C language learning program";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabControl1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radioButtonAdv3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Functions::ReadFromFile();
		Functions::Shuffle(Functions::userList);
		gradientLabel1_Click(nullptr, nullptr);
		//main->
	}



	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //exit
		Functions::WriteToFile();
		Application::Exit();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { //check

		Functions::current->isRight = CheckAnswer();

		Functions::current = Functions::GetNext(Functions::userList, Functions::current);

		if (Functions::current->Equals(Functions::userList->Items[0])) {
			ResultsFrm^ resFrm = gcnew ResultsFrm();
			MessageBox::Show("Finished!!");
			
			//this->Close();
			Hide();
			resFrm->Show();
		}
		else
		{
			this->label3->Text = Convert::ToString(++Functions::counter) + " / " + Convert::ToString(Functions::userList->Items->Count);
			this->richTextBox1->Text = Functions::current->Text;

			for (int i = 1; i <= 4; i++)
			{
				auto rb = (safe_cast<Syncfusion::Windows::Forms::Tools::RadioButtonAdv^>(this->groupBox1->Controls["radioButtonAdv" + i.ToString()]));
				if (rb != nullptr)
					rb->Text = Functions::current->TextVariants[i - 1];
			}

			if (Functions::current->SnippetID != 0)
			{
				SnippetForm ^newSnipp = gcnew SnippetForm();
				for each(auto item in Functions::snippetsList->Items)
				{
					if (item->ID == Functions::current->SnippetID)
					{
						newSnipp->RunHighlighter(item->Code);
						newSnipp->ShowDialog();
						break;
					}
				}
			}
		}

		for (int i = 1; i <= 4; i++)
		{
			auto rb = (safe_cast<Syncfusion::Windows::Forms::Tools::RadioButtonAdv^>(this->groupBox1->Controls["radioButtonAdv" + i.ToString()]));
			if (rb != nullptr)
				rb->Checked = false;
		}

	}


	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) { // exit
		Functions::WriteToFile();
		Application::Exit();
	}
	private: bool CheckAnswer()
	{
		array<bool> ^checks = gcnew array<bool>(4);
		for (int i = 1; i <= 4; i++)
		{
			auto rb = (safe_cast<Syncfusion::Windows::Forms::Tools::RadioButtonAdv^>(this->groupBox1->Controls["radioButtonAdv" + i.ToString()]));
			if (rb != nullptr)
				checks[i - 1] = rb->Checked;
		}
		bool isEqual = Functions::isArraysEqual(checks, Functions::current->RightVariants);

		return isEqual;
	}


	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { //Start!
		Functions::counter = 0;
		this->label1->Visible = true;
		this->groupBox1->Visible = true;
		this->richTextBox1->Visible = true;
		this->button5->Visible = true;
		this->label2->Visible = true;
		this->button5->Enabled = false;
		this->button8->Enabled = false;

		Functions::current = Functions::userList->Items[0];
		this->label3->Text = Convert::ToString(++Functions::counter) + " / " + Convert::ToString(Functions::userList->Items->Count);
		this->richTextBox1->Text = Functions::current->Text;

		for (int i = 1; i <= 4; i++)
		{
			auto rb = (safe_cast<Syncfusion::Windows::Forms::Tools::RadioButtonAdv^>(this->groupBox1->Controls["radioButtonAdv" + i.ToString()]));
			if (rb != nullptr)
				rb->Text = Functions::current->TextVariants[i - 1];
		}
		if (Functions::current->SnippetID != 0)
		{
			SnippetForm ^newSnipp = gcnew SnippetForm();
			for each(auto item in Functions::snippetsList->Items)
			{
				if (item->ID == Functions::current->SnippetID)
				{
					newSnipp->RunHighlighter(item->Code);
					newSnipp->ShowDialog();
					break;
				}
			}
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		Editor^ frmEd = gcnew Editor();
		frmEd->ShowDialog();
	}



	private: System::Void gradientLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\1 - Введение.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\2 - Типы.Операторы.Выражения.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel3_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\3 - Инструкции управления.Основные циклы.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel4_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\4 - Препроцессор языка С.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel5_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\5 - Указатели и массивы.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel6_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\6 - Структуры.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
	private: System::Void gradientLabel7_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ fs = gcnew FileStream("..\\CourseProject\\learning\\7 - Ввод и вывод. Работа с файлами.pdf", FileMode::Open);
		PdfLoadedDocument^ pdf = gcnew PdfLoadedDocument(fs);
		this->pdfDocumentView1->Load(pdf);
		this->pdfDocumentView1->Focus();
		this->pdfDocumentView1->VerticalScroll->Enabled = true;
	}
		/*DataModels::Snippet^ sn = gcnew DataModels::Snippet();
		sn->ID = Functions::snippetsList->Items->Count + 1;
		sn->Code = this->richTextBox2->Text;
		Functions::snippetsList->Items->Add(sn);
		MessageBox::Show(sn->ID.ToString());
		*/

private: System::Void radioButtonAdv1_CheckChanged(System::Object^  sender, System::EventArgs^  e) {
		this->button5->Enabled = true;
}
private: System::Void radioButtonAdv2_CheckChanged(System::Object^  sender, System::EventArgs^  e) {
	this->button5->Enabled = true;
}
private: System::Void radioButtonAdv3_CheckChanged(System::Object^  sender, System::EventArgs^  e) {
	this->button5->Enabled = true;
}
private: System::Void radioButtonAdv4_CheckChanged(System::Object^  sender, System::EventArgs^  e) {
	this->button5->Enabled = true;
}
};
}