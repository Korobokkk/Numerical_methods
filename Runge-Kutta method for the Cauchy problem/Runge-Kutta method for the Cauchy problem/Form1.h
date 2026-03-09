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
		MainTask^ sourse;

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
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ TestProblem;



	private: System::Windows::Forms::TabPage^ MainProblem;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ eps;

	private: System::Windows::Forms::TextBox^ max_iter;

	private: System::Windows::Forms::TextBox^ x_0;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ x_end;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ start_h;

	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::CheckBox^ IsDinamicStep2;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ u_f_d;



	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ k;
	private: System::Windows::Forms::TextBox^ k_second;


	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ u_0;

	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ m;
	private: System::Windows::Forms::TextBox^ c;


	private: System::Windows::Forms::TextBox^ textBox27;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TestProblem = (gcnew System::Windows::Forms::TabPage());
			this->MainProblem = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->x_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->u_f_d = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::TextBox());
			this->k_second = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->u_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->eps = (gcnew System::Windows::Forms::TextBox());
			this->max_iter = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->x_end = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->start_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->IsDinamicStep2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->TestProblem->SuspendLayout();
			this->MainProblem->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 720);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1873, 246);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(1324, 676);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 39);
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
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
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
			this->panel1->Controls->Add(this->EpsilonInput);
			this->panel1->Controls->Add(this->U0Input);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->X0Input);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->XEndInput);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->HInput);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->IsDinamicStepChoose);
			this->panel1->Location = System::Drawing::Point(20, 614);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(749, 100);
			this->panel1->TabIndex = 13;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea10->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->chart1->Legends->Add(legend10);
			this->chart1->Location = System::Drawing::Point(71, 45);
			this->chart1->Name = L"chart1";
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series19->Color = System::Drawing::Color::Red;
			series19->Legend = L"Legend1";
			series19->Name = L"Приближенное значение";
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series20->Color = System::Drawing::Color::Blue;
			series20->Legend = L"Legend1";
			series20->Name = L"Истинное значение";
			this->chart1->Series->Add(series19);
			this->chart1->Series->Add(series20);
			this->chart1->Size = System::Drawing::Size(1431, 512);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1883, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(0, 0);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(200, 100);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"tabPage2";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TestProblem);
			this->tabControl1->Controls->Add(this->MainProblem);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1897, 988);
			this->tabControl1->TabIndex = 16;
			// 
			// TestProblem
			// 
			this->TestProblem->Controls->Add(this->dataGridView1);
			this->TestProblem->Controls->Add(this->toolStrip1);
			this->TestProblem->Controls->Add(this->button1);
			this->TestProblem->Controls->Add(this->chart1);
			this->TestProblem->Controls->Add(this->panel1);
			this->TestProblem->Location = System::Drawing::Point(4, 22);
			this->TestProblem->Name = L"TestProblem";
			this->TestProblem->Padding = System::Windows::Forms::Padding(3);
			this->TestProblem->Size = System::Drawing::Size(1889, 962);
			this->TestProblem->TabIndex = 0;
			this->TestProblem->Text = L"Test Problem";
			this->TestProblem->UseVisualStyleBackColor = true;
			this->TestProblem->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// MainProblem
			// 
			this->MainProblem->Controls->Add(this->chart3);
			this->MainProblem->Controls->Add(this->chart2);
			this->MainProblem->Controls->Add(this->panel2);
			this->MainProblem->Controls->Add(this->button2);
			this->MainProblem->Controls->Add(this->dataGridView2);
			this->MainProblem->Location = System::Drawing::Point(4, 22);
			this->MainProblem->Name = L"MainProblem";
			this->MainProblem->Padding = System::Windows::Forms::Padding(3);
			this->MainProblem->Size = System::Drawing::Size(1889, 962);
			this->MainProblem->TabIndex = 1;
			this->MainProblem->Text = L"MainProblem";
			this->MainProblem->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			this->chart3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea11->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chart3->Legends->Add(legend11);
			this->chart3->Location = System::Drawing::Point(944, 6);
			this->chart3->Name = L"chart3";
			series21->ChartArea = L"ChartArea1";
			series21->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series21->Color = System::Drawing::Color::Red;
			series21->Legend = L"Legend1";
			series21->Name = L"Приближенное значение";
			series22->ChartArea = L"ChartArea1";
			series22->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series22->Color = System::Drawing::Color::Blue;
			series22->Legend = L"Legend1";
			series22->Name = L"Истинное значение";
			this->chart3->Series->Add(series21);
			this->chart3->Series->Add(series22);
			this->chart3->Size = System::Drawing::Size(945, 638);
			this->chart3->TabIndex = 16;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea12->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chart2->Legends->Add(legend12);
			this->chart2->Location = System::Drawing::Point(3, 6);
			this->chart2->Name = L"chart2";
			series23->ChartArea = L"ChartArea1";
			series23->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series23->Color = System::Drawing::Color::Red;
			series23->Legend = L"Legend1";
			series23->Name = L"Приближенное значение";
			series24->ChartArea = L"ChartArea1";
			series24->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series24->Color = System::Drawing::Color::Blue;
			series24->Legend = L"Legend1";
			series24->Name = L"Истинное значение";
			this->chart2->Series->Add(series23);
			this->chart2->Series->Add(series24);
			this->chart2->Size = System::Drawing::Size(936, 638);
			this->chart2->TabIndex = 15;
			this->chart2->Text = L"chart2";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->panel2->Controls->Add(this->textBox16);
			this->panel2->Controls->Add(this->m);
			this->panel2->Controls->Add(this->c);
			this->panel2->Controls->Add(this->textBox27);
			this->panel2->Controls->Add(this->x_0);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->u_f_d);
			this->panel2->Controls->Add(this->textBox18);
			this->panel2->Controls->Add(this->k);
			this->panel2->Controls->Add(this->k_second);
			this->panel2->Controls->Add(this->textBox22);
			this->panel2->Controls->Add(this->textBox23);
			this->panel2->Controls->Add(this->u_0);
			this->panel2->Controls->Add(this->textBox25);
			this->panel2->Controls->Add(this->eps);
			this->panel2->Controls->Add(this->max_iter);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->x_end);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->start_h);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->IsDinamicStep2);
			this->panel2->Location = System::Drawing::Point(6, 610);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1684, 100);
			this->panel2->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox16->Location = System::Drawing::Point(3, 60);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 22;
			this->textBox16->Text = L"m";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// m
			// 
			this->m->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->m->Location = System::Drawing::Point(3, 77);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(100, 20);
			this->m->TabIndex = 21;
			this->m->Text = L"0,01";
			this->m->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->m->TextChanged += gcnew System::EventHandler(this, &Form1::m_TextChanged);
			// 
			// c
			// 
			this->c->BackColor = System::Drawing::SystemColors::Info;
			this->c->Location = System::Drawing::Point(100, 77);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(100, 20);
			this->c->TabIndex = 23;
			this->c->Text = L"0,15";
			this->c->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::SystemColors::Info;
			this->textBox27->Location = System::Drawing::Point(100, 60);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 24;
			this->textBox27->Text = L"c";
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// x_0
			// 
			this->x_0->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->x_0->Location = System::Drawing::Point(590, 77);
			this->x_0->Name = L"x_0";
			this->x_0->Size = System::Drawing::Size(100, 20);
			this->x_0->TabIndex = 2;
			this->x_0->Text = L"0,0";
			this->x_0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox6->Location = System::Drawing::Point(590, 60);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 3;
			this->textBox6->Text = L"x_0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// u_f_d
			// 
			this->u_f_d->BackColor = System::Drawing::SystemColors::Info;
			this->u_f_d->Location = System::Drawing::Point(490, 77);
			this->u_f_d->Name = L"u_f_d";
			this->u_f_d->Size = System::Drawing::Size(100, 20);
			this->u_f_d->TabIndex = 19;
			this->u_f_d->Text = L"0,0";
			this->u_f_d->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox18->Location = System::Drawing::Point(199, 60);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 14;
			this->textBox18->Text = L"k";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// k
			// 
			this->k->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->k->Location = System::Drawing::Point(199, 77);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(100, 20);
			this->k->TabIndex = 13;
			this->k->Text = L"2,0";
			this->k->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// k_second
			// 
			this->k_second->BackColor = System::Drawing::SystemColors::Info;
			this->k_second->Location = System::Drawing::Point(296, 77);
			this->k_second->Name = L"k_second";
			this->k_second->Size = System::Drawing::Size(100, 20);
			this->k_second->TabIndex = 15;
			this->k_second->Text = L"2,0";
			this->k_second->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::SystemColors::Info;
			this->textBox22->Location = System::Drawing::Point(296, 60);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 16;
			this->textBox22->Text = L"k*";
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::SystemColors::Info;
			this->textBox23->Location = System::Drawing::Point(490, 60);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 20;
			this->textBox23->Text = L"u`(x_0)";
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// u_0
			// 
			this->u_0->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->u_0->Location = System::Drawing::Point(393, 77);
			this->u_0->Name = L"u_0";
			this->u_0->Size = System::Drawing::Size(100, 20);
			this->u_0->TabIndex = 17;
			this->u_0->Text = L"10,0";
			this->u_0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox25->Location = System::Drawing::Point(393, 60);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 18;
			this->textBox25->Text = L"u(x_0)";
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &Form1::textBox25_TextChanged);
			// 
			// eps
			// 
			this->eps->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->eps->Location = System::Drawing::Point(976, 77);
			this->eps->Name = L"eps";
			this->eps->Size = System::Drawing::Size(100, 20);
			this->eps->TabIndex = 10;
			this->eps->Text = L"0,00000001";
			this->eps->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// max_iter
			// 
			this->max_iter->BackColor = System::Drawing::SystemColors::Info;
			this->max_iter->Location = System::Drawing::Point(881, 77);
			this->max_iter->Name = L"max_iter";
			this->max_iter->Size = System::Drawing::Size(100, 20);
			this->max_iter->TabIndex = 8;
			this->max_iter->Text = L"10000";
			this->max_iter->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox10->Location = System::Drawing::Point(976, 60);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"Epsilon:";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// x_end
			// 
			this->x_end->BackColor = System::Drawing::SystemColors::Info;
			this->x_end->Location = System::Drawing::Point(687, 77);
			this->x_end->Name = L"x_end";
			this->x_end->Size = System::Drawing::Size(100, 20);
			this->x_end->TabIndex = 4;
			this->x_end->Text = L"1,0";
			this->x_end->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Info;
			this->textBox12->Location = System::Drawing::Point(687, 60);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 5;
			this->textBox12->Text = L"x_end";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Info;
			this->textBox13->Location = System::Drawing::Point(881, 60);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 9;
			this->textBox13->Text = L"Max Iter";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// start_h
			// 
			this->start_h->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->start_h->Location = System::Drawing::Point(784, 77);
			this->start_h->Name = L"start_h";
			this->start_h->Size = System::Drawing::Size(100, 20);
			this->start_h->TabIndex = 6;
			this->start_h->Text = L"0,01";
			this->start_h->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox15->Location = System::Drawing::Point(784, 60);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 7;
			this->textBox15->Text = L"Шаг (h):";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// IsDinamicStep2
			// 
			this->IsDinamicStep2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->IsDinamicStep2->Location = System::Drawing::Point(1082, 60);
			this->IsDinamicStep2->Name = L"IsDinamicStep2";
			this->IsDinamicStep2->Size = System::Drawing::Size(162, 37);
			this->IsDinamicStep2->TabIndex = 12;
			this->IsDinamicStep2->Text = L"Адаптивность шага";
			this->IsDinamicStep2->UseVisualStyleBackColor = false;
			this->IsDinamicStep2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(1742, 668);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Расчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(-5, 716);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1898, 246);
			this->dataGridView2->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1897, 988);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"/";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->TestProblem->ResumeLayout(false);
			this->TestProblem->PerformLayout();
			this->MainProblem->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

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

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->DataSource = nullptr;

		double m_in = Double::Parse(m->Text);
		double c_in = Double::Parse(c->Text);
		double k_in = Double::Parse(k->Text);
		double k_second_in = Double::Parse(k_second->Text);
		double u_0_in = Double::Parse(u_0->Text);
		double u_f_d_in = Double::Parse(u_f_d->Text);
		double x_0_in = Double::Parse(x_0->Text);
		double x_end_in = Double::Parse(x_end->Text);
		double start_h_in = Double::Parse(start_h->Text);
		int max_operation_in = INT::Parse(max_iter->Text);
		double epsilon_in = Double::Parse(eps->Text);
		bool IsDinamicStep_in = IsDinamicStep2->Checked;


		sourse = gcnew MainTask(m_in, c_in, k_in, k_second_in, u_0_in, u_f_d_in, x_0_in, x_end_in, start_h_in, max_operation_in, epsilon_in, IsDinamicStep_in );
		sourse->MRK4();
 		//solver = gcnew Sample(2, x0, xend, h, u0, eps, check_dinamic);
		//solver->MethodRungeKutta();

		dataGridView2->AutoGenerateColumns = true;
		dataGridView2->DataSource = sourse->MainResults;
		dataGridView2->RowHeadersVisible = false;
		dataGridView2->AutoSizeColumnsMode =
			DataGridViewAutoSizeColumnsMode::Fill;
		int n = dataGridView2->Columns->Count;

		for (int i = 0; i < n; i++)
		{
			dataGridView2->Columns[i]->DisplayIndex = n - i - 1;
		}

		/*chart1->Series["Приближенное значение"]->Points->Clear();
		chart1->Series["Истинное значение"]->Points->Clear();

		for each (StepResult ^ r in solver->results)
		{
			chart1->Series["Приближенное значение"]->Points->AddXY(r->x, r->u_approximate);
			chart1->Series["Истинное значение"]->Points->AddXY(r->x, r->u_true);
		}*/
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
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void m_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
	
}
