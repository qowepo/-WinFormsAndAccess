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
    if (!correctData)
    {
        return System::Void();
    }

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
    try 
    {
        bool GoodSave = true;
        SavePhoto(room, id, GoodSave);
        if (GoodSave == false)
            throw -1;
        String^ query = "INSERT INTO [table] VALUES (" + id + ", '" + fam + "', '" + name + "', '" + facul + "', "
            + kyrs + ", " + room + ", " + phone + ")";
        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

        if (dbCommand->ExecuteNonQuery() == 1)
        {
            MessageBox::Show("������� ������� ��������!" + "\n"
                + "�������� ���������� � �����!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }
    catch (int a){}

    catch(...)
    {
        MessageBox::Show("������ ���������� ������� �� ����������!" + "\n"
            + "�������� �� ���� ��������������� �������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    addStudent::Hide();
    dbConnection->Close();
    return System::Void();
}


System::Void Example::addStudent::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("ID �������� ������ ���� ��������������, �������� � �� ����� ����� 3-� ��������!"
        + "\n" + "������ � ��������, ������ � ����������� �������� �� ����� ���� �������!"
        + "\n" + "���� �������� 1-��������� �����!"
        + "\n" + "����� ������� �����, �� ����� 4 ��������!"
        + "\n" + "����� �������� 11-��������� �����!",      
        "��������� ��� ������ ���������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
    return;
}


System::Void Example::addStudent::button_AddFoto_Click(System::Object^ sender, System::EventArgs^ e)
{
    OpenFileDialog^ ofd = gcnew OpenFileDialog();

    ofd->Filter = "Image Files(*.BMP; *.JPG; *.GIF; *.PNG)|*.BMP; *.JPG; *.GIF; *.PNG| All files(*.*)|*.*";
    if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        try 
        {
            pictureBox_AddFoto->Image = gcnew Bitmap(ofd->FileName);
        }
        catch(...)
        {
            MessageBox::Show("���������� ������� ��������� ����!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
    }
    return System::Void();
}


System::Void Example::addStudent::SavePhoto(String^& room, String^& id, bool& GoodSave)
{
    try {
        String^ folderName = "img";
        String^ pathString = System::IO::Path::Combine(folderName, room);
        System::IO::Directory::CreateDirectory(pathString);
        pictureBox_AddFoto->Image->Save("img/" + room + "/" + id + ".jpg");
    }
    catch (...)
    {
        MessageBox::Show("�� ������� ��������� ����!"+"\n"+"��������� ��������� 'img' � ����� ���������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        GoodSave = false;
    }
    return System::Void();
}


System::Void Example::addStudent::Protect(bool& correctData)
{
    if (!(textBox_id->Text->Length > 0 && textBox_id->Text->Length < 4))
    {
        MessageBox::Show("����������� ID ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
       correctData = false;
        return;
    }
    for (int i = 0; i < textBox_id->Text->Length; i++)
    {
        if (!(textBox_id->Text[i] >= '0' && textBox_id->Text[i] <= '9'))
        {
            MessageBox::Show("����������� ID ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            correctData = false;
            return;
        }
    }

    String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=baza_88.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    dbConnection->Open();
    String^ query = "SELECT number FROM [table] WHERE number LIKE "+ textBox_id->Text;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

    if (!(dbReader->HasRows == false))
    {
        MessageBox::Show("ID �������� ��� ������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
     
    dbReader->Close();
    dbConnection->Close();

    ////////
    
    if (textBox_fam->Text->Length == 0)
    {
        MessageBox::Show("����������� ������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (textBox_nam->Text->Length == 0)
    {
        MessageBox::Show("����������� ��� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (textBox_fac->Text->Length == 0)
    {
        MessageBox::Show("����������� �������� ��������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_kyrs->Text->Length == 1 && textBox_id->Text[0] >= '0' && textBox_id->Text[0] <= '9'))
    {
        MessageBox::Show("����������� ����� ����� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    ////////

    if (!(textBox_room->Text->Length > 0 && textBox_room->Text->Length <= 4))
    {
        MessageBox::Show("����������� ����� ������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }
    for (int i = 0; i < textBox_room->Text->Length; i++)
    {
        if (!(textBox_room->Text[i] >= '0' && textBox_room->Text[i] <= '9'))
        {
            MessageBox::Show("����������� ����� ������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            correctData = false;
            return;
        }
    }
    ////////

    if (textBox_phone->Text->Length != 11)
    {
        MessageBox::Show("����������� ����� �������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;  
    }
    for (int i = 0; i < 11; i++)
    {
        if (!(textBox_phone->Text[i] >= '0' && textBox_phone->Text[i] <= '9'))
        {
            MessageBox::Show("����������� ����� �������� ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            correctData = false;
            return;
        }
    }
    ////////

    if (pictureBox_AddFoto->Image == nullptr)
    {
        MessageBox::Show("�������� ���� ��������!" + "\n"
            + "������������� ��������� 7:5", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        correctData = false;
        return;
    }

    return;
}