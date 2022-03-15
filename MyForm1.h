#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ íîìåğÊîìíàòûToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ áàçàAccessToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::PictureBox^ pictureBox_main;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íîìåğÊîìíàòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áàçàAccessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->íîìåğÊîìíàòûToolStripMenuItem,
					this->áàçàAccessToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(933, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íîìåğÊîìíàòûToolStripMenuItem
			// 
			this->íîìåğÊîìíàòûToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->íîìåğÊîìíàòûToolStripMenuItem->Name = L"íîìåğÊîìíàòûToolStripMenuItem";
			this->íîìåğÊîìíàòûToolStripMenuItem->Size = System::Drawing::Size(73, 21);
			this->íîìåğÊîìíàòûToolStripMenuItem->Text = L"Kîìíàòû";
			this->íîìåğÊîìíàòûToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::íîìåğÊîìíàòûToolStripMenuItem_Click);
			// 
			// áàçàAccessToolStripMenuItem
			// 
			this->áàçàAccessToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->áàçàAccessToolStripMenuItem->Name = L"áàçàAccessToolStripMenuItem";
			this->áàçàAccessToolStripMenuItem->Size = System::Drawing::Size(90, 21);
			this->áàçàAccessToolStripMenuItem->Text = L"Áàçà Access";
			this->áàçàAccessToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::áàçàAccessToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::âûõîäToolStripMenuItem_Click);
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

private: System::Void áàçàAccessToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox_main_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void íîìåğÊîìíàòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
