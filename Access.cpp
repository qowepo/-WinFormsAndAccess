#include "Access.h"
#include "MyForm1.h"
#include "addStudent.h"
#include "deleteStudent.h"
#include "correctStudent.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

 

System::Void Example::Access::главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ f1 = gcnew MyForm1();
	f1->Show();
	Access::Hide();
	return System::Void();
}

System::Void Example::Access::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


System::Void Example::Access::button_Загрузить_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripTextBox_RoomNumber->Clear();
	String^ queryRoom = ""; //show all student
	PrintStudentRoom(queryRoom);
	return;
}

System::Void Example::Access::button_Обновить_Click(System::Object^ sender, System::EventArgs^ e)
{
	correctStudent^ f6 = gcnew correctStudent();
	f6->Show();
	return System::Void();
}

System::Void Example::Access::button_Добавить_Click(System::Object^ sender, System::EventArgs^ e)
{
	addStudent^ f5 = gcnew addStudent();
	f5->Show();
	return System::Void();
}

System::Void Example::Access::button_Удалить_Click(System::Object^ sender, System::EventArgs^ e)
{
	deleteStudent^ f4 = gcnew deleteStudent();
	f4->Show();
	return System::Void();
}

System::Void Example::Access::toolStripButton_RoomNumber_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (toolStripTextBox_RoomNumber->Text->Length > 0 && toolStripTextBox_RoomNumber->Text->Length <= 4)
	{
		bool Protected = true;
		for (int i = 0; i < toolStripTextBox_RoomNumber->Text->Length; i++)
		{
			if (!(toolStripTextBox_RoomNumber->Text[i] >= '0' && toolStripTextBox_RoomNumber->Text[i] <= '9'))
				Protected = false;
		}
		if (Protected)
		{
			String^ queryRoom = "WHERE room LIKE " + toolStripTextBox_RoomNumber->Text; //show selected room
			PrintStudentRoom(queryRoom);
		}
		else 
		{ 
			MessageBox::Show("Введите корректный номер комнаты!", "Внимание!");
			toolStripTextBox_RoomNumber->Clear();
		}
	}
	else
	{
		MessageBox::Show("Введите корректный номер комнаты!", "Внимание!");
		toolStripTextBox_RoomNumber->Clear();
	}
	return System::Void();
}

System::Void Example::Access::PrintStudentRoom(String^& queryRoom)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table] " + queryRoom;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false)
	{
		MessageBox::Show("Пока нет данных о комнате!", "Внимание!");
		toolStripTextBox_RoomNumber->Clear();
	}
	else
	{
		dataGridView_Access->Rows->Clear();
		while (dbReader->Read())
		{
			dataGridView_Access->Rows->Add(dbReader["number"], dbReader["family"], dbReader["name"], dbReader["facul"], dbReader["kyrs"], dbReader["room"], dbReader["phone"]);
		}

		
	}

	dbReader->Close();
	dbConnection->Close();
}