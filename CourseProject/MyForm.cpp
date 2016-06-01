#include "MyForm.h"
// see headers -- interface

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseProject::MyForm form;
	Application::Run(%form);
}
