#pragma once

namespace Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Access
	/// </summary>
	public ref class Access : public System::Windows::Forms::Form
	{
	public:
		Access(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Access()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel_RoomNumber;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox_RoomNumber;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_RoomNumber;
	private: System::Windows::Forms::DataGridView^ dataGridView_Access;
	private: System::Windows::Forms::Button^ button_���������;
	private: System::Windows::Forms::Button^ button_��������;
	private: System::Windows::Forms::Button^ button_��������;
	private: System::Windows::Forms::Button^ button_�������;
	private: System::Windows::Forms::PictureBox^ pictureBox_Access;







	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ family;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ facul;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ kyrs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ room;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone;









	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Access::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel_RoomNumber = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox_RoomNumber = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton_RoomNumber = (gcnew System::Windows::Forms::ToolStripButton());
			this->dataGridView_Access = (gcnew System::Windows::Forms::DataGridView());
			this->button_��������� = (gcnew System::Windows::Forms::Button());
			this->button_�������� = (gcnew System::Windows::Forms::Button());
			this->button_�������� = (gcnew System::Windows::Forms::Button());
			this->button_������� = (gcnew System::Windows::Forms::Button());
			this->pictureBox_Access = (gcnew System::Windows::Forms::PictureBox());
			this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->room = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->kyrs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->facul = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->family = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Access))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Access))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1025, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Access::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(54, 21);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Access::����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Access::�����ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripLabel_RoomNumber,
					this->toolStripTextBox_RoomNumber, this->toolStripButton_RoomNumber
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 565);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1025, 27);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Access::toolStrip1_ItemClicked);
			// 
			// toolStripLabel_RoomNumber
			// 
			this->toolStripLabel_RoomNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripLabel_RoomNumber->Name = L"toolStripLabel_RoomNumber";
			this->toolStripLabel_RoomNumber->Size = System::Drawing::Size(183, 24);
			this->toolStripLabel_RoomNumber->Text = L"������� ����� �������:";
			// 
			// toolStripTextBox_RoomNumber
			// 
			this->toolStripTextBox_RoomNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->toolStripTextBox_RoomNumber->Name = L"toolStripTextBox_RoomNumber";
			this->toolStripTextBox_RoomNumber->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripTextBox_RoomNumber->Size = System::Drawing::Size(100, 27);
			// 
			// toolStripButton_RoomNumber
			// 
			this->toolStripButton_RoomNumber->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton_RoomNumber->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_RoomNumber.Image")));
			this->toolStripButton_RoomNumber->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_RoomNumber->Name = L"toolStripButton_RoomNumber";
			this->toolStripButton_RoomNumber->Size = System::Drawing::Size(23, 24);
			this->toolStripButton_RoomNumber->Text = L"toolStripButton1";
			this->toolStripButton_RoomNumber->Click += gcnew System::EventHandler(this, &Access::toolStripButton_RoomNumber_Click);
			// 
			// dataGridView_Access
			// 
			this->dataGridView_Access->AllowUserToAddRows = false;
			this->dataGridView_Access->AllowUserToDeleteRows = false;
			this->dataGridView_Access->AllowUserToResizeColumns = false;
			this->dataGridView_Access->AllowUserToResizeRows = false;
			this->dataGridView_Access->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Access->BackgroundColor = System::Drawing::SystemColors::MenuBar;
			this->dataGridView_Access->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView_Access->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Access->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Access->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Access->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->number,
					this->family, this->name, this->facul, this->kyrs, this->room, this->phone
			});
			this->dataGridView_Access->Cursor = System::Windows::Forms::Cursors::IBeam;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_Access->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_Access->Enabled = false;
			this->dataGridView_Access->GridColor = System::Drawing::SystemColors::Window;
			this->dataGridView_Access->Location = System::Drawing::Point(12, 40);
			this->dataGridView_Access->MultiSelect = false;
			this->dataGridView_Access->Name = L"dataGridView_Access";
			this->dataGridView_Access->ShowCellErrors = false;
			this->dataGridView_Access->ShowCellToolTips = false;
			this->dataGridView_Access->ShowEditingIcon = false;
			this->dataGridView_Access->ShowRowErrors = false;
			this->dataGridView_Access->Size = System::Drawing::Size(1001, 388);
			this->dataGridView_Access->TabIndex = 2;
			// 
			// button_���������
			// 
			this->button_���������->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_���������.BackgroundImage")));
			this->button_���������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_���������->Location = System::Drawing::Point(27, 446);
			this->button_���������->Name = L"button_���������";
			this->button_���������->Size = System::Drawing::Size(250, 48);
			this->button_���������->TabIndex = 3;
			this->button_���������->Text = L"�������� ���������� � �����";
			this->button_���������->UseVisualStyleBackColor = true;
			this->button_���������->Click += gcnew System::EventHandler(this, &Access::button_���������_Click);
			// 
			// button_��������
			// 
			this->button_��������->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_��������.BackgroundImage")));
			this->button_��������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_��������->Location = System::Drawing::Point(283, 446);
			this->button_��������->Name = L"button_��������";
			this->button_��������->Size = System::Drawing::Size(250, 48);
			this->button_��������->TabIndex = 4;
			this->button_��������->Text = L"�������������� ������ ��������";
			this->button_��������->UseVisualStyleBackColor = true;
			this->button_��������->Click += gcnew System::EventHandler(this, &Access::button_��������_Click);
			// 
			// button_��������
			// 
			this->button_��������->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_��������.BackgroundImage")));
			this->button_��������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_��������->Location = System::Drawing::Point(27, 500);
			this->button_��������->Name = L"button_��������";
			this->button_��������->Size = System::Drawing::Size(250, 48);
			this->button_��������->TabIndex = 5;
			this->button_��������->Text = L"�������� �������� � ����";
			this->button_��������->UseVisualStyleBackColor = true;
			this->button_��������->Click += gcnew System::EventHandler(this, &Access::button_��������_Click);
			// 
			// button_�������
			// 
			this->button_�������->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_�������.BackgroundImage")));
			this->button_�������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_�������->Location = System::Drawing::Point(283, 500);
			this->button_�������->Name = L"button_�������";
			this->button_�������->Size = System::Drawing::Size(250, 48);
			this->button_�������->TabIndex = 6;
			this->button_�������->Text = L"������� �������� �� ����";
			this->button_�������->UseVisualStyleBackColor = true;
			this->button_�������->Click += gcnew System::EventHandler(this, &Access::button_�������_Click);
			// 
			// pictureBox_Access
			// 
			this->pictureBox_Access->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Access.BackgroundImage")));
			this->pictureBox_Access->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Access.Image")));
			this->pictureBox_Access->Location = System::Drawing::Point(565, 434);
			this->pictureBox_Access->Name = L"pictureBox_Access";
			this->pictureBox_Access->Size = System::Drawing::Size(448, 114);
			this->pictureBox_Access->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Access->TabIndex = 7;
			this->pictureBox_Access->TabStop = false;
			// 
			// phone
			// 
			this->phone->HeaderText = L"����� ��������";
			this->phone->Name = L"phone";
			// 
			// room
			// 
			this->room->HeaderText = L"�������";
			this->room->Name = L"room";
			// 
			// kyrs
			// 
			this->kyrs->HeaderText = L"����";
			this->kyrs->Name = L"kyrs";
			// 
			// facul
			// 
			this->facul->HeaderText = L"���������";
			this->facul->Name = L"facul";
			// 
			// name
			// 
			this->name->HeaderText = L"���";
			this->name->Name = L"name";
			// 
			// family
			// 
			this->family->HeaderText = L" �������";
			this->family->Name = L"family";
			// 
			// number
			// 
			this->number->HeaderText = L"ID ��������";
			this->number->Name = L"number";
			// 
			// Access
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1025, 592);
			this->Controls->Add(this->pictureBox_Access);
			this->Controls->Add(this->button_�������);
			this->Controls->Add(this->button_��������);
			this->Controls->Add(this->button_��������);
			this->Controls->Add(this->button_���������);
			this->Controls->Add(this->dataGridView_Access);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1041, 631);
			this->MinimumSize = System::Drawing::Size(1041, 631);
			this->Name = L"Access";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Baza NNGY";
			this->Load += gcnew System::EventHandler(this, &Access::Access_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Access))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Access))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_���������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_��������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_��������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_�������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripButton_RoomNumber_Click(System::Object^ sender, System::EventArgs^ e);
private:System::Void Example::Access::PrintStudentRoom(String^& queryRoom);
private: System::Void Access_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
