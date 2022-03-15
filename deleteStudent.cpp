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
	if (!(textBox_Delete->Text->Length > 0 && textBox_Delete->Text->Length <= 4))
	{
		MessageBox::Show("Введите корректный ID студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox_Delete->Clear();
		return System::Void();
	}

	for (int i = 0; i < textBox_Delete->Text->Length; i++)
	{
		if (!(textBox_Delete->Text[i] >= '0' && textBox_Delete->Text[i] <= '9'))
		{
			MessageBox::Show("Введите корректный ID студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox_Delete->Clear();
			return System::Void();
		}
	}

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();
    String^ query = "DELETE FROM [table] WHERE number = " + textBox_Delete->Text;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	String^ IdStudentPhotoDelete = textBox_Delete->Text;
	try
	{
		DeletePhoto(IdStudentPhotoDelete);

		if (dbCommand->ExecuteNonQuery() != 1)
		{
			MessageBox::Show("Данного ID нет в базе!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox_Delete->Clear();
			dbConnection->Close();
			return System::Void();
		}
		MessageBox::Show("Студент успешно удален!" + "\n"
			+ "Обновите соединение с базой!", "Готово!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (...)
	{
		MessageBox::Show("Ошибка выполнения запроса на обновление данных!" + "\n"
			+ "Возможна БД была корректированна вручную!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	dbConnection->Close();
	deleteStudent::Hide();
	return System::Void();
}


System::Void Example::deleteStudent::DeletePhoto(String^& IdStudentPhotoDelete)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT room FROM [table] WHERE number LIKE "+ IdStudentPhotoDelete;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
	String^ AdressPhoto;

	while (dbReader->Read())
	{
		AdressPhoto = "img/" + dbReader["room"] + "/" + IdStudentPhotoDelete + ".jpg";
	}

	try	{
		System::IO::File::Delete(AdressPhoto);
	}
	catch(Exception^ ex) { 
		MessageBox::Show(ex->ToString(), "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Information); 
	}

	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}
