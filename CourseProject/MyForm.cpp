#include "AuthFrm.h"
#include "Functions.h"
// see headers -- interface

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseProject::AuthFrm authform;
	Application::Run(%authform);

}
