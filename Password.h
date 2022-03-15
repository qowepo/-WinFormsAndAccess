#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Password
	/// </summary>
	public ref class Password : public System::Windows::Forms::Form
	{
	public:
		Password(void)
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
		~Password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelPassrord;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	protected:

	private: System::Windows::Forms::Button^ buttonPassword;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Password::typeid));
			this->labelPassrord = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonPassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelPassrord
			// 
			this->labelPassrord->AutoSize = true;
			this->labelPassrord->BackColor = System::Drawing::Color::Transparent;
			this->labelPassrord->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPassrord->Location = System::Drawing::Point(21, 19);
			this->labelPassrord->Name = L"labelPassrord";
			this->labelPassrord->Size = System::Drawing::Size(435, 21);
			this->labelPassrord->TabIndex = 0;
			this->labelPassrord->Text = L"Пожалуйста, введите пароль для получения доступа к БД";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPassword->Location = System::Drawing::Point(82, 62);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(151, 26);
			this->textBoxPassword->TabIndex = 1;
			this->textBoxPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonPassword
			// 
			this->buttonPassword->BackColor = System::Drawing::Color::Transparent;
			this->buttonPassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPassword.BackgroundImage")));
			this->buttonPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonPassword->Font = (gcnew System::Drawing::Font(L"Sitka Text", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPassword->Location = System::Drawing::Point(281, 58);
			this->buttonPassword->Name = L"buttonPassword";
			this->buttonPassword->Size = System::Drawing::Size(115, 34);
			this->buttonPassword->TabIndex = 2;
			this->buttonPassword->Text = L"Bвод";
			this->buttonPassword->UseVisualStyleBackColor = false;
			this->buttonPassword->Click += gcnew System::EventHandler(this, &Password::buttonPassword_Click);
			// 
			// Password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(478, 112);
			this->Controls->Add(this->buttonPassword);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelPassrord);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(494, 151);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(494, 151);
			this->Name = L"Password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аутентификация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonPassword_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
