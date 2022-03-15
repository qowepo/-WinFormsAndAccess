#include<string>
#include "correctStudent.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

 
System::Void Example::correctStudent::инструкцияПоЗаполнениюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("ID студента должен быть индивидуальным, числовым и не иметь более 3-х разрядов!"
        + "\n" + "Пункты с ФАМИЛИЕЙ, ИМЕНЕМ и ФАКУЛЬТЕТОМ студента не могут быть пустыми!"
        + "\n" + "КУРС студента 1-разрядное число!"
        + "\n" + "Номер КОМНАТЫ число, не более 4 разрядов!"
        + "\n" + "Номер ТЕЛЕФОНА 11-разрядное число!",
        "Заполните все пункты корректно!", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
    if (!correctData)
    {
        return System::Void();
    }

    String^ id = textBox_id->Text->ToString();
    String^ fam = textBox_family->Text->ToString();
    String^ name = textBox_name->Text->ToString();
    String^ facul = textBox_facul->Text->ToString();
    String^ kyrs = textBox_kyrs->Text->ToString();
    String^ room = textBox_room->Text->ToString();
    String^ phone = textBox_phone->Text->ToString();

    String^ IdStudentPhotoDelete = id;
    DeletePhoto(IdStudentPhotoDelete);

     String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
     OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
     dbConnection->Open();

    try
    {
        String^ query = "UPDATE [table] SET family= '" + fam + "', name= '" + name + "', facul= '" + facul + "', kyrs= "
            + kyrs + ", room= " + room + ", phone= " + phone + " WHERE number =" + id;
        OleDbCommand^ dbCommand= gcnew OleDbCommand(query, dbConnection);

        if (dbCommand->ExecuteNonQuery() == 1)
        {
            MessageBox::Show("Данные о студенте успешно скорректированны!" + "\n"
                + "Обновите соединение с базой!", "Готово!", MessageBoxButtons::OK, MessageBoxIcon::Information);
            String^ folderName = "img";
            String^ pathString = System::IO::Path::Combine(folderName, room);
            System::IO::Directory::CreateDirectory(pathString);
            pictureBox_CorFoto->Image->Save("img/" + room + "/" + id + ".jpg");
        }

        
        dbConnection->Close();
    }

    catch (Exception^ ex)
    {
        MessageBox::Show(ex->ToString(), "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Information);
        dbConnection->Close();
    }
        
    correctStudent::Hide();
    return System::Void();
}


System::Void Example::correctStudent::DeletePhoto(String^& IdStudentPhotoDelete)
{
    String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    dbConnection->Open();
    String^ query = "SELECT room FROM [table] WHERE number LIKE " + IdStudentPhotoDelete;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
    String^ AdressPhoto;

    while (dbReader->Read())
    {
        AdressPhoto = "img/" + dbReader["room"] + "/" + IdStudentPhotoDelete + ".jpg";
    }

    try {
        System::IO::File::Delete(AdressPhoto);
    }
    catch (Exception^ ex) { 
        MessageBox::Show(ex->ToString(), "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Information); 
    }

    dbReader->Close();
    dbConnection->Close();
    return System::Void();
}


System::Void Example::correctStudent::button_idOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool correctData = true;
    Protect_id(correctData);
    if (!correctData)
    {
        MessageBox::Show("Введите корректный ID!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        textBox_id->Clear();
        return System::Void();
    }
    String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    dbConnection->Open();
    String^ query = "SELECT number FROM [table] WHERE number LIKE " + textBox_id->Text;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

    if (dbReader->HasRows == false)
    {
        MessageBox::Show("Данного ID нет в базе!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        dbReader->Close();
        dbConnection->Close();
        return System::Void();
    }
    dbReader->Close();
    dbConnection->Close();

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
    button_CorFoto->Visible = true;
    
    OleDbConnection^ dbConnection2 = gcnew OleDbConnection(connectionString);
    dbConnection2->Open();
    String^ query2 = "SELECT * FROM [table] WHERE number = " + textBox_id->Text;
    OleDbCommand^ dbCommand2 = gcnew OleDbCommand(query2, dbConnection2);
    OleDbDataReader^ dbReader2 = dbCommand2->ExecuteReader();

    if (dbReader2->HasRows == false)
    {
        MessageBox::Show("Ошибка чтения данных из базы!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        dbReader2->Close();
        dbConnection2->Close();
        correctStudent::Hide();
        return System::Void();
    }
   
    while (dbReader2->Read())
    {
        textBox_family->Text = dbReader2["family"]->ToString();
        textBox_name->Text = dbReader2["name"]->ToString();
        textBox_facul->Text = dbReader2["facul"]->ToString();
        textBox_kyrs->Text = dbReader2["kyrs"]->ToString();
        textBox_room->Text = dbReader2["room"]->ToString();
        textBox_phone->Text = dbReader2["phone"]->ToString();
    }
     
    dbReader2->Close();
    dbConnection2->Close();
    return System::Void();
}


System::Void Example::correctStudent::PrintPhoto(String^& WayPhoto)
{
    try
    {
        Bitmap^ image1 = gcnew Bitmap(WayPhoto);
        pictureBox_CorFoto->Image = image1;
        
    }
    catch (...)
    {
        MessageBox::Show("Не удалось открыть фото студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    return;
}


System::Void Example::correctStudent::button_CorFoto_Click(System::Object^ sender, System::EventArgs^ e)
{
    OpenFileDialog^ ofd = gcnew OpenFileDialog();
    ofd->Filter = "Image Files(*.BMP; *.JPG; *.GIF; *.PNG)|*.BMP; *.JPG; *.GIF; *.PNG| All files(*.*)|*.*";

    if (ofd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
        return System::Void();

    try
    {
        pictureBox_CorFoto->Image = gcnew Bitmap(ofd->FileName);
        correctStudent::Width = 666;
        correctStudent::Height = 404;
        correctStudent::CenterToScreen();
        correctStudent::FormBorderStyle = Windows::Forms::FormBorderStyle::FixedSingle;
        correctStudent::FormBorderStyle = Windows::Forms::FormBorderStyle::FixedSingle;
        button_add->Left = 502;
        button_CorFoto->Left = 538;
        pictureBox_CorFoto->Visible = true;
       
    }
    catch (...)
    {
        MessageBox::Show("Невозможно открыть выбранный файл!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    
    return System::Void();
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
        MessageBox::Show("Некорретная фамилия студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (textBox_name->Text->Length == 0)
    {
        MessageBox::Show("Некорретное имя студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (textBox_facul->Text->Length == 0)
    {
        MessageBox::Show("Некорретное название факультет студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_kyrs->Text->Length == 1 && textBox_id->Text[0] >= '0' && textBox_id->Text[0] <= '9'))
    {
        MessageBox::Show("Некорретный номер курса студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4))
    {
        MessageBox::Show("Некорретный номер комнаты студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    for (int i = 0; i < textBox_room->Text->Length; i++)
    {
        if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
        {
            MessageBox::Show("Некорретный номер комнаты студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            correctData = false;
            return;
        }
    }
    ////////

    if (textBox_phone->Text->Length != 11)
    {
        MessageBox::Show("Некорретный номер телефона студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    for (int i = 0; i < 11; i++)
    {
        if (!(textBox_phone->Text[i] >= '0' && textBox_phone->Text[i] <= '9'))
        {
            MessageBox::Show("Некорретный номер телефона студента!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            correctData = false;
            return;
        }
    }
    ////////

    if (pictureBox_CorFoto->Image == nullptr)
    {
        MessageBox::Show("Добавьте фото студента!" + "\n"
            + "Рекомендуемое пропорции 7:5", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    
    return;
}