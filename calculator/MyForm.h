#pragma once
#include <stack>
#include <string>
#include "Func.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
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

	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;


	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button19;

	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ textBox1;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(446, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(446, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 36);
			this->button2->TabIndex = 7;
			this->button2->Text = L"С";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkViolet;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(493, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 36);
			this->button3->TabIndex = 8;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkViolet;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(493, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 36);
			this->button4->TabIndex = 9;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkViolet;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(493, 45);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 36);
			this->button5->TabIndex = 10;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkViolet;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(352, 97);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 36);
			this->button7->TabIndex = 12;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkViolet;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(493, 197);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 36);
			this->button6->TabIndex = 13;
			this->button6->Text = L"*";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkViolet;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(352, 197);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 36);
			this->button8->TabIndex = 14;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkViolet;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(446, 147);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 36);
			this->button9->TabIndex = 15;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkViolet;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(399, 197);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 36);
			this->button10->TabIndex = 16;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkViolet;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(352, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 36);
			this->button11->TabIndex = 17;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkViolet;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(446, 97);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 36);
			this->button12->TabIndex = 18;
			this->button12->Text = L"9";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkViolet;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(399, 97);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 36);
			this->button13->TabIndex = 19;
			this->button13->Text = L"8";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkViolet;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(399, 147);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 36);
			this->button14->TabIndex = 20;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkViolet;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(446, 197);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 36);
			this->button15->TabIndex = 21;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkViolet;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(399, 247);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(41, 36);
			this->button16->TabIndex = 22;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkViolet;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(352, 247);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(41, 36);
			this->button18->TabIndex = 24;
			this->button18->Text = L"(";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkViolet;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(446, 247);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(41, 36);
			this->button17->TabIndex = 25;
			this->button17->Text = L")";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkViolet;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(8, 165);
			this->textBox2->MaximumSize = System::Drawing::Size(201, 22);
			this->textBox2->MinimumSize = System::Drawing::Size(201, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(201, 22);
			this->textBox2->TabIndex = 28;
			this->textBox2->Text = L"Ответ";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkViolet;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(493, 247);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(41, 36);
			this->button19->TabIndex = 29;
			this->button19->Text = L".";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkViolet;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(399, 45);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(41, 36);
			this->button20->TabIndex = 31;
			this->button20->Text = L"<-";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkViolet;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(8, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 22);
			this->textBox1->TabIndex = 32;
			this->textBox1->Text = L"Введите выражение";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(554, 368);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(570, 407);
			this->MinimumSize = System::Drawing::Size(570, 407);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Введите выражение")
			textBox1->Text = "";
		textBox1->Text = textBox1->Text + Convert::ToString("7");
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("8");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("9");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("*");
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("(");
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString(")");
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text == "" || textBox1->Text == "Введите выражение")
	{
		MessageBox::Show("Вы ничего не ввели!");
		return;
	}
	std::string s,type;

		std::string s1;
		bool f = true;
		msclr::interop::marshal_context context;
		s = context.marshal_as<std::string>(textBox1->Text);
		int countopen = 0,countclose=0;

		for (int j = 0; j < s.size(); j++)
			if (s[j]=='(')
				countopen++;

		for (int j = 0; j < s.size(); j++)
			if (s[j]==')')
				countclose++;

		if (countclose != countopen)
		{
			textBox1->Text == "";
			textBox2->Text == "";
			MessageBox::Show("Некорректный ввод скобок!");
			
			return;
		}

		for (i = 0; i < s.size(); i++)
		{
			k = i;
			n = 0;
			if (s[i] == '*' )
			{
				if (s[i + 1] == '-')
				{
					type = "minus";
				}
				else
				{
					type = "plus";
				}
				if (i == 0)
				{
					textBox1->Text == "";
					textBox2->Text == "";
					MessageBox::Show("Некорректный ввод!");
					
					return;
				}

				if ((type == "minus" && isdigit(s[i + 2])) || (type == "plus" && isdigit(s[i + 1])) || (s[i + 1] == '(' && type == "plus"))
				{
					while (st.size() && f)
					{
						if (st.top() == '+' || st.top() == '-' || st.top() == '(')f = false;

						else st_oper(st.top());

					}
					f = true;

					if (type == "plus") st.push(s[i]);

					if (type == "minus")
					{
						st.push('p');
						i++;
					}
				}
				else
				{
					textBox1->Text == "";
					textBox2->Text == "";
					MessageBox::Show("Некорректный ввод!");
					return;
				}
			}
			else if (s[i] == '/')
			{
				 if (s[i+1] == '0' || i==0) 
				 {
					textBox1->Text = "";

					if (s[i + 1] == '0')
					{
						textBox1->Text == "";
						textBox2->Text == "";
						MessageBox::Show("На ноль делить нельзя!");
						
					}

					else 
					{
						textBox1->Text == "";
						textBox2->Text == "";
						MessageBox::Show("Некорректный ввод!");
						
					}

					return;
				 }
				 if (s[i + 1] == '-')
				 {
					 if (s[i + 2] == '0')
					 {
						 textBox1->Text == "";
						 textBox2->Text == "";
						 MessageBox::Show("На ноль делить нельзя!");

					 }
					 else
					 type = "minus";
				 }
				 else
				 {
					 type = "plus";
				 }
				 if ((type == "minus" && isdigit(s[i + 2])) || (type == "plus" && isdigit(s[i + 1])) || (s[i + 1] == '(' && type == "plus")) {
					 while (st.size() && f)
					 {
						 if (st.top() == '+' || st.top() == '-' || st.top() == '(')f = false;

						 else st_oper(st.top());
					 }

					 f = true;

					 if (type == "plus")
						 st.push(s[i]);

					 if (type == "minus")
					 {
						 st.push('s');
						 i++;
					 }
				 }
				 else
				 {
					 textBox1->Text = "";
					 textBox2->Text == "";
					 MessageBox::Show("Некорректный ввод!");
					 return;
				 }

			}
			else  if (s[i] == '+')
			{
				if (s[i + 1] == '-') 
				{
					type = "minus";
				}
				else 
				{
					type = "plus";
				} 

				if (  i == 0 )
				{
						textBox1->Text = "";
						textBox2->Text == "";
						MessageBox::Show("Некорректный ввод!");
						return;
				}

				if ((type == "minus" && isdigit(s[i + 2])) || (type == "plus" && isdigit(s[i + 1])) || (s[i + 1] == '(' && type == "plus")) {
					while (st.size() && f)
					{

						if (st.top() == '(')f = false;

						else st_oper(st.top());
					}

					f = true;
					if (type == "plus")
						st.push(s[i]);

					else
					{
						st.push(s[i + 1]);
						i++;
					}
				}

				else 
				{
						textBox1->Text = "";
						textBox2->Text == "";
						MessageBox::Show("Некорректный ввод!");
						return;
				}
			}

			else   if (s[i] == '-')
			{
				if (s[i + 1] == '-')
				{
					type = "minus";
				}

				else
				{
					type = "plus";
				}

				if (i==0 && isdigit(s[i + 1]))
				{
					std::string tmp1 = "";

					tmp1 += s[i];

					while (isdigit(s[i+1]) || s[i+1] == '.' || s[i+1] == ',')
					{
						if (s[i+1] == '.')
						{
							if (i+1 == s.size() - 1)
							{
								textBox1->Text == "";
								textBox2->Text == "";
								MessageBox::Show("Некорректный ввод!");
								return;
							}
							int j = i + 2;
							while (isdigit(s[j]) || s[j] == '.' || s[j] == ',')
							{
								if (s[j] == '.' || s[j] == ',' )
								{
									textBox1->Text == "";
									textBox2->Text == "";
									MessageBox::Show("Некорректный ввод!");
									return;
								}
								j++;
							}

						}
						if (s[i+1] == ',')
						{
							textBox1->Text == "";
							textBox2->Text == "";
							MessageBox::Show("Используйте точки!");
							return;
						}
						tmp1 += s[i + 1];
						stlet.push(atof(tmp1.c_str()));
						i++;
						f = false;
				    }
				}

				if (f && (type == "minus" && isdigit(s[i + 2])) || (type=="plus" && isdigit(s[i+1])) ||( s[i+1]=='(' &&type == "plus"))
				{
					while (st.size() && f)
					{
						if (st.top() == '(')
							f = false;

						else 
							st_oper(st.top());
							
					}

					f = true;

					if (type == "minus") 
					{
						st.push('+');
						i++;
					}

					else st.push(s[i]);
				}

				else
				{
					if (f) 
					{
						textBox1->Text == "";
						textBox2->Text == "";
						MessageBox::Show("Некорректный ввод!");
						return;
					}
				}
			}

			else if (s[i] == '(')
			{
				if (!isdigit(s[i + 1]))
				{
					textBox1->Text == "";
					textBox2->Text == "";
					MessageBox::Show("Некорректный ввод!");
					return;
				}
					st.push(s[i]);
			}

			else if (s[i] == ')')
			{
				if (s[i + 1] == '(' )
				{
					textBox1->Text == "";
					textBox2->Text == "";
					MessageBox::Show("Некорректный ввод!");
					return;
				}

				while (st.size())
				{
					if (st.top() == '(' )
					{
						st.pop();
						break;
					}
				
					st_oper(st.top());
				}
			}

			else if (isdigit(s[i]))
			{
				std::string a = "";
					while (isdigit(s[i]) || s[i] == '.' || s[i] == ',')
					{
						if (s[i] == '.')
						{
							if(i==s.size()-1)
							{
								textBox1->Text == "";
								textBox2->Text == "";
								MessageBox::Show("Некорректный ввод!");
								return;
							}
							int j = i+1;
							while (isdigit(s[j]) || s[j] == '.' || s[j] == ',')
							{
								if (s[j] == '.' || s[j] == ',' || s[j+1])
								{
									textBox1->Text == "";
									textBox2->Text == "";
									MessageBox::Show("Некорректный ввод!");
									return;
								}
								j++;
							}
							
						}
						if (s[i] == ',')
						{
							textBox1->Text == "";
							textBox2->Text == "";
							MessageBox::Show("Используйте точки!");
							return;
						}
						a += s[i];
						++i;
					}

				--i;
				stlet.push(atof(a.c_str()));
			}

			else 
            {
			textBox1->Text == "";
			textBox2->Text == "";
					MessageBox::Show("Некорректный ввод!");

					return;
			}
	    }
		while (st.size())
		{
			st_oper(st.top());
		}

		textBox2->Text = System::Convert::ToString(stlet.top());
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->ForeColor = System::Drawing::Color::Gray;
	textBox2->Text = "";
	textBox1->Text = "";
	textBox1->Text = "Введите выражение";
	textBox2->Text = "Ответ";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("+");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("-");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("/");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("4");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("5");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("6");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("1");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("2");
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("3");
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString("0");
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->ForeColor = System::Drawing::Color::Black;
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if(textBox1->Text=="Введите выражение")
	textBox1->Text = "";
	textBox1->ForeColor = System::Drawing::Color::Black;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s;
	msclr::interop::marshal_context context;
	s = context.marshal_as<std::string>(textBox1->Text);
	if(s.size()!=0)
	textBox1->Text = textBox1->Text->Remove(s.size()-1);
	
} 
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	/*if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";*/
	textBox1->ForeColor = System::Drawing::Color::Black;
}
private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Введите выражение")
		textBox1->Text = "";
	textBox1->Text = textBox1->Text + Convert::ToString(".");
}
};
}

