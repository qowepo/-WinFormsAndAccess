#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ????????????ToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ ????AccessToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????ToolStripMenuItem;

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::PictureBox^ pictureBox_main;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->????????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->????AccessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			pictureBox_main = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox_main))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox_main
			// 
			pictureBox_main->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			pictureBox_main->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_main.Image")));
			pictureBox_main->Location = System::Drawing::Point(-51, 27);
			pictureBox_main->MaximumSize = System::Drawing::Size(1041, 631);
			pictureBox_main->MinimumSize = System::Drawing::Size(1041, 631);
			pictureBox_main->Name = L"pictureBox_main";
			pictureBox_main->Size = System::Drawing::Size(1041, 631);
			pictureBox_main->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			pictureBox_main->TabIndex = 1;
			pictureBox_main->TabStop = false;
			pictureBox_main->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox_main_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->????????????ToolStripMenuItem,
					this->????AccessToolStripMenuItem, this->?????ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(933, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ????????????ToolStripMenuItem
			// 
			this->????????????ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->????????????ToolStripMenuItem->Name = L"????????????ToolStripMenuItem";
			this->????????????ToolStripMenuItem->Size = System::Drawing::Size(73, 21);
			this->????????????ToolStripMenuItem->Text = L"K??????";
			this->????????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::????????????ToolStripMenuItem_Click);
			// 
			// ????AccessToolStripMenuItem
			// 
			this->????AccessToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->????AccessToolStripMenuItem->Name = L"????AccessToolStripMenuItem";
			this->????AccessToolStripMenuItem->Size = System::Drawing::Size(90, 21);
			this->????AccessToolStripMenuItem->Text = L"???? Access";
			this->????AccessToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::????AccessToolStripMenuItem_Click);
			// 
			// ?????ToolStripMenuItem
			// 
			this->?????ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->?????ToolStripMenuItem->Name = L"?????ToolStripMenuItem";
			this->?????ToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->?????ToolStripMenuItem->Text = L"?????";
			this->?????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::?????ToolStripMenuItem_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 613);
			this->Controls->Add(pictureBox_main);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1761, 1527);
			this->MinimumSize = System::Drawing::Size(761, 527);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NNGY";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox_main))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void ????AccessToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ?????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox_main_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void ????????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
