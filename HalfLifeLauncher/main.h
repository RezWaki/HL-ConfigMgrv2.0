#pragma once
#include <stdio.h>
#include <fstream>
#include <regex>
#include <cstring>

namespace HalfLifeLauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parameters:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"-console";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(221, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"New bind";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 63);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(260, 152);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(59, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(28, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Button:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(93, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Command:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 24);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Run Half-Life";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Half-Life config manager";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		

#pragma endregion
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
				 char buffer[1024]; //1024
				 String^ buf2;
				 int totallines;
				 String^ alltex = System::IO::File::ReadAllText("valve\\config.cfg", System::Text::Encoding::ASCII);
				 std::ifstream file("valve\\config.cfg");
				 //to count all cfg lines
				while(file.getline(buffer, 1024)){
					totallines++;
				}
				 /*for(int i = 0; i <= totallines; i++){
					 std::tr1::regex findbind("bind");
					 if(regex_match(alltext.begin(), alltext.end(), findbind)){
						 richTextBox1->Text = richTextBox1->Text+"\n"+System::Convert::ToString(buffer[i]);
					 }
			 }*/
				buf2 = System::Convert::ToString(System::IO::File::ReadAllText("valve\\config.cfg", System::Text::Encoding::Default));
				//file.close();
				//EMTPY:D
				richTextBox1->Text = richTextBox1->Text+"\nTotal lines in config.cfg: "+System::Convert::ToString(totallines);
				richTextBox1->Text = richTextBox1->Text+"\nBinds:\n\n"+buf2;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
						//
						//	Put binds stuff
						//
				 String^ alltex = System::Convert::ToString(System::IO::File::ReadAllBytes("valve\\config.cfg"));
				// byte alltexb = ByteConverter::ConvertFromString(alltex);
			//	String^ 
				 String^ bts = System::Convert::ToString(alltex);
					// B
					char finalcmd = System::Convert::ToChar(bts)+System::Convert::ToChar("\nbind ")+System::Convert::ToChar(textBox2->Text)+System::Convert::ToChar("")+System::Convert::ToChar(textBox3->Text);
				 std::ofstream file("valve\\config.cfg");
				 file.write(&finalcmd, 2480);	//use here ".write" instead of "<<"
				 file.close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 char cmds = System::Convert::ToChar(textBox1->Text);
			 char allcmd = System::Convert::ToChar("hl.exe -")+cmds;
			 system(&allcmd);
		 }
};
}
