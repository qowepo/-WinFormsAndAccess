#include "Access.h"
#include "MyForm1.h"
#include "Student.h"
using namespace System;
 
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Data::SqlClient;
using namespace System::IO;
using namespace System::Drawing::Imaging;

System::Void Example::Student::главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ f3 = gcnew MyForm1();
	f3->Show();
	Student::Hide();
	return System::Void();
}


System::Void Example::Student::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


System::Void Example::Student::button_room_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4))
	{
		MessageBox::Show("Введите корректный номер комнаты!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox_room->Clear();
		tabControl1->Visible = false;
		return;
	}

	for (int i = 0; i < textBox_room->Text->Length; i++)
	{
		if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
		{
			MessageBox::Show("Введите корректный номер комнаты!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox_room->Clear();
			tabControl1->Visible = false;
			return;
		}
	}

	String^ queryRoom = "WHERE room LIKE " + textBox_room->Text; //show selected room
	PrintStudentRoom(queryRoom);
	return System::Void();
}


System::Void Example::Student::PrintStudentRoom(String^& queryRoom)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table] " + queryRoom;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false)
	{
		MessageBox::Show("В базе нет данных о комнате!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox_room->Clear();
		tabControl1->Visible = false;
		tabControl1->TabPages->Clear();
		dbReader->Close();
		dbConnection->Close();
		return System::Void();
	}

	tabControl1->Visible = true;
	tabControl1->TabPages->Clear();
	TabPage^ newTabPage = nullptr;

	while (dbReader->Read())
	{
		try
		{
			newTabPage = gcnew TabPage();
			newTabPage->Text = dbReader["family"] + " " + dbReader["name"];

			PictureBox^ newPicture = gcnew PictureBox();
			newPicture->Width = 333;
			newPicture->Height = 465;
			newPicture->SizeMode = PictureBoxSizeMode::Zoom;
			String^ WayPhoto = "img//" + dbReader["room"] + "//" + dbReader["number"] + ".jpg";
			Bitmap^ image1 = gcnew Bitmap(WayPhoto);
			newPicture->Image = image1;

			newTabPage->BackgroundImage = gcnew Bitmap("img//fon.jpg");
			newPicture->BackgroundImage = gcnew Bitmap("img//fon.jpg");

			Label^ newLabel1 = gcnew Label();
			newLabel1->Height = 23;
			newLabel1->Width = 1000;
			newLabel1->ForeColor = Color::White;
			newLabel1->Font = gcnew System::Drawing::Font("Tobota", 12, FontStyle::Regular);
			newLabel1->Text = dbReader["family"] + " " + dbReader["name"] + "       "
				+ "Факультет: " + dbReader["facul"] + "     " + "Курс: " + dbReader["kyrs"]
				+ "     " + "Номер телефона: " + dbReader["phone"];
			newLabel1->BackgroundImage = gcnew Bitmap("img//fon.jpg");

			newTabPage->Controls->Add(newLabel1);
			newTabPage->Controls->Add(newPicture);
		}
		catch (...)
		{
			MessageBox::Show("Нет доступа к фотографии студента: " + dbReader["family"] +
				" " + dbReader["name"] + "!" + "\n"
				+ "Возможно фото было удалено из корневой папки, либо изменен его формат!",
				"Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		tabControl1->TabPages->Add(newTabPage);
	}

	dbReader->Close();
	dbConnection->Close();
}

