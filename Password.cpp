#include "Password.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

System::Void Example::Password::buttonPassword_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (Convert::ToString(textBoxPassword->Text) == "0000") 
    {
		MyForm1^ f = gcnew MyForm1();
		Password::Hide();
		f->Show();
    }
    else
    {
        MessageBox::Show("�� ����� �� ���������� ���� ����� ����!" + "\n" +
            "������: 0000", "�������� ������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
        textBoxPassword->Clear();
    }

    return System::Void();
}
