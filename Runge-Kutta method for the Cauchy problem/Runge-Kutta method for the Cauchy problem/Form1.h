#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//solver = gcnew Sample();
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		Sample^ solver;
	private: System::Windows::Forms::TextBox^ X0Input;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ XEndInput;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ HInput;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ U0Input;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ EpsilonInput;
	private: System::Windows::Forms::CheckBox^ IsDinamicStepChoose;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->X0Input = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->XEndInput = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->HInput = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->U0Input = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->EpsilonInput = (gcnew System::Windows::Forms::TextBox());
			this->IsDinamicStepChoose = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(2, 729);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1573, 246);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(1447, 693);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// X0Input
			// 
			this->X0Input->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->X0Input->Location = System::Drawing::Point(14, 77);
			this->X0Input->Name = L"X0Input";
			this->X0Input->Size = System::Drawing::Size(100, 20);
			this->X0Input->TabIndex = 2;
			this->X0Input->Text = L"0,0";
			this->X0Input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->X0Input->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Location = System::Drawing::Point(14, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"x_0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(111, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"x_end";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// XEndInput
			// 
			this->XEndInput->BackColor = System::Drawing::SystemColors::Info;
			this->XEndInput->Location = System::Drawing::Point(111, 77);
			this->XEndInput->Name = L"XEndInput";
			this->XEndInput->Size = System::Drawing::Size(100, 20);
			this->XEndInput->TabIndex = 4;
			this->XEndInput->Text = L"1,0";
			this->XEndInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->XEndInput->TextChanged += gcnew System::EventHandler(this, &Form1::XEndInput_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox5->Location = System::Drawing::Point(208, 60);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"Шаг (h):";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// HInput
			// 
			this->HInput->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->HInput->Location = System::Drawing::Point(208, 77);
			this->HInput->Name = L"HInput";
			this->HInput->Size = System::Drawing::Size(100, 20);
			this->HInput->TabIndex = 6;
			this->HInput->Text = L"0,01";
			this->HInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HInput->TextChanged += gcnew System::EventHandler(this, &Form1::HInput_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Info;
			this->textBox7->Location = System::Drawing::Point(305, 60);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"u_0:";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// U0Input
			// 
			this->U0Input->BackColor = System::Drawing::SystemColors::Info;
			this->U0Input->Location = System::Drawing::Point(305, 77);
			this->U0Input->Name = L"U0Input";
			this->U0Input->Size = System::Drawing::Size(100, 20);
			this->U0Input->TabIndex = 8;
			this->U0Input->Text = L"1,0";
			this->U0Input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->U0Input->TextChanged += gcnew System::EventHandler(this, &Form1::U0Input_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox9->Location = System::Drawing::Point(400, 60);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"Epsilon:";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// EpsilonInput
			// 
			this->EpsilonInput->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EpsilonInput->Location = System::Drawing::Point(400, 77);
			this->EpsilonInput->Name = L"EpsilonInput";
			this->EpsilonInput->Size = System::Drawing::Size(100, 20);
			this->EpsilonInput->TabIndex = 10;
			this->EpsilonInput->Text = L"0,00000001";
			this->EpsilonInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->EpsilonInput->TextChanged += gcnew System::EventHandler(this, &Form1::EpsilonInput_TextChanged);
			// 
			// IsDinamicStepChoose
			// 
			this->IsDinamicStepChoose->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->IsDinamicStepChoose->Location = System::Drawing::Point(506, 60);
			this->IsDinamicStepChoose->Name = L"IsDinamicStepChoose";
			this->IsDinamicStepChoose->Size = System::Drawing::Size(162, 37);
			this->IsDinamicStepChoose->TabIndex = 12;
			this->IsDinamicStepChoose->Text = L"Адаптивность шага";
			this->IsDinamicStepChoose->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->X0Input);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->XEndInput);
			this->panel1->Controls->Add(this->EpsilonInput);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->HInput);
			this->panel1->Controls->Add(this->U0Input);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->IsDinamicStepChoose);
			this->panel1->Location = System::Drawing::Point(2, 623);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(749, 100);
			this->panel1->TabIndex = 13;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 3);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Приближенное значение";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Blue;
			series2->Legend = L"Legend1";
			series2->Name = L"Истинное значение";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1548, 674);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1572, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1572, 977);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"/";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->AutoGenerateColumns = true;
		chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "F2";
		//chart1->ChartAreas[0]->AxisX->Interval = 0.2;
		chart1->ChartAreas[0]->AxisX->Minimum = 0.0;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->DataSource = nullptr;

		double x0 = Double::Parse(X0Input->Text);
		double xend = Double::Parse(XEndInput->Text);
		double h = Double::Parse(HInput->Text);
		double u0 = Double::Parse(U0Input->Text);
		double eps = Double::Parse(EpsilonInput->Text);
		bool check_dinamic = IsDinamicStepChoose->Checked;
		solver = gcnew Sample(2, x0,xend,h,u0,eps,check_dinamic);  
		solver->MethodRungeKutta();

		dataGridView1->AutoGenerateColumns = true;
		dataGridView1->DataSource = solver->results;
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->AutoSizeColumnsMode =
			DataGridViewAutoSizeColumnsMode::Fill;
		int n = dataGridView1->Columns->Count;

		for (int i = 0; i < n; i++)
		{
			dataGridView1->Columns[i]->DisplayIndex = n - i - 1;
		}

		chart1->Series["Приближенное значение"]->Points->Clear();
		chart1->Series["Истинное значение"]->Points->Clear();

		for each (StepResult^ r in solver->results)
		{
			chart1->Series["Приближенное значение"]->Points->AddXY(r->x, r->u_approximate);
			chart1->Series["Истинное значение"]->Points->AddXY(r->x, r->u_true);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void U0Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EpsilonInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void XEndInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
	
}
