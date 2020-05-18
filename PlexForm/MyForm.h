#pragma once
#include <string>
#include"TPoint.h"
#include"TLine.h"
#include<vector>
#include"Plex.h"
namespace PlexForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	std::vector<TPoint*> Dots;
	std::vector<TLine*> Lines;
	Plex* pl;
	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(750, 13);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(783, 624);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pict_MouseDown);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(54, 74);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(259, 252);
			this->dataGridView1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(399, 74);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(259, 252);
			this->dataGridView2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(280, 558);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 28);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Сохранить в файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 399);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 17);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Начальная точка";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(198, 399);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 17);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Конечная точка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(396, 399);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Имя точки";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(551, 399);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 24;
			this->label2->Text = L"X";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(621, 399);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 17);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Y";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(601, 420);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(57, 22);
			this->textBox5->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(200, 420);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(113, 22);
			this->textBox4->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(531, 420);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 22);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(399, 420);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 22);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 420);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 22);
			this->textBox1->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(90, 476);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 28);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Нарисовать линию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(437, 476);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 28);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Переместить точку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1546, 650);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics^ g;
		Bitmap^ Im;
		SolidBrush^ Brush;
		int DotN = -1;

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!Lines.size()) return;

		pl = new Plex(Lines[0]);
		for (int i = 1; i < Lines.size(); i++) {
			pl->addLine(Lines[i]);
		}
		pl->saveFile();

		PrintLinesDataGrid();
	}
			

	 void PrintDotsDataGrid() {
				 dataGridView1->RowCount = Dots.size();
				 dataGridView1->ColumnCount = 3;
				 dataGridView1->Columns[0]->HeaderCell->Value = "NameOfPoint";
				 dataGridView1->Columns[1]->HeaderCell->Value = "x";
				 dataGridView1->Columns[2]->HeaderCell->Value = "x";
				 for (int i = 0; i < Dots.size(); i++) {
					 System::String^ strCLR2 = gcnew System::String(Dots[i]->to_string().c_str());
					 dataGridView1->Rows[i]->Cells[0]->Value = strCLR2;
					 dataGridView1->Rows[i]->Cells[1]->Value = System::Convert::ToString(Dots[i]->GetX());
					 dataGridView1->Rows[i]->Cells[2]->Value = System::Convert::ToString(Dots[i]->GetY());
				 }
			 }
			 std::string TranslateTo26(int x) {
				 std::string ans;
				 while (x) {
					 ans += char(x % 26 + 'A');
					 x /= 26;
				 }
				 std::reverse(ans.begin(), ans.end());
				 if (ans.size() == 0) {
					 ans += 'A';
				 }
				 return ans;
			 }
			 void DrawDots() {
				 for (int i = 0; i < Dots.size(); i++) {
					 delete g;
					 g = Graphics::FromImage(Im);
					 pictureBox1->Image = Im;
					 Dots[i]->Draw(g);
					 pictureBox1->Refresh();
					 pictureBox1->Invalidate();
				 }
			 }

			 void DrawLines() {
				 for (int i = 0; i < Lines.size(); i++) {
					 delete g;
					 g = Graphics::FromImage(Im);
					 pictureBox1->Image = Im;
					 Lines[i]->Draw(g);
					 pictureBox1->Refresh();
					 pictureBox1->Invalidate();
				 }
			 }
			 std::string GenerateNewName() {
				 return TranslateTo26(++DotN);
			 }
			 int FindNameInDots(std::string s) {
				 for (int i = 0; i < Dots.size(); i++) {
					 if (Dots[i]->GetName() == s) return i;
				 }
				 return -1;
			 }

			 void ClearPictureBox() {
				 Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
				 g->Clear(Color::White);
				 pictureBox1->Image = Im;
				 pictureBox1->Refresh();
				 pictureBox1->Invalidate();
			 }
			 System::Void pict_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

				 int X = e->X;
				 int Y = e->Y;
				 std::string name = GenerateNewName();

				 Dots.push_back(new TPoint(X, Y, name));

				 PrintDotsDataGrid();
				 DrawDots();
			 }
			 void PrintLinesDataGrid() {
				 dataGridView2->RowCount = Lines.size();
				 dataGridView2->ColumnCount = 5;
				 dataGridView2->Columns[0]->HeaderCell->Value = "Name";
				 dataGridView2->Columns[1]->HeaderCell->Value = "x0";
				 dataGridView2->Columns[2]->HeaderCell->Value = "y0";
				 dataGridView2->Columns[3]->HeaderCell->Value = "x1";
				 dataGridView2->Columns[4]->HeaderCell->Value = "y1";
				 for (int i = 0; i < Lines.size(); i++) {
					 System::String^ strCLR2 = gcnew System::String(Lines[i]->to_string().c_str());
					 dataGridView2->Rows[i]->Cells[0]->Value = strCLR2;
					 dataGridView2->Rows[i]->Cells[1]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetX());
					 dataGridView2->Rows[i]->Cells[2]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetY());
					 dataGridView2->Rows[i]->Cells[3]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetX());
					 dataGridView2->Rows[i]->Cells[4]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetY());
				 }
			}
	

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string sbf1;
	MarshalString(textBox2->Text, sbf1);


	std::string NamePointToMove = sbf1;

	int dx = System::Convert::ToInt32(textBox3->Text);
	int dy = System::Convert::ToInt32(textBox5->Text);
	int index = FindNameInDots(NamePointToMove);


	if (pl) {
		TPoint* find = pl->SearchPoint(NamePointToMove);

		if (find) {
			find->MovePoint(dx, dy);
		}
		pl->saveFile();

	}
	Dots[index]->MovePoint(dx, dy);
	if (Dots.size()) PrintDotsDataGrid();
	if (Lines.size()) PrintLinesDataGrid();

	ClearPictureBox();

	DrawLines();
	DrawDots();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string N1;
	std::string N2;
	MarshalString(textBox1->Text, N1);
	MarshalString(textBox4->Text, N2);
	int ind1 = FindNameInDots(N1);
	int ind2 = FindNameInDots(N2);

	std::string NLine = N1 + ' ' + N2;
	Lines.push_back(new TLine(Dots[ind1], Dots[ind2]));
	DrawLines();
	PrintLinesDataGrid();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
	g = Graphics::FromImage(Im);
	pictureBox1->Image = Im;
}
};
}
