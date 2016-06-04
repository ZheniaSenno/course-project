#pragma once
#include "Functions.h"
#include "MyForm.h"

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AuthFrm
	/// </summary>
	public ref class AuthFrm : public Syncfusion::Windows::Forms::MetroForm
	{
	public:
		AuthFrm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AuthFrm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Syncfusion::Windows::Forms::Tools::GradientLabel^  gradientLabel1;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	
	private: bool isLogged = false;
	private: bool isRegisterAllowed = true;

	public: String^ username = String::Empty;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gradientLabel1 = (gcnew Syncfusion::Windows::Forms::Tools::GradientLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// gradientLabel1
			// 
			this->gradientLabel1->BackgroundColor = (gcnew Syncfusion::Drawing::BrushInfo(System::Drawing::Color::LightCyan));
			this->gradientLabel1->BeforeTouchSize = System::Drawing::Size(259, 93);
			this->gradientLabel1->BorderSides = static_cast<System::Windows::Forms::Border3DSide>((((System::Windows::Forms::Border3DSide::Left | System::Windows::Forms::Border3DSide::Top)
				| System::Windows::Forms::Border3DSide::Right)
				| System::Windows::Forms::Border3DSide::Bottom));
			this->gradientLabel1->BorderStyle = System::Windows::Forms::Border3DStyle::Adjust;
			this->gradientLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gradientLabel1->Location = System::Drawing::Point(81, 9);
			this->gradientLabel1->Name = L"gradientLabel1";
			this->gradientLabel1->Size = System::Drawing::Size(259, 93);
			this->gradientLabel1->TabIndex = 0;
			this->gradientLabel1->Text = L"Приветствуем Вас! Для дальнейшей работы с программой необходима авторизация";
			this->gradientLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::DarkOrange;
			this->button1->Location = System::Drawing::Point(81, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 32);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AuthFrm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::DarkOrange;
			this->button2->Location = System::Drawing::Point(256, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 32);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AuthFrm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Password:";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(164, 166);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox1->TabIndex = 31;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BeepOnError = true;
			this->maskedTextBox2->Location = System::Drawing::Point(164, 225);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->PasswordChar = '*';
			this->maskedTextBox2->Size = System::Drawing::Size(113, 20);
			this->maskedTextBox2->TabIndex = 32;
			// 
			// AuthFrm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 391);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->gradientLabel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AuthFrm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &AuthFrm::AuthFrm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AuthFrm_Load(System::Object^  sender, System::EventArgs^  e) {
		Functions::ReadFromFile();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Login+

		if (maskedTextBox1->Text == "" || maskedTextBox2->Text == "")
		{
			MessageBox::Show("fields cannot be blank");
		}
		else
		{
			String ^passwd = maskedTextBox2->Text;
			MD5 ^md5Hash = MD5::Create();
			String ^hash = Functions::GetHash(md5Hash, passwd);
			for each (auto user in Functions::users->Items)
			{
				if ((user->Login->Equals(maskedTextBox1->Text)) && (Functions::VerifyHash(md5Hash, passwd, user->Hash)))
				{
					isLogged = true;
					username = user->Login;
					break;
				}
				else
				{
					isLogged = false;
					break;
				}
			}
		}

		if (isLogged)
		{
			MessageBox::Show("Login successful!!");
			MyForm^ frm = gcnew MyForm();
			this->Hide();
			frm->username = username;
			frm->Show();
		}

		if (!isLogged)
		{
			MessageBox::Show("Access denied!");
			maskedTextBox1->Text = String::Empty;
			maskedTextBox2->Text = String::Empty;
		}
		
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Register+

	if (maskedTextBox1->Text == "" || maskedTextBox2->Text == "")
	{
		MessageBox::Show("fields cannot be blank");
	}
	else
	{
		String ^passwd = maskedTextBox2->Text;
		MD5 ^md5Hash = MD5::Create();
		String ^hash = Functions::GetHash(md5Hash, passwd);

		auto newuser = gcnew DataModels::User();
		newuser->Login = maskedTextBox1->Text;
		newuser->Hash = hash;

		for each (auto user in Functions::users->Items)
		{
			if (user->Login->Equals(maskedTextBox1->Text))
			{
				isRegisterAllowed = false;
				break;
			}
		}

		if (isRegisterAllowed)
		{
			Functions::users->Items->Add(newuser);
			maskedTextBox1->Text = String::Empty;
			maskedTextBox2->Text = String::Empty;
			MessageBox::Show("Register completed!");
		}

		if (!isRegisterAllowed)
		{
			maskedTextBox1->Text = String::Empty;
			maskedTextBox2->Text = String::Empty;
			MessageBox::Show("User " + maskedTextBox1->Text + " already exists!");
		}
		

	}
}
};
}
