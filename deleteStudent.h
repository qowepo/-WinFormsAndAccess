#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для deleteStudent
	/// </summary>
	public ref class deleteStudent : public System::Windows::Forms::Form
	{
	public:
		deleteStudent(void)
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
		~deleteStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_Delete;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_Delete;
	private: System::Windows::Forms::Button^ button_nDelete;
	private: System::Windows::Forms::Button^ button_Deleted;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(deleteStudent::typeid));
			this->label_Delete = (gcnew System::Windows::Forms::Label());
			this->textBox_Delete = (gcnew System::Windows::Forms::TextBox());
			this->button_nDelete = (gcnew System::Windows::Forms::Button());
			this->button_Deleted = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Delete
			// 
			this->label_Delete->AutoSize = true;
			this->label_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Delete->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_Delete->Location = System::Drawing::Point(23, 31);
			this->label_Delete->Name = L"label_Delete";
			this->label_Delete->Size = System::Drawing::Size(267, 20);
			this->label_Delete->TabIndex = 0;
			this->label_Delete->Text = L"Введите ID удаляемого студента";
			// 
			// textBox_Delete
			// 
			this->textBox_Delete->Location = System::Drawing::Point(117, 70);
			this->textBox_Delete->Name = L"textBox_Delete";
			this->textBox_Delete->Size = System::Drawing::Size(75, 20);
			this->textBox_Delete->TabIndex = 1;
			// 
			// button_nDelete
			// 
			this->button_nDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_nDelete->Location = System::Drawing::Point(27, 132);
			this->button_nDelete->Name = L"button_nDelete";
			this->button_nDelete->Size = System::Drawing::Size(96, 27);
			this->button_nDelete->TabIndex = 2;
			this->button_nDelete->Text = L"Отмена";
			this->button_nDelete->UseVisualStyleBackColor = true;
			this->button_nDelete->Click += gcnew System::EventHandler(this, &deleteStudent::button_nDelete_Click);
			// 
			// button_Deleted
			// 
			this->button_Deleted->Location = System::Drawing::Point(194, 132);
			this->button_Deleted->MaximumSize = System::Drawing::Size(96, 27);
			this->button_Deleted->MinimumSize = System::Drawing::Size(96, 27);
			this->button_Deleted->Name = L"button_Deleted";
			this->button_Deleted->Size = System::Drawing::Size(96, 27);
			this->button_Deleted->TabIndex = 3;
			this->button_Deleted->Text = L"Готово";
			this->button_Deleted->UseVisualStyleBackColor = true;
			this->button_Deleted->Click += gcnew System::EventHandler(this, &deleteStudent::button_Deleted_Click);
			// 
			// deleteStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 171);
			this->Controls->Add(this->button_Deleted);
			this->Controls->Add(this->button_nDelete);
			this->Controls->Add(this->textBox_Delete);
			this->Controls->Add(this->label_Delete);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(321, 210);
			this->MinimumSize = System::Drawing::Size(321, 210);
			this->Name = L"deleteStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Удаление данных о студенте";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_nDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Deleted_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeletePhoto(String^& IdStudentPhotoDelete);
};
}
