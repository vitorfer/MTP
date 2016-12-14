#pragma once

namespace Projeto {

	#define MAXCHARDISP 20

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  lbl;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  lbl1;
	private: System::Windows::Forms::Button^  button14;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->lbl = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(27, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(89, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(151, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(27, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(89, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(151, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(27, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(89, 193);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(151, 193);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Location = System::Drawing::Point(89, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(213, 107);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 80);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Operação da Área do Triângulo";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// lbl
			// 
			this->lbl->Location = System::Drawing::Point(27, 32);
			this->lbl->Multiline = true;
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(261, 59);
			this->lbl->TabIndex = 11;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(213, 193);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 80);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Próximo Número";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::IndianRed;
			this->button13->Location = System::Drawing::Point(315, 107);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(261, 80);
			this->button13->TabIndex = 13;
			this->button13->Text = L"CLIQUE PARA OBTER AS INFORMAÇÕES NECESSÁRIAS PARA RELIZAR A OPERAÇÃO";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// lbl1
			// 
			this->lbl1->Location = System::Drawing::Point(315, 32);
			this->lbl1->Multiline = true;
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(261, 64);
			this->lbl1->TabIndex = 14;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Yellow;
			this->button14->Location = System::Drawing::Point(27, 237);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(56, 36);
			this->button14->TabIndex = 15;
			this->button14->Text = L"Limpar";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 296);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		bool separado;
		double numero, numero2;
		char op;

		void LimpaDisplay(){
			separado = false;
			lbl->Text = "0";
		}
		void LimpaTudo(){
			LimpaDisplay();
			numero = 0.0;
			op='\0';
		}

#pragma endregion
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "1";
					else 
						lbl->Text = lbl->Text + "1";
			 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "2";
					else 
						lbl->Text = lbl->Text + "2";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "3";
					else 
						lbl->Text = lbl->Text + "3";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "4";
					else 
						lbl->Text = lbl->Text + "4";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "5";
					else 
						lbl->Text = lbl->Text + "5";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "6";
					else 
						lbl->Text = lbl->Text + "6";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "7";
					else 
						lbl->Text = lbl->Text + "7";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "8";
					else 
						lbl->Text = lbl->Text + "8";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "9";
					else 
						lbl->Text = lbl->Text + "9";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl->Text->Length<MAXCHARDISP)
					if (lbl->Text == "0")
						lbl->Text = "0";
					else 
						lbl->Text = lbl->Text + "0";
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lbl->Text);
			 op = '*';
			 LimpaDisplay();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = System::Convert::ToDouble(lbl->Text); 
			if(op == '*'){
				lbl->Text = System::Convert::ToString((numero*numero2)/2);
			}
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (lbl1->Text->Length<MAXCHARDISP)
					if (lbl1->Text == "0"){
						lbl1->Text = "Bem-vindo ao programa que realiza o cálculo da área de triângulos! - Primeiro digite o valor da base do triangulo e clique em Próximo Número, agora digite o valor da sua altura e clique em Resultado.";
					}
					else{
						lbl1->Text = lbl1->Text + "Bem-vindo ao programa que realiza o cálculo da área de triângulos! - Primeiro digite o valor da base do triangulo e clique em Próximo Número, agora digite o valor da sua altura e clique em Resultado.";
					}
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 LimpaDisplay();
		 }
};
}

