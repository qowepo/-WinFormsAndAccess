#include "correctStudent.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

System::Void Example::correctStudent::инструкцияПоЗаполнениюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("ID студента должен быть индивидуальным, числовым и не иметь более 3-х разрядов! Пункты с ФАМИЛИЕЙ, ИМЕНЕМ и ФАКУЛЬТЕТОМ студента не могут быть пустыми! КУРС студента 1-разрядное число! Номер КОМНАТЫ число, не более 4 разрядов! Номер ТЕЛЕФОНА 11-разрядное число!", "Заполните все пункты корректно!");
    return;
}

System::Void Example::correctStudent::button_nAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    correctStudent::Hide();
}

System::Void Example::correctStudent::button_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool correctData = true;
    Protect(correctData);
    if (correctData)
    {
        String^ id = textBox_id->Text->ToString();
        String^ fam = textBox_family->Text->ToString();
        String^ name = textBox_name->Text->ToString();
        String^ facul = textBox_facul->Text->ToString();
        String^ kyrs = textBox_kyrs->Text->ToString();
        String^ room = textBox_room->Text->ToString();
        String^ phone = textBox_phone->Text->ToString();

        String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
        OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

        dbConnection->Open();
        String^ query = "UPDATE [table] SET family= '" + fam + "', name= '" + name + "', facul= '" + facul + "', kyrs= "
            + kyrs + ", room= " + room + ", phone= " + phone + " WHERE number ="+id;
        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

        if (dbCommand->ExecuteNonQuery() != 1)
        {
            MessageBox::Show("Ошибка выполнения запроса!", "Внимание!");
            dbConnection->Close();
            correctStudent::Hide();
        }
        else
        {
            MessageBox::Show("Данные о студенте успешно скорректированны!", "Готово!");
            dbConnection->Close();
            correctStudent::Hide();
        }

    }
    else
    {
        MessageBox::Show("Введенные данные не корректны!", "Внимание!");
    }
    return System::Void();
}

System::Void Example::correctStudent::button_idOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool correctData = true;
    Protect_id(correctData);
    if (correctData)
    {
        String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
        OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

        dbConnection->Open();
        String^ query = "SELECT number FROM [table] WHERE number LIKE " + textBox_id->Text;
        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
        OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

        if (dbReader->HasRows == false)
        {
            MessageBox::Show("Данного ID нет в базе!", "Внимание!");
            return;
        }
        else
        {
            button_idOK->Visible = false;
            textBox_id->Enabled = false;
            label6->Visible = true;
            label5->Visible = true;
            label4->Visible = true;
            label3->Visible = true;
            label2->Visible = true;
            label1->Visible = true;
            textBox_family->Visible = true;
            textBox_name->Visible = true;
            textBox_facul->Visible = true;
            textBox_kyrs->Visible = true;
            textBox_room->Visible = true;
            textBox_phone->Visible = true;
            button_add->Visible = true;


            String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
            OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

            dbConnection->Open();
            String^ query = "SELECT * FROM [table] WHERE number = " + textBox_id->Text;
            OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
            OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

            if (dbReader->HasRows == false)
            {
                MessageBox::Show("Ошибка чтения данных из базы!", "Внимание!");

            }
            else
            {
                while (dbReader->Read())
                {
                    textBox_family->Text = dbReader["family"]->ToString();
                    textBox_name->Text = dbReader["name"]->ToString();
                    textBox_facul->Text = dbReader["facul"]->ToString();
                    textBox_kyrs->Text = dbReader["kyrs"]->ToString();
                    textBox_room->Text = dbReader["room"]->ToString();
                    textBox_phone->Text = dbReader["phone"]->ToString();

                }

            }

            dbReader->Close();
            dbConnection->Close();
        }
    }
    else 
    {
        MessageBox::Show("Введите корректный ID!", "Внимание!");
        textBox_id->Clear();
    }
}

System::Void Example::correctStudent::Protect_id(bool & correctData)
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
}

System::Void Example::correctStudent::Protect(bool& correctData)
{
    if (textBox_family->Text->Length == 0)
    {
        correctData = false;
        return;
    }
    ////////

    if (textBox_name->Text->Length == 0)
    {
        correctData = false;
        return;
    }
    ////////

    if (textBox_facul->Text->Length == 0)
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