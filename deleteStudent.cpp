#include "deleteStudent.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

System::Void Example::deleteStudent::button_nDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	 
	deleteStudent::Hide();
	 
}

System::Void Example::deleteStudent::button_Deleted_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (textBox_Delete->Text->Length > 0 && textBox_Delete->Text->Length <= 4)
	{
		bool Protected = true;
		for (int i = 0; i < textBox_Delete->Text->Length; i++)
		{
			if (!(textBox_Delete->Text[i] >= '0' && textBox_Delete->Text[i] <= '9'))
				Protected = false;
		}
		if (Protected)
		{
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query = "DELETE FROM [table] WHERE number = " + textBox_Delete->Text;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

			if (dbCommand->ExecuteNonQuery() != 1)
			{
				MessageBox::Show("������� ID ��� � ����!", "��������!");
				textBox_Delete->Clear();
			}
			else
			{
				MessageBox::Show("������� ������� ������ �� ����!", "������!");
				dbConnection->Close();
				deleteStudent::Hide();
			}
		}
		else
		{
			MessageBox::Show("������� ���������� ID ��������!", "��������!");
			textBox_Delete->Clear();
		}
	}
	else
	{
		MessageBox::Show("������� ���������� ID ��������!", "��������!");
		textBox_Delete->Clear();
	}
	
	
	return System::Void();
}
