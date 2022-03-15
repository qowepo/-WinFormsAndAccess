#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Student(void)
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
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ главнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ label_room;
	private: System::Windows::Forms::TextBox^ textBox_room;
	private: System::Windows::Forms::Button^ button_room;
	private: System::Windows::Forms::GroupBox^ groupBox_room;
	private: System::Windows::Forms::TabControl^ tabControl1;

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->главнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_room = (gcnew System::Windows::Forms::Label());
			this->textBox_room = (gcnew System::Windows::Forms::TextBox());
			this->button_room = (gcnew System::Windows::Forms::Button());
			this->groupBox_room = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->groupBox_room->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->главнаяToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1025, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// главнаяToolStripMenuItem
			// 
			this->главнаяToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->главнаяToolStripMenuItem->Name = L"главнаяToolStripMenuItem";
			this->главнаяToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->главнаяToolStripMenuItem->Text = L"Главная";
			this->главнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Student::главнаяToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Student::выходToolStripMenuItem_Click);
			// 
			// label_room
			// 
			this->label_room->AutoSize = true;
			this->label_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_room->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label_room->Location = System::Drawing::Point(6, 16);
			this->label_room->Name = L"label_room";
			this->label_room->Size = System::Drawing::Size(170, 16);
			this->label_room->TabIndex = 1;
			this->label_room->Text = L"Введите номер комнаты:";
			// 
			// textBox_room
			// 
			this->textBox_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_room->Location = System::Drawing::Point(182, 13);
			this->textBox_room->Name = L"textBox_room";
			this->textBox_room->Size = System::Drawing::Size(74, 22);
			this->textBox_room->TabIndex = 2;
			// 
			// button_room
			// 
			this->button_room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_room->Location = System::Drawing::Point(262, 11);
			this->button_room->Name = L"button_room";
			this->button_room->Size = System::Drawing::Size(38, 26);
			this->button_room->TabIndex = 3;
			this->button_room->Text = L"OK";
			this->button_room->UseVisualStyleBackColor = true;
			this->button_room->Click += gcnew System::EventHandler(this, &Student::button_room_Click);
			// 
			// groupBox_room
			// 
			this->groupBox_room->Controls->Add(this->label_room);
			this->groupBox_room->Controls->Add(this->button_room);
			this->groupBox_room->Controls->Add(this->textBox_room);
			this->groupBox_room->Location = System::Drawing::Point(708, 40);
			this->groupBox_room->Name = L"groupBox_room";
			this->groupBox_room->Size = System::Drawing::Size(306, 43);
			this->groupBox_room->TabIndex = 4;
			this->groupBox_room->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Location = System::Drawing::Point(10, 89);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1004, 491);
			this->tabControl1->TabIndex = 5;
			this->tabControl1->Visible = false;
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1025, 592);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox_room);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1041, 631);
			this->MinimumSize = System::Drawing::Size(1041, 631);
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rooms";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox_room->ResumeLayout(false);
			this->groupBox_room->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void главнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   System::Void Example::Student::PrintStudentRoom(int& NumberRoom) { NumberRoom++; }

	private: System::Void button_room_Click(System::Object^ sender, System::EventArgs^ e);
		   private: System::Void Example::Student::PrintStudentRoom(String^& queryRoom);
};
}
