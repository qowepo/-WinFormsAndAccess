#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для correctStudent
	/// </summary>
	public ref class correctStudent : public System::Windows::Forms::Form
	{
	public:
		correctStudent(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~correctStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ инструкцияПоЗаполнениюToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1_add;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_kyrs;
	private: System::Windows::Forms::TextBox^ textBox_facul;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_family;




	private: System::Windows::Forms::TextBox^ textBox_phone;
	private: System::Windows::Forms::TextBox^ textBox_room;


	private: System::Windows::Forms::Button^ button_nAdd;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_idOK;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(correctStudent::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->инструкцияПоЗаполнениюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1_add = (gcnew System::Windows::Forms::Label());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_kyrs = (gcnew System::Windows::Forms::TextBox());
			this->textBox_facul = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_family = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->textBox_room = (gcnew System::Windows::Forms::TextBox());
			this->button_nAdd = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_idOK = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->инструкцияПоЗаполнениюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(466, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// инструкцияПоЗаполнениюToolStripMenuItem
			// 
			this->инструкцияПоЗаполнениюToolStripMenuItem->Name = L"инструкцияПоЗаполнениюToolStripMenuItem";
			this->инструкцияПоЗаполнениюToolStripMenuItem->Size = System::Drawing::Size(174, 20);
			this->инструкцияПоЗаполнениюToolStripMenuItem->Text = L"Инструкция по заполнению";
			this->инструкцияПоЗаполнениюToolStripMenuItem->Click += gcnew System::EventHandler(this, &correctStudent::инструкцияПоЗаполнениюToolStripMenuItem_Click);
			// 
			// label1_add
			// 
			this->label1_add->AutoSize = true;
			this->label1_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_add->Location = System::Drawing::Point(40, 39);
			this->label1_add->Name = L"label1_add";
			this->label1_add->Size = System::Drawing::Size(181, 15);
			this->label1_add->TabIndex = 1;
			this->label1_add->Text = L"Введите ID нужного студента:";
			// 
			// textBox_id
			// 
			this->textBox_id->Location = System::Drawing::Point(264, 38);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(162, 20);
			this->textBox_id->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введите телефон студента:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(40, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Введите комнату студента:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(40, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Введите курс студента:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(40, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Введите факультет студента:";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(40, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Введите имя студента:";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(40, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 15);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Введите фамилию студента:";
			this->label6->Visible = false;
			// 
			// textBox_kyrs
			// 
			this->textBox_kyrs->Location = System::Drawing::Point(264, 179);
			this->textBox_kyrs->Name = L"textBox_kyrs";
			this->textBox_kyrs->Size = System::Drawing::Size(162, 20);
			this->textBox_kyrs->TabIndex = 14;
			this->textBox_kyrs->Visible = false;
			// 
			// textBox_facul
			// 
			this->textBox_facul->Location = System::Drawing::Point(264, 144);
			this->textBox_facul->Name = L"textBox_facul";
			this->textBox_facul->Size = System::Drawing::Size(162, 20);
			this->textBox_facul->TabIndex = 15;
			this->textBox_facul->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(264, 107);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(162, 20);
			this->textBox_name->TabIndex = 16;
			this->textBox_name->Visible = false;
			// 
			// textBox_family
			// 
			this->textBox_family->Location = System::Drawing::Point(264, 73);
			this->textBox_family->Name = L"textBox_family";
			this->textBox_family->Size = System::Drawing::Size(162, 20);
			this->textBox_family->TabIndex = 17;
			this->textBox_family->Visible = false;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Location = System::Drawing::Point(264, 249);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(162, 20);
			this->textBox_phone->TabIndex = 18;
			this->textBox_phone->Visible = false;
			// 
			// textBox_room
			// 
			this->textBox_room->Location = System::Drawing::Point(264, 215);
			this->textBox_room->Name = L"textBox_room";
			this->textBox_room->Size = System::Drawing::Size(162, 20);
			this->textBox_room->TabIndex = 19;
			this->textBox_room->Visible = false;
			// 
			// button_nAdd
			// 
			this->button_nAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_nAdd->Location = System::Drawing::Point(43, 304);
			this->button_nAdd->Name = L"button_nAdd";
			this->button_nAdd->Size = System::Drawing::Size(105, 30);
			this->button_nAdd->TabIndex = 20;
			this->button_nAdd->Text = L"Отмена";
			this->button_nAdd->UseVisualStyleBackColor = true;
			this->button_nAdd->Click += gcnew System::EventHandler(this, &correctStudent::button_nAdd_Click);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(321, 304);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(105, 30);
			this->button_add->TabIndex = 21;
			this->button_add->Text = L"Готово";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Visible = false;
			this->button_add->Click += gcnew System::EventHandler(this, &correctStudent::button_add_Click);
			// 
			// button_idOK
			// 
			this->button_idOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_idOK->Location = System::Drawing::Point(434, 38);
			this->button_idOK->Name = L"button_idOK";
			this->button_idOK->Size = System::Drawing::Size(20, 20);
			this->button_idOK->TabIndex = 22;
			this->button_idOK->Text = L"ok";
			this->button_idOK->UseVisualStyleBackColor = true;
			this->button_idOK->Click += gcnew System::EventHandler(this, &correctStudent::button_idOK_Click);
			// 
			// correctStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 351);
			this->Controls->Add(this->button_idOK);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_nAdd);
			this->Controls->Add(this->textBox_room);
			this->Controls->Add(this->textBox_phone);
			this->Controls->Add(this->textBox_family);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_facul);
			this->Controls->Add(this->textBox_kyrs);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_id);
			this->Controls->Add(this->label1_add);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(482, 390);
			this->MinimumSize = System::Drawing::Size(482, 390);
			this->Name = L"correctStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обновление данных о студенте";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void инструкцияПоЗаполнениюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_nAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_idOK_Click(System::Object^ sender, System::EventArgs^ e);
	private:   System::Void Example::correctStudent::Protect_id(bool& correctData);
		   private:   System::Void Example::correctStudent::Protect(bool& correctData);
};
}
