#pragma once

#include"FrmEscogeColor.h"

namespace EJERCICIO1_SV_PROGRA2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnRojo;
	private: System::Windows::Forms::Button^  btnRandom;
	protected:

	private: System::Windows::Forms::Button^  btnVerde;
	private: System::Windows::Forms::Button^  btnPred;
	private: System::Windows::Forms::Label^  lblPred;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRojo = (gcnew System::Windows::Forms::Button());
			this->btnRandom = (gcnew System::Windows::Forms::Button());
			this->btnVerde = (gcnew System::Windows::Forms::Button());
			this->btnPred = (gcnew System::Windows::Forms::Button());
			this->lblPred = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnRojo
			// 
			this->btnRojo->Location = System::Drawing::Point(13, 23);
			this->btnRojo->Name = L"btnRojo";
			this->btnRojo->Size = System::Drawing::Size(93, 23);
			this->btnRojo->TabIndex = 0;
			this->btnRojo->Text = L"Rojo";
			this->btnRojo->UseVisualStyleBackColor = true;
			this->btnRojo->Click += gcnew System::EventHandler(this, &MyForm::btnRojo_Click);
			// 
			// btnRandom
			// 
			this->btnRandom->Location = System::Drawing::Point(165, 22);
			this->btnRandom->Name = L"btnRandom";
			this->btnRandom->Size = System::Drawing::Size(89, 23);
			this->btnRandom->TabIndex = 1;
			this->btnRandom->Text = L"Random";
			this->btnRandom->UseVisualStyleBackColor = true;
			this->btnRandom->Click += gcnew System::EventHandler(this, &MyForm::btnRandom_Click);
			// 
			// btnVerde
			// 
			this->btnVerde->Location = System::Drawing::Point(13, 96);
			this->btnVerde->Name = L"btnVerde";
			this->btnVerde->Size = System::Drawing::Size(93, 23);
			this->btnVerde->TabIndex = 2;
			this->btnVerde->Text = L"Verde";
			this->btnVerde->UseVisualStyleBackColor = true;
			this->btnVerde->Click += gcnew System::EventHandler(this, &MyForm::btnVerde_Click);
			// 
			// btnPred
			// 
			this->btnPred->Location = System::Drawing::Point(165, 96);
			this->btnPred->Name = L"btnPred";
			this->btnPred->Size = System::Drawing::Size(89, 23);
			this->btnPred->TabIndex = 3;
			this->btnPred->Text = L"Predeterminado";
			this->btnPred->UseVisualStyleBackColor = true;
			this->btnPred->Click += gcnew System::EventHandler(this, &MyForm::btnPred_Click);
			// 
			// lblPred
			// 
			this->lblPred->AutoSize = true;
			this->lblPred->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lblPred->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblPred->Location = System::Drawing::Point(80, 164);
			this->lblPred->Name = L"lblPred";
			this->lblPred->Size = System::Drawing::Size(108, 13);
			this->lblPred->TabIndex = 4;
			this->lblPred->Text = L"Color Predeterminado";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 223);
			this->Controls->Add(this->lblPred);
			this->Controls->Add(this->btnPred);
			this->Controls->Add(this->btnVerde);
			this->Controls->Add(this->btnRandom);
			this->Controls->Add(this->btnRojo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRojo_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form ^frm = gcnew Form();
				 frm->BackColor = Color::Red;
				 frm->Show();
			

	}
private: System::Void btnVerde_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^frm = gcnew Form();
			 frm->BackColor = Color::Green;
			 frm->Show();


}
private: System::Void btnPred_Click(System::Object^  sender, System::EventArgs^  e) {
			 FrmEscogeColor ^frm = gcnew FrmEscogeColor();
			 frm->ShowDialog();
			 lblPred->BackColor = frm->DameColor();
			 delete frm;
			
}
private: System::Void btnRandom_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 Random x;
			 Form ^frm = gcnew Form();
			 frm->BackColor = Color::FromArgb(x.Next(0, 256), x.Next(0, 256), x.Next(0, 256));
			 frm->Show();



}
};
}
