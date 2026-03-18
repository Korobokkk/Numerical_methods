#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ TabControlGlobal;
	private: System::Windows::Forms::TabPage^ Source1;
	private: System::Windows::Forms::TabPage^ Source2;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TabControl^ TabControlDown;
	private: System::Windows::Forms::TabPage^ tablepage1;
	private: System::Windows::Forms::TabPage^ tablepage2;





	private: System::Windows::Forms::TabControl^ TabControlPlot;
	private: System::Windows::Forms::TabPage^ PlotPage1;
	private: System::Windows::Forms::TabPage^ PlotPage2;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ Sourse3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ inputN;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;










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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->TabControlGlobal = (gcnew System::Windows::Forms::TabControl());
			this->Source1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TabControlPlot = (gcnew System::Windows::Forms::TabControl());
			this->PlotPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->PlotPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->inputN = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->TabControlDown = (gcnew System::Windows::Forms::TabControl());
			this->tablepage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tablepage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Source2 = (gcnew System::Windows::Forms::TabPage());
			this->Sourse3 = (gcnew System::Windows::Forms::TabPage());
			this->TabControlGlobal->SuspendLayout();
			this->Source1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->TabControlPlot->SuspendLayout();
			this->PlotPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->PlotPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->TabControlDown->SuspendLayout();
			this->tablepage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tablepage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// TabControlGlobal
			// 
			this->TabControlGlobal->Controls->Add(this->Source1);
			this->TabControlGlobal->Controls->Add(this->Source2);
			this->TabControlGlobal->Controls->Add(this->Sourse3);
			this->TabControlGlobal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabControlGlobal->Location = System::Drawing::Point(0, 0);
			this->TabControlGlobal->Name = L"TabControlGlobal";
			this->TabControlGlobal->SelectedIndex = 0;
			this->TabControlGlobal->Size = System::Drawing::Size(1572, 795);
			this->TabControlGlobal->TabIndex = 0;
			// 
			// Source1
			// 
			this->Source1->Controls->Add(this->tableLayoutPanel1);
			this->Source1->Location = System::Drawing::Point(4, 29);
			this->Source1->Name = L"Source1";
			this->Source1->Padding = System::Windows::Forms::Padding(3);
			this->Source1->Size = System::Drawing::Size(1564, 762);
			this->Source1->TabIndex = 0;
			this->Source1->Text = L"ProblemA";
			this->Source1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->TabControlDown, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 70)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1558, 756);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tableLayoutPanel1_Paint);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->TabControlPlot, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 523)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 523)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1552, 523);
			this->tableLayoutPanel2->TabIndex = 1;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tableLayoutPanel2_Paint);
			// 
			// TabControlPlot
			// 
			this->TabControlPlot->Controls->Add(this->PlotPage1);
			this->TabControlPlot->Controls->Add(this->PlotPage2);
			this->TabControlPlot->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabControlPlot->Location = System::Drawing::Point(779, 3);
			this->TabControlPlot->Name = L"TabControlPlot";
			this->TabControlPlot->SelectedIndex = 0;
			this->TabControlPlot->Size = System::Drawing::Size(770, 517);
			this->TabControlPlot->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->TabControlPlot->TabIndex = 0;
			// 
			// PlotPage1
			// 
			this->PlotPage1->Controls->Add(this->chart1);
			this->PlotPage1->Location = System::Drawing::Point(4, 29);
			this->PlotPage1->Name = L"PlotPage1";
			this->PlotPage1->Padding = System::Windows::Forms::Padding(3);
			this->PlotPage1->Size = System::Drawing::Size(762, 484);
			this->PlotPage1->TabIndex = 0;
			this->PlotPage1->Text = L"Plot1";
			this->PlotPage1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(756, 478);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// PlotPage2
			// 
			this->PlotPage2->Controls->Add(this->chart2);
			this->PlotPage2->Location = System::Drawing::Point(4, 29);
			this->PlotPage2->Name = L"PlotPage2";
			this->PlotPage2->Padding = System::Windows::Forms::Padding(3);
			this->PlotPage2->Size = System::Drawing::Size(762, 484);
			this->PlotPage2->TabIndex = 1;
			this->PlotPage2->Text = L"Plot2";
			this->PlotPage2->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			this->chart2->Dock = System::Windows::Forms::DockStyle::Fill;
			legend4->Name = L"Legend1";
			this->chart2->Legends->Add(legend4);
			this->chart2->Location = System::Drawing::Point(3, 3);
			this->chart2->Name = L"chart2";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(756, 478);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->inputN, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox3, 2, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 451);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(770, 69);
			this->tableLayoutPanel3->TabIndex = 1;
			this->tableLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tableLayoutPanel3_Paint_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(120, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 51);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// inputN
			// 
			this->inputN->AutoSize = true;
			this->inputN->Dock = System::Windows::Forms::DockStyle::Fill;
			this->inputN->Location = System::Drawing::Point(157, 0);
			this->inputN->Name = L"inputN";
			this->inputN->Size = System::Drawing::Size(107, 51);
			this->inputN->TabIndex = 2;
			this->inputN->Text = L"N";
			this->inputN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 26);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(157, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 26);
			this->textBox3->TabIndex = 5;
			// 
			// TabControlDown
			// 
			this->TabControlDown->Controls->Add(this->tablepage1);
			this->TabControlDown->Controls->Add(this->tablepage2);
			this->TabControlDown->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabControlDown->Location = System::Drawing::Point(3, 532);
			this->TabControlDown->Name = L"TabControlDown";
			this->TabControlDown->SelectedIndex = 0;
			this->TabControlDown->Size = System::Drawing::Size(1552, 221);
			this->TabControlDown->TabIndex = 1;
			// 
			// tablepage1
			// 
			this->tablepage1->BackColor = System::Drawing::Color::Transparent;
			this->tablepage1->Controls->Add(this->dataGridView1);
			this->tablepage1->Location = System::Drawing::Point(4, 29);
			this->tablepage1->Name = L"tablepage1";
			this->tablepage1->Padding = System::Windows::Forms::Padding(3);
			this->tablepage1->Size = System::Drawing::Size(1544, 188);
			this->tablepage1->TabIndex = 0;
			this->tablepage1->Text = L"Table1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1538, 182);
			this->dataGridView1->TabIndex = 0;
			// 
			// tablepage2
			// 
			this->tablepage2->Controls->Add(this->dataGridView2);
			this->tablepage2->Location = System::Drawing::Point(4, 29);
			this->tablepage2->Name = L"tablepage2";
			this->tablepage2->Padding = System::Windows::Forms::Padding(3);
			this->tablepage2->Size = System::Drawing::Size(1544, 188);
			this->tablepage2->TabIndex = 1;
			this->tablepage2->Text = L"Table2";
			this->tablepage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1538, 182);
			this->dataGridView2->TabIndex = 0;
			// 
			// Source2
			// 
			this->Source2->Location = System::Drawing::Point(4, 29);
			this->Source2->Name = L"Source2";
			this->Source2->Padding = System::Windows::Forms::Padding(3);
			this->Source2->Size = System::Drawing::Size(1564, 762);
			this->Source2->TabIndex = 1;
			this->Source2->Text = L"ProblemB";
			this->Source2->UseVisualStyleBackColor = true;
			// 
			// Sourse3
			// 
			this->Sourse3->Location = System::Drawing::Point(4, 29);
			this->Sourse3->Name = L"Sourse3";
			this->Sourse3->Size = System::Drawing::Size(1564, 762);
			this->Sourse3->TabIndex = 2;
			this->Sourse3->Text = L"ProblemC";
			this->Sourse3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1572, 795);
			this->Controls->Add(this->TabControlGlobal);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->TabControlGlobal->ResumeLayout(false);
			this->Source1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->TabControlPlot->ResumeLayout(false);
			this->PlotPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->PlotPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->TabControlDown->ResumeLayout(false);
			this->tablepage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tablepage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
