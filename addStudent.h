#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для addStudent
	/// </summary>
	public ref class addStudent : public System::Windows::Forms::Form
	{
	public:
		addStudent(void)
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
		~addStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1_add;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::TextBox^ textBox_kyrs;
	private: System::Windows::Forms::TextBox^ textBox_room;
	private: System::Windows::Forms::TextBox^ textBox_fac;
	private: System::Windows::Forms::TextBox^ textBox_nam;
	private: System::Windows::Forms::TextBox^ textBox_fam;
	private: System::Windows::Forms::TextBox^ textBox_phone;
	private: System::Windows::Forms::Button^ button_nAdd;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ помоощьToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addStudent::typeid));
			this->label1_add = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->textBox_kyrs = (gcnew System::Windows::Forms::TextBox());
			this->textBox_room = (gcnew System::Windows::Forms::TextBox());
			this->textBox_fac = (gcnew System::Windows::Forms::TextBox());
			this->textBox_nam = (gcnew System::Windows::Forms::TextBox());
			this->textBox_fam = (gcnew System::Windows::Forms::TextBox());
			this->textBox_phone = (gcnew System::Windows::Forms::TextBox());
			this->button_nAdd = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помоощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1_add
			// 
			this->label1_add->AutoSize = true;
			this->label1_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_add->Location = System::Drawing::Point(40, 39);
			this->label1_add->Name = L"label1_add";
			this->label1_add->Size = System::Drawing::Size(218, 15);
			this->label1_add->TabIndex = 0;
			this->label1_add->Text = L"Введите ID добавляемого студента:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите имя студента:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(40, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите  фамилию студента:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(40, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите курс студента:";
			this->label3->Click += gcnew System::EventHandler(this, &addStudent::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(40, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введите комнату студента:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(40, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Введите факультет студента:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(40, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Введите телефон студента:";
			// 
			// textBox_id
			// 
			this->textBox_id->Location = System::Drawing::Point(264, 38);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(162, 20);
			this->textBox_id->TabIndex = 6;
			// 
			// textBox_kyrs
			// 
			this->textBox_kyrs->Location = System::Drawing::Point(264, 188);
			this->textBox_kyrs->Name = L"textBox_kyrs";
			this->textBox_kyrs->Size = System::Drawing::Size(162, 20);
			this->textBox_kyrs->TabIndex = 7;
			// 
			// textBox_room
			// 
			this->textBox_room->Location = System::Drawing::Point(264, 229);
			this->textBox_room->Name = L"textBox_room";
			this->textBox_room->Size = System::Drawing::Size(162, 20);
			this->textBox_room->TabIndex = 8;
			// 
			// textBox_fac
			// 
			this->textBox_fac->Location = System::Drawing::Point(264, 149);
			this->textBox_fac->Name = L"textBox_fac";
			this->textBox_fac->Size = System::Drawing::Size(162, 20);
			this->textBox_fac->TabIndex = 9;
			// 
			// textBox_nam
			// 
			this->textBox_nam->Location = System::Drawing::Point(264, 114);
			this->textBox_nam->Name = L"textBox_nam";
			this->textBox_nam->Size = System::Drawing::Size(162, 20);
			this->textBox_nam->TabIndex = 10;
			// 
			// textBox_fam
			// 
			this->textBox_fam->Location = System::Drawing::Point(264, 76);
			this->textBox_fam->Name = L"textBox_fam";
			this->textBox_fam->Size = System::Drawing::Size(162, 20);
			this->textBox_fam->TabIndex = 11;
			// 
			// textBox_phone
			// 
			this->textBox_phone->Location = System::Drawing::Point(264, 269);
			this->textBox_phone->Name = L"textBox_phone";
			this->textBox_phone->Size = System::Drawing::Size(162, 20);
			this->textBox_phone->TabIndex = 12;
			// 
			// button_nAdd
			// 
			this->button_nAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_nAdd->Location = System::Drawing::Point(43, 304);
			this->button_nAdd->Name = L"button_nAdd";
			this->button_nAdd->Size = System::Drawing::Size(105, 30);
			this->button_nAdd->TabIndex = 13;
			this->button_nAdd->Text = L"Отмена";
			this->button_nAdd->UseVisualStyleBackColor = true;
			this->button_nAdd->Click += gcnew System::EventHandler(this, &addStudent::button_nAdd_Click);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(321, 304);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(105, 30);
			this->button_add->TabIndex = 14;
			this->button_add->Text = L"Готово";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &addStudent::button_add_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помоощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(466, 24);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помоощьToolStripMenuItem
			// 
			this->помоощьToolStripMenuItem->Name = L"помоощьToolStripMenuItem";
			this->помоощьToolStripMenuItem->Size = System::Drawing::Size(174, 20);
			this->помоощьToolStripMenuItem->Text = L"Инструкция по заполнению";
			this->помоощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &addStudent::помоощьToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// addStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 351);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_nAdd);
			this->Controls->Add(this->textBox_phone);
			this->Controls->Add(this->textBox_fam);
			this->Controls->Add(this->textBox_nam);
			this->Controls->Add(this->textBox_fac);
			this->Controls->Add(this->textBox_room);
			this->Controls->Add(this->textBox_kyrs);
			this->Controls->Add(this->textBox_id);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label1_add);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(482, 390);
			this->MinimumSize = System::Drawing::Size(482, 390);
			this->Name = L"addStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить студента в базу";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void button_nAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Example::addStudent::Protect(bool & correctData);
private: System::Void помоощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
