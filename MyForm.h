#pragma once

namespace BalancedBrackets {


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

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Balanced Brackets";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(350, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(211, 216);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Insert a string of brackets to check if it is balanced.";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(391, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 119);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Two brackets are considered to be a matched pair if the an opening bracket (, [, "
				L"or { occurs to the left of a closing bracket  ), ], or } of the exact same type."
				L" \r\n";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(208, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(376, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"No valid string inserted.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(92, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 119);
			this->label4->TabIndex = 7;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(760, 340);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//upon pressing the button

		Stack s1;
		String ^s = textBox1->Text;
		for (int i = 0; i<5; i++)
		{
			if (s1.Count==0)
			{
				s1.Push(s[i]);
				continue;
			}
			if ((s1.Peek() == '{' &&  s[i] == '}') || (s1.Peek() == '[' && s[i] == ']') || (s1.Peek() == '(' && s[i] == ')'))
			{
				s1.Pop();
			}
			else
			{
				s1.Push(s[i]);
			}
		}
		if (s1.Count!=0)
		{
			label3->Text = "No, this is not a balanced string.";
		}
		else
		{
			label3->Text = "Yes, this is a balanced string.";
		}
	}



};
}
