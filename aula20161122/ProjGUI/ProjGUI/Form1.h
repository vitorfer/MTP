#pragma once

namespace ProjGUI {

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
	private: System::Windows::Forms::Button^  btnbotao;
	protected: 

	private: System::Windows::Forms::TextBox^  txbusuario;
	private: System::Windows::Forms::CheckBox^  chknome;
	private: System::Windows::Forms::CheckBox^  chkidade;



	private: System::Windows::Forms::Label^  lblmensagem;
	private: System::Windows::Forms::ComboBox^  cmbcomida;


	private: System::Windows::Forms::RadioButton^  rdbvermelho;

	private: System::Windows::Forms::GroupBox^  grpcores;
	private: System::Windows::Forms::RadioButton^  rdbazul;


	private: System::Windows::Forms::RadioButton^  rdbverde;

	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::ComponentModel::IContainer^  components;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnbotao = (gcnew System::Windows::Forms::Button());
			this->txbusuario = (gcnew System::Windows::Forms::TextBox());
			this->chknome = (gcnew System::Windows::Forms::CheckBox());
			this->chkidade = (gcnew System::Windows::Forms::CheckBox());
			this->lblmensagem = (gcnew System::Windows::Forms::Label());
			this->cmbcomida = (gcnew System::Windows::Forms::ComboBox());
			this->rdbvermelho = (gcnew System::Windows::Forms::RadioButton());
			this->grpcores = (gcnew System::Windows::Forms::GroupBox());
			this->rdbazul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbverde = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->grpcores->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnbotao
			// 
			this->btnbotao->Location = System::Drawing::Point(12, 203);
			this->btnbotao->Name = L"btnbotao";
			this->btnbotao->Size = System::Drawing::Size(121, 94);
			this->btnbotao->TabIndex = 0;
			this->btnbotao->Text = L"button1\r\n\r\n";
			this->btnbotao->UseVisualStyleBackColor = true;
			this->btnbotao->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txbusuario
			// 
			this->txbusuario->Location = System::Drawing::Point(12, 76);
			this->txbusuario->Name = L"txbusuario";
			this->txbusuario->Size = System::Drawing::Size(304, 20);
			this->txbusuario->TabIndex = 1;
			this->txbusuario->TextChanged += gcnew System::EventHandler(this, &Form1::txbusuario_TextChanged);
			// 
			// chknome
			// 
			this->chknome->AutoSize = true;
			this->chknome->Location = System::Drawing::Point(12, 116);
			this->chknome->Name = L"chknome";
			this->chknome->Size = System::Drawing::Size(80, 17);
			this->chknome->TabIndex = 2;
			this->chknome->Text = L"checkBox1";
			this->chknome->UseVisualStyleBackColor = true;
			this->chknome->CheckedChanged += gcnew System::EventHandler(this, &Form1::chknome_CheckedChanged);
			// 
			// chkidade
			// 
			this->chkidade->AutoSize = true;
			this->chkidade->Location = System::Drawing::Point(12, 139);
			this->chkidade->Name = L"chkidade";
			this->chkidade->Size = System::Drawing::Size(80, 17);
			this->chkidade->TabIndex = 3;
			this->chkidade->Text = L"checkBox2";
			this->chkidade->UseVisualStyleBackColor = true;
			this->chkidade->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// lblmensagem
			// 
			this->lblmensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblmensagem->Location = System::Drawing::Point(12, 9);
			this->lblmensagem->Name = L"lblmensagem";
			this->lblmensagem->Size = System::Drawing::Size(536, 53);
			this->lblmensagem->TabIndex = 4;
			this->lblmensagem->Text = L"Aguardando...";
			this->lblmensagem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cmbcomida
			// 
			this->cmbcomida->FormattingEnabled = true;
			this->cmbcomida->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Ração", L"Incetos", L"Pequenos mamíferos", L"Peixe", 
				L"Lixo", L"Seres Humanos"});
			this->cmbcomida->Location = System::Drawing::Point(12, 176);
			this->cmbcomida->Name = L"cmbcomida";
			this->cmbcomida->Size = System::Drawing::Size(121, 21);
			this->cmbcomida->TabIndex = 5;
			this->cmbcomida->Tag = L"Selecione uma opção";
			// 
			// rdbvermelho
			// 
			this->rdbvermelho->AutoSize = true;
			this->rdbvermelho->Location = System::Drawing::Point(14, 23);
			this->rdbvermelho->Name = L"rdbvermelho";
			this->rdbvermelho->Size = System::Drawing::Size(69, 17);
			this->rdbvermelho->TabIndex = 6;
			this->rdbvermelho->TabStop = true;
			this->rdbvermelho->Text = L"Vermelho";
			this->rdbvermelho->UseVisualStyleBackColor = true;
			// 
			// grpcores
			// 
			this->grpcores->Controls->Add(this->rdbazul);
			this->grpcores->Controls->Add(this->rdbverde);
			this->grpcores->Controls->Add(this->rdbvermelho);
			this->grpcores->Location = System::Drawing::Point(139, 116);
			this->grpcores->Name = L"grpcores";
			this->grpcores->Size = System::Drawing::Size(177, 181);
			this->grpcores->TabIndex = 7;
			this->grpcores->TabStop = false;
			this->grpcores->Text = L"Cores:";
			// 
			// rdbazul
			// 
			this->rdbazul->AutoSize = true;
			this->rdbazul->Location = System::Drawing::Point(14, 149);
			this->rdbazul->Name = L"rdbazul";
			this->rdbazul->Size = System::Drawing::Size(45, 17);
			this->rdbazul->TabIndex = 8;
			this->rdbazul->TabStop = true;
			this->rdbazul->Text = L"Azul";
			this->rdbazul->UseVisualStyleBackColor = true;
			// 
			// rdbverde
			// 
			this->rdbverde->AutoSize = true;
			this->rdbverde->Location = System::Drawing::Point(14, 87);
			this->rdbverde->Name = L"rdbverde";
			this->rdbverde->Size = System::Drawing::Size(53, 17);
			this->rdbverde->TabIndex = 7;
			this->rdbverde->TabStop = true;
			this->rdbverde->Text = L"Verde";
			this->rdbverde->UseVisualStyleBackColor = true;
			this->rdbverde->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(322, 76);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 221);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 319);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->grpcores);
			this->Controls->Add(this->cmbcomida);
			this->Controls->Add(this->lblmensagem);
			this->Controls->Add(this->chkidade);
			this->Controls->Add(this->chknome);
			this->Controls->Add(this->txbusuario);
			this->Controls->Add(this->btnbotao);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Página";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpcores->ResumeLayout(false);
			this->grpcores->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblmensagem->Text = "Clicou!";
				 if(chknome->Checked)
					 lblmensagem->Text = lblmensagem->Text + "Monstro, ";
				
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chknome_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txbusuario_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

