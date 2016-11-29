#pragma once

namespace caculadora {

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
	private: System::Windows::Forms::Label^  tela;
	protected: 

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnmais;
	private: System::Windows::Forms::Button^  btnce;

	protected: 





	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnmenos;
	private: System::Windows::Forms::Button^  btnn;





	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnvezes;
	private: System::Windows::Forms::Button^  btnxy;





	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnpnt;
	private: System::Windows::Forms::Button^  btnmm;
	private: System::Windows::Forms::Button^  btndiv;
	private: System::Windows::Forms::Button^  btnraiz;





	private: System::Windows::Forms::Button^  btnigual;


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
			this->tela = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnmais = (gcnew System::Windows::Forms::Button());
			this->btnce = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnmenos = (gcnew System::Windows::Forms::Button());
			this->btnn = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnvezes = (gcnew System::Windows::Forms::Button());
			this->btnxy = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnpnt = (gcnew System::Windows::Forms::Button());
			this->btnmm = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tela
			// 
			this->tela->BackColor = System::Drawing::SystemColors::Window;
			this->tela->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tela->Font = (gcnew System::Drawing::Font(L"RomanD", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tela->Location = System::Drawing::Point(12, 9);
			this->tela->Name = L"tela";
			this->tela->Size = System::Drawing::Size(264, 113);
			this->tela->TabIndex = 0;
			this->tela->Text = L"0";
			this->tela->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 127);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(48, 58);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(66, 127);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(48, 58);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(120, 127);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(48, 58);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			// 
			// btnmais
			// 
			this->btnmais->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmais->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmais->Location = System::Drawing::Point(174, 127);
			this->btnmais->Name = L"btnmais";
			this->btnmais->Size = System::Drawing::Size(48, 58);
			this->btnmais->TabIndex = 4;
			this->btnmais->Text = L"+";
			this->btnmais->UseVisualStyleBackColor = false;
			// 
			// btnce
			// 
			this->btnce->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnce->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnce->Location = System::Drawing::Point(228, 127);
			this->btnce->Name = L"btnce";
			this->btnce->Size = System::Drawing::Size(48, 58);
			this->btnce->TabIndex = 5;
			this->btnce->Text = L"CE";
			this->btnce->UseVisualStyleBackColor = false;
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 191);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(48, 58);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(66, 192);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(48, 58);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(120, 191);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(48, 58);
			this->btn6->TabIndex = 8;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			// 
			// btnmenos
			// 
			this->btnmenos->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmenos->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmenos->Location = System::Drawing::Point(174, 191);
			this->btnmenos->Name = L"btnmenos";
			this->btnmenos->Size = System::Drawing::Size(48, 58);
			this->btnmenos->TabIndex = 9;
			this->btnmenos->Text = L"-";
			this->btnmenos->UseVisualStyleBackColor = false;
			// 
			// btnn
			// 
			this->btnn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnn->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnn->Location = System::Drawing::Point(228, 192);
			this->btnn->Name = L"btnn";
			this->btnn->Size = System::Drawing::Size(48, 58);
			this->btnn->TabIndex = 10;
			this->btnn->Text = L"n!";
			this->btnn->UseVisualStyleBackColor = false;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 255);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(48, 58);
			this->btn1->TabIndex = 11;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(66, 256);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(48, 58);
			this->btn2->TabIndex = 12;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(120, 255);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(48, 58);
			this->btn3->TabIndex = 13;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnvezes
			// 
			this->btnvezes->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnvezes->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnvezes->Location = System::Drawing::Point(174, 255);
			this->btnvezes->Name = L"btnvezes";
			this->btnvezes->Size = System::Drawing::Size(48, 58);
			this->btnvezes->TabIndex = 14;
			this->btnvezes->Text = L"×";
			this->btnvezes->UseVisualStyleBackColor = false;
			// 
			// btnxy
			// 
			this->btnxy->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnxy->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnxy->Location = System::Drawing::Point(228, 255);
			this->btnxy->Name = L"btnxy";
			this->btnxy->Size = System::Drawing::Size(48, 58);
			this->btnxy->TabIndex = 15;
			this->btnxy->Text = L"xʸ";
			this->btnxy->UseVisualStyleBackColor = false;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 319);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(48, 58);
			this->btn0->TabIndex = 16;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnpnt
			// 
			this->btnpnt->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnpnt->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnpnt->Location = System::Drawing::Point(66, 320);
			this->btnpnt->Name = L"btnpnt";
			this->btnpnt->Size = System::Drawing::Size(48, 58);
			this->btnpnt->TabIndex = 17;
			this->btnpnt->Text = L".";
			this->btnpnt->UseVisualStyleBackColor = false;
			this->btnpnt->Click += gcnew System::EventHandler(this, &Form1::btnpnt_Click);
			// 
			// btnmm
			// 
			this->btnmm->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnmm->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmm->Location = System::Drawing::Point(120, 319);
			this->btnmm->Name = L"btnmm";
			this->btnmm->Size = System::Drawing::Size(48, 58);
			this->btnmm->TabIndex = 18;
			this->btnmm->Text = L"±";
			this->btnmm->UseVisualStyleBackColor = false;
			this->btnmm->Click += gcnew System::EventHandler(this, &Form1::btnmm_Click);
			// 
			// btndiv
			// 
			this->btndiv->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btndiv->Location = System::Drawing::Point(174, 319);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(48, 58);
			this->btndiv->TabIndex = 19;
			this->btndiv->Text = L"÷";
			this->btndiv->UseVisualStyleBackColor = false;
			// 
			// btnraiz
			// 
			this->btnraiz->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnraiz->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnraiz->Location = System::Drawing::Point(228, 320);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(48, 58);
			this->btnraiz->TabIndex = 20;
			this->btnraiz->Text = L"√";
			this->btnraiz->UseVisualStyleBackColor = false;
			// 
			// btnigual
			// 
			this->btnigual->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnigual->Location = System::Drawing::Point(12, 383);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(264, 58);
			this->btnigual->TabIndex = 21;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 530);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btnmm);
			this->Controls->Add(this->btnpnt);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnxy);
			this->Controls->Add(this->btnvezes);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnn);
			this->Controls->Add(this->btnmenos);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnce);
			this->Controls->Add(this->btnmais);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->tela);
			this->Name = L"Form1";
			this->Text = L"lblDisplay";
			this->ResumeLayout(false);

		}
		bool flagVirgula;
#pragma endregion
flagVirgula = false;

private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tela->Text != "0")
				 tela->Text = tela->Text + "0";
		 }
private: System::Void btnpnt_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(flagVitgula){
				 tela->Text = tela->Text + "1";}
		 }
			 
		 private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
				  }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tela->Text != "0")
				 tela->Text = tela->Text + "1";
			 else
				 tela->Text = "1";
		 }
};
}

