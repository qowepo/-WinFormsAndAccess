#include "Access.h"
#include "MyForm1.h"
#include "Student.h"
using namespace System;
 
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

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
	/*if (textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4)
	{
		bool Protected = true;
		for (int i = 0; i < textBox_room->Text->Length; i++)
		{
			if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
				Protected = false;
		}
		if (Protected)
		{
			String^ queryRoom = "WHERE room LIKE " + textBox_room->Text; //show selected room
			PrintStudentRoom(queryRoom);
		}
		else
		{
			MessageBox::Show("Введите корректный номер комнаты!", "Внимание!");
			textBox_room->Clear();
			tabControl1->Visible = false;
			tabControl1->TabPages->Clear();
		}
	}
	else
	{
		MessageBox::Show("Введите корректный номер комнаты!", "Внимание!");
		textBox_room->Clear();
		tabControl1->Visible = false;
		tabControl1->TabPages->Clear();
	}*/


	if (textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4)
	{
		bool Protected = true;
		for (int i = 0; i < textBox_room->Text->Length; i++)
		{
			if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
				Protected = false;
		}
		if (Protected)
		{
			if (textBox_room->Text == "88" || textBox_room->Text == "109" || textBox_room->Text == "117")
			{
				String^ queryRoom = "WHERE room LIKE " + textBox_room->Text; //show selected room
				PrintStudentRoom(queryRoom);
			}
			else
			{
				MessageBox::Show("В базе нет данных о комнате!", "Внимание!");
				textBox_room->Clear();
				tabControl1->Visible = false;
				tabControl1->TabPages->Clear();
			}
		}
		else
		{
			MessageBox::Show("Введите корректный номер комнаты!", "Внимание!");
			textBox_room->Clear();
			tabControl1->Visible = false;
			tabControl1->TabPages->Clear();
		}
		return System::Void();

		
	}
}


System::Void Example::Student::PrintStudentRoom(String^& queryRoom)
{
	/////// XYETA \\\\\\\


	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table] " + queryRoom;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false)
	{
		MessageBox::Show("Пока нет данных о комнате!", "Внимание!");
		textBox_room->Clear();
		tabControl1->Visible = false;
		tabControl1->TabPages->Clear();
	}
	else
	{
		tabControl1->Visible = true;
		tabControl1->TabPages->Clear();
		TabPage^ newTabPage = nullptr;
		while (dbReader->Read())
		{
	        newTabPage = gcnew TabPage();
			newTabPage->Text = dbReader["family"] + " " + dbReader["name"];
			 
			PictureBox^ newPicture = gcnew PictureBox();
			newPicture->SizeMode = PictureBoxSizeMode::Zoom;
			 
			newPicture->Size.Height = 700;
			newPicture->Size.Width = 500;

			//Bitmap^ bmp = gcnew Bitmap(1800, 3600);
			//Graphics^ g = Graphics::FromImage(bmp); // холст для рисования
			//newPicture->Image = bmp; // закрепление к pictureBox
			Bitmap^ image1; // фото загрузки в pictureBox
			image1 = gcnew Bitmap("img/"+ dbReader["room"] +"/"+ dbReader["family"] +".jpg");  
			newPicture->Image = image1;
			image1->Size.Height = 700;
			image1->Size.Width = 500;
			//newTabPage->BackgroundImage = image1;
			newTabPage->Controls->Add(newPicture);
						 
			//Label^ newLabel1 = gcnew Label();
			//newLabel1->Height = 140;
			//newLabel1->Width = 270;
			//newLabel1->Location->Add(Point(23, 55));
			//newLabel1->Location.X = 703;
			//newLabel1->Location.Y = 720;
			//newLabel1->Text = dbReader["family"] + " " + dbReader["name"];
			//newTabPage->Controls->Add(newLabel1);

			//Label^ newLabel2 = gcnew Label();
			//newLabel2->Text = "Факультет: " + dbReader["facul"];
			//newLabel2->Height = 28;
			//newLabel2->Width = 268;
			//newLabel2->Location.X = 703;
			//newLabel2->Location.Y = -500;
			//newTabPage->Controls->Add(newLabel2);

			//Label^ newLabel3 = gcnew Label();
			
			//newTabPage->Controls->Add(newLabel3);
			//newLabel3->Height = 28;
			//newLabel3->Width = 268;
			//newLabel3->Location.X = 45;
			//newLabel3->Location.Y = 403;
			//newLabel3->Text = "Курс: " + dbReader["kyrs"];
			

			//Label^ newLabel4 = gcnew Label();
			//newLabel4->Text = "Номер телефона: " + dbReader["phone"];
			//newLabel4->Height = 40;
			//newLabel4->Width = -70;
			//newLabel4->Location.X = -200;
			//newLabel4->Location.Y = 100;
			//newTabPage->Controls->Add(newLabel4);

			tabControl1->TabPages->Add(newTabPage);
		}

		 
	}

	dbReader->Close();
	dbConnection->Close();
}

