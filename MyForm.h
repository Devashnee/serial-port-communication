#pragma once

namespace serialportcommunication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			FindPorts();
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
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 500;
			this->serialPort1->WriteTimeout = 500;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(389, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(389, 84);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(329, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"baud rate ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(327, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"com ports ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(389, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"int port";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(389, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"close port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(46, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(236, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"received here";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(46, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(236, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"enter here";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(46, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"send ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(127, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"read ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(46, 34);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"port status ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 261);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void		FindPorts(void)
	{
		array<Object^>^objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray);
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 //init the port
	private: System ::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->textBox1->Text = String::Empty;
		if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty)
			this->textBox1->Text = "Please Select Port Settings";
		else {
			try{
				// make sure port isn't open	
				if (!this->serialPort1->IsOpen){
					this->serialPort1->PortName = this->comboBox1->Text;
					//this->textBox1->Text=this->comboBox1->Text;
					this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
					//this->textBox1->Text=this->comboBox2->Text;
					this->textBox2->Text = "Enter Message Here";
					//open serial port 
					this->serialPort1->Open();
					this->progressBar1->Value = 100;
				}
				else
					this->textBox2->Text = "Port isn't openned";
			}
			catch (UnauthorizedAccessException^){
				this->textBox1->Text = "UnauthorizedAccess";
			}
		}

	}
			 //close the port 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//close serialPort
	this->serialPort1->Close();
	// update progress bar
	this->progressBar1->Value = 0;
	// Enable read button
	this->button4->Enabled = true;
	// Enable the init button
	this->button1->Enabled = true;
	// ovalShape
	// this->ovalShape1->FillColor = Color::Red;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// add sender name
	String^ name = this->serialPort1->PortName;
	// grab text and store in send buffer
	String^ message = this->textBox2->Text;
	// write to serial
	if (this->serialPort1->IsOpen)
		//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
		this->serialPort1->WriteLine(message);
	else
		this->textBox2->Text = "Port Not Opened";


	// check if port is ready for reading
	if (this->serialPort1->IsOpen){
		// Reset the text in the result label.
		this->textBox1->Text = String::Empty;

		// this will read manually
		try{
			this->textBox1->Text = this->serialPort1->ReadLine();
		}
		catch (TimeoutException^){
			this->textBox1->Text = "Timeout Exception";
		}
		// Disable the init button
		// the asynchronous operation is done.
		this->button1->Enabled = false;

		//this->ovalShape1->FillColor = Color::Green;
	}

}
		 //read button 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	// check if port is ready for reading
	if (this->serialPort1->IsOpen){
		// Reset the text in the result label.
		this->textBox1->Text = String::Empty;

		// this will read manually
		try{
			this->textBox1->Text = this->serialPort1->ReadLine();
		}
		catch (TimeoutException^){
			this->textBox1->Text = "Timeout Exception";
		}
		// Disable the init button
		// the asynchronous operation is done.
		this->button1->Enabled = false;

		//this->ovalShape1->FillColor = Color::Green;
	}
	else
		// give error warning
		this->textBox1->Text = "Port Not Opened";
}
};
}
