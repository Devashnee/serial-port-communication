#include "MyForm.h"
//#include"login.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	serialportcommunication::MyForm form;
	Application::Run(%form);
}
