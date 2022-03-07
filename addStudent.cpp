#include "addStudent.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

System::Void Example::addStudent::button_nAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    addStudent::Hide();
}

System::Void Example::addStudent::button_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool correctData = true;
    Protect(correctData);
    if (correctData)
    {
        String^ id = textBox_id->Text->ToString();
        String^ fam = textBox_fam->Text->ToString();
        String^ name = textBox_nam->Text->ToString();
        String^ facul = textBox_fac->Text->ToString();
        String^ kyrs = textBox_kyrs->Text->ToString();
        String^ room = textBox_room->Text->ToString();
        String^ phone = textBox_phone->Text->ToString();

        String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
        OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

        dbConnection->Open();
        String^ query = "INSERT INTO [table] VALUES ("+ id +", '"+ fam +"', '" + name + "', '" + facul +"', "
            + kyrs + ", " + room + ", " + phone + ")";
        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

        if (dbCommand->ExecuteNonQuery() != 1)
        {
            MessageBox::Show("Ошибка выполнения запроса!", "Внимание!");
            dbConnection->Close();
            addStudent::Hide();
        }
        else
        {
            MessageBox::Show("Студент успешно добавлен в базу!", "Готово!");
            dbConnection->Close();
            addStudent::Hide();
        }

    }
    else 
    {
        MessageBox::Show("Введенные данные не корректны!", "Внимание!");
    }
    return System::Void();
}

System::Void Example::addStudent::помоощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("ID студента должен быть индивидуальным, числовым и не иметь более 3-х разрядов! Пункты с ФАМИЛИЕЙ, ИМЕНЕМ и ФАКУЛЬТЕТОМ студента не могут быть пустыми! КУРС студента 1-разрядное число! Номер КОМНАТЫ число, не более 4 разрядов! Номер ТЕЛЕФОНА 11-разрядное число!", "Заполните все пункты корректно!");
    return;
}

System::Void Example::addStudent::Protect(bool& correctData)
{
    if (!(textBox_id->Text->Length > 0 && textBox_id->Text->Length < 4))
    {
       correctData = false;
        return;
    }
    for (int i = 0; i < textBox_id->Text->Length; i++)
    {
        if (!(textBox_id->Text[i] >= '0' && textBox_id->Text[i] <= '9'))
        {
            correctData = false;
            return;
        }
    }

    ///

    String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    dbConnection->Open();
    String^ query = "SELECT number FROM [table] WHERE number LIKE "+ textBox_id->Text;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

    if (!(dbReader->HasRows == false))
    {
        correctData = false;
        return;
    }
     
    dbReader->Close();
    dbConnection->Close();

    ////////
    
    if (textBox_fam->Text->Length == 0)
    {
        correctData = false;
        return;
    }
    ////////

    if (textBox_nam->Text->Length == 0)
    {
        correctData = false;
        return;
    }
    ////////

    if (textBox_fac->Text->Length == 0)
    {
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_kyrs->Text->Length == 1 && textBox_id->Text[0] >= '0' && textBox_id->Text[0] <= '9'))
    {
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4))
    {
        correctData = false;
        return;
    }
    for (int i = 0; i < textBox_room->Text->Length; i++)
    {
        if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
        {
            correctData = false;
            return;
        }
    }
    ////////

    if (!(textBox_phone->Text->Length > 0 && textBox_phone->Text->Length < 12))
    {
      correctData = false;
        return;  
    }
    for (int i = 0; i < textBox_phone->Text->Length; i++)
    {
        if (!(textBox_phone->Text[i] >= '0' && textBox_phone->Text[i] <= '9'))
        {
            correctData = false;
            return;
        }
    }
    return;
}