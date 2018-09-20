#pragma once
#include <ctime>
#include <cstdlib>
#include <string>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tlp_page;
	protected:

	private: System::Windows::Forms::DataGridView^  dgv_Array;
	private: System::Windows::Forms::TableLayoutPanel^  tlp_btns;
	private: System::Windows::Forms::Button^  pbt_Generate;
	private: System::Windows::Forms::Button^  pbt_getLastPositive;

	private: System::Windows::Forms::Label^  lb_Text;
	private: System::Windows::Forms::Label^  lb_value;
	private: System::Windows::Forms::TextBox^  tb_arX;
	private: System::Windows::Forms::TextBox^  tb_arY;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tlp_page = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dgv_Array = (gcnew System::Windows::Forms::DataGridView());
			this->tlp_btns = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pbt_Generate = (gcnew System::Windows::Forms::Button());
			this->pbt_getLastPositive = (gcnew System::Windows::Forms::Button());
			this->lb_Text = (gcnew System::Windows::Forms::Label());
			this->lb_value = (gcnew System::Windows::Forms::Label());
			this->tb_arX = (gcnew System::Windows::Forms::TextBox());
			this->tb_arY = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());

			this->tlp_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Array))->BeginInit();
			this->tlp_btns->SuspendLayout();
			this->SuspendLayout();
			// 
			// tlp_page
			// 
			this->tlp_page->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tlp_page->ColumnCount = 1;
			this->tlp_page->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlp_page->Controls->Add(this->dgv_Array, 0, 0);
			this->tlp_page->Controls->Add(this->tlp_btns, 0, 1);
			this->tlp_page->Location = System::Drawing::Point(12, 12);
			this->tlp_page->Name = L"tlp_page";
			this->tlp_page->RowCount = 2;
			this->tlp_page->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlp_page->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_page->Size = System::Drawing::Size(421, 297);
			this->tlp_page->TabIndex = 0;
			// 
			// dgv_Array
			// 
			this->dgv_Array->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgv_Array->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgv_Array->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Array->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgv_Array->Location = System::Drawing::Point(3, 3);
			this->dgv_Array->Name = L"dgv_Array";
			this->dgv_Array->Size = System::Drawing::Size(415, 192);
			this->dgv_Array->TabIndex = 0;
			// 
			// tlp_btns
			// 
			this->tlp_btns->AutoSize = true;
			this->tlp_btns->ColumnCount = 2;
			this->tlp_btns->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlp_btns->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlp_btns->Controls->Add(this->pbt_Generate, 0, 2);
			this->tlp_btns->Controls->Add(this->pbt_getLastPositive, 1, 2);
			this->tlp_btns->Controls->Add(this->lb_Text, 0, 3);
			this->tlp_btns->Controls->Add(this->lb_value, 1, 3);
			this->tlp_btns->Controls->Add(this->tb_arX, 0, 1);
			this->tlp_btns->Controls->Add(this->tb_arY, 1, 1);
			this->tlp_btns->Controls->Add(this->label1, 0, 0);
			this->tlp_btns->Controls->Add(this->label2, 1, 0);
			this->tlp_btns->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlp_btns->Location = System::Drawing::Point(3, 201);
			this->tlp_btns->Name = L"tlp_btns";
			this->tlp_btns->RowCount = 4;
			this->tlp_btns->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_btns->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_btns->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_btns->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_btns->Size = System::Drawing::Size(415, 93);
			this->tlp_btns->TabIndex = 1;
			// 
			// pbt_Generate
			// 
			this->pbt_Generate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbt_Generate->Location = System::Drawing::Point(3, 48);
			this->pbt_Generate->Name = L"pbt_Generate";
			this->pbt_Generate->Size = System::Drawing::Size(201, 23);
			this->pbt_Generate->TabIndex = 0;
			this->pbt_Generate->Text = L"Generate array";
			this->pbt_Generate->UseVisualStyleBackColor = true;
			this->pbt_Generate->Click += gcnew System::EventHandler(this, &MyForm::pbt_Generate_Click);
			// 
			// pbt_getLastPositive
			// 
			this->pbt_getLastPositive->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pbt_getLastPositive->Location = System::Drawing::Point(210, 48);
			this->pbt_getLastPositive->Name = L"pbt_getLastPositive";
			this->pbt_getLastPositive->Size = System::Drawing::Size(202, 23);
			this->pbt_getLastPositive->TabIndex = 1;
			this->pbt_getLastPositive->Text = L"Get last positive number";
			this->pbt_getLastPositive->UseVisualStyleBackColor = true;
			this->pbt_getLastPositive->Click += gcnew System::EventHandler(this, &MyForm::pbt_getLastPositive_Click);
			// 
			// lb_Text
			// 
			this->lb_Text->AutoSize = true;
			this->lb_Text->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lb_Text->Location = System::Drawing::Point(3, 77);
			this->lb_Text->Margin = System::Windows::Forms::Padding(3);
			this->lb_Text->Name = L"lb_Text";
			this->lb_Text->Size = System::Drawing::Size(201, 13);
			this->lb_Text->TabIndex = 2;
			this->lb_Text->Text = L"Last positive number:";
			// 
			// lb_value
			// 
			this->lb_value->AutoSize = true;
			this->lb_value->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lb_value->Location = System::Drawing::Point(210, 77);
			this->lb_value->Margin = System::Windows::Forms::Padding(3);
			this->lb_value->Name = L"lb_value";
			this->lb_value->Size = System::Drawing::Size(202, 13);
			this->lb_value->TabIndex = 3;
			this->lb_value->Text = L"Not counted";
			// 
			// tb_arX
			// 
			this->tb_arX->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tb_arX->Location = System::Drawing::Point(3, 22);
			this->tb_arX->Name = L"tb_arX";
			this->tb_arX->Size = System::Drawing::Size(201, 20);
			this->tb_arX->TabIndex = 4;
			// 
			// tb_arY
			// 
			this->tb_arY->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tb_arY->Location = System::Drawing::Point(210, 22);
			this->tb_arY->Name = L"tb_arY";
			this->tb_arY->Size = System::Drawing::Size(202, 20);
			this->tb_arY->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Array X size:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(210, 3);
			this->label2->Margin = System::Windows::Forms::Padding(3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Array Y size:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 321);
			this->Controls->Add(this->tlp_page);
			this->Name = L"MyForm";
			this->Text = L"First lab";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tlp_page->ResumeLayout(false);
			this->tlp_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Array))->EndInit();
			this->tlp_btns->ResumeLayout(false);
			this->tlp_btns->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pbt_Generate_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tb_arX->Text == "" || tb_arY->Text == "") {
		MessageBox::Show("You are not speciafied array size!", "Generation failed");
	}
	else {
		std::srand(std::time(0));
		dgv_Array->Rows->Clear();
		int X = Convert::ToInt32(tb_arX->Text);
		int Y = Convert::ToInt32(tb_arY->Text);

		dgv_Array->ColumnCount = X;
		dgv_Array->RowCount = Y;

		for (int dy = 0; dy < Y; ++dy) {
			for (int dx = 0; dx < X; ++dx) {
				dgv_Array->Rows[dy]->Cells[dx]->Value = rand() % 2000 - 1000;
			}
		}

		lb_value->Text = "Not Counted";
	}
}

private: System::Void pbt_getLastPositive_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgv_Array->RowCount == 0 || dgv_Array->ColumnCount == 0) {
		MessageBox::Show("You are not generated array!", "Processing failed");
	}
	else {
		int X = dgv_Array->ColumnCount;
		int Y = dgv_Array->RowCount;
		int idx = -1,idy = -1;
		for (int dy = 0; dy < Y; ++dy) {
			for (int dx = 0; dx < X; ++dx) {
				int val = Convert::ToInt32(dgv_Array->Rows[dy]->Cells[dx]->Value);
				if (val > 0) {
					idx = dx;
					idy = dy;
				}
			}
		}
		if (idx == -1 || idy == -1) lb_value->Text = "Not found";
		else {
			lb_value->Text = String::Format("{0} ({1};{2})",
				dgv_Array->Rows[idy]->Cells[idx]->Value,
				idx+1, idy+1);
		}
	}
}
};
}
