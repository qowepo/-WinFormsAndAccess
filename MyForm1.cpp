#include "Access.h"
#include "MyForm1.h"
#include "Student.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


System::Void Example::MyForm1::����AccessToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Access^ f2 = gcnew Access();
	MyForm1::Hide();
	f2->Show();
	
	return System::Void();
}


System::Void Example::MyForm1::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


System::Void Example::MyForm1::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Student^ f5 = gcnew Student();
	MyForm1::Hide();
	f5->Show();
	 
	return System::Void();
}

 
