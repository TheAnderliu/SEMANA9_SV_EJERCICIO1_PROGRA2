#pragma once

namespace EJERCICIO1_SV_PROGRA2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmEscogeColor
	/// </summary>
	public ref class FrmEscogeColor : public System::Windows::Forms::Form
	{
	public:
		FrmEscogeColor(void)
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
		~FrmEscogeColor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblRojo;
	private: System::Windows::Forms::Label^  lblVerde;
	private: System::Windows::Forms::Label^  lblAzul;
	private: System::Windows::Forms::TextBox^  txtbxRojo;
	private: System::Windows::Forms::TextBox^  txtbxVerde;
	private: System::Windows::Forms::TextBox^  txtbxAzul;
	private: System::Windows::Forms::Button^  btnAceptar;
	protected:







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
			this->lblRojo = (gcnew System::Windows::Forms::Label());
			this->lblVerde = (gcnew System::Windows::Forms::Label());
			this->lblAzul = (gcnew System::Windows::Forms::Label());
			this->txtbxRojo = (gcnew System::Windows::Forms::TextBox());
			this->txtbxVerde = (gcnew System::Windows::Forms::TextBox());
			this->txtbxAzul = (gcnew System::Windows::Forms::TextBox());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblRojo
			// 
			this->lblRojo->AutoSize = true;
			this->lblRojo->Location = System::Drawing::Point(34, 34);
			this->lblRojo->Name = L"lblRojo";
			this->lblRojo->Size = System::Drawing::Size(32, 13);
			this->lblRojo->TabIndex = 0;
			this->lblRojo->Text = L"Rojo:";
			// 
			// lblVerde
			// 
			this->lblVerde->AutoSize = true;
			this->lblVerde->Location = System::Drawing::Point(34, 80);
			this->lblVerde->Name = L"lblVerde";
			this->lblVerde->Size = System::Drawing::Size(38, 13);
			this->lblVerde->TabIndex = 1;
			this->lblVerde->Text = L"Verde:";
			// 
			// lblAzul
			// 
			this->lblAzul->AutoSize = true;
			this->lblAzul->Location = System::Drawing::Point(34, 123);
			this->lblAzul->Name = L"lblAzul";
			this->lblAzul->Size = System::Drawing::Size(30, 13);
			this->lblAzul->TabIndex = 2;
			this->lblAzul->Text = L"Azul:";
			// 
			// txtbxRojo
			// 
			this->txtbxRojo->Location = System::Drawing::Point(131, 31);
			this->txtbxRojo->Name = L"txtbxRojo";
			this->txtbxRojo->Size = System::Drawing::Size(100, 20);
			this->txtbxRojo->TabIndex = 3;
			// 
			// txtbxVerde
			// 
			this->txtbxVerde->Location = System::Drawing::Point(131, 73);
			this->txtbxVerde->Name = L"txtbxVerde";
			this->txtbxVerde->Size = System::Drawing::Size(100, 20);
			this->txtbxVerde->TabIndex = 4;
			// 
			// txtbxAzul
			// 
			this->txtbxAzul->Location = System::Drawing::Point(131, 123);
			this->txtbxAzul->Name = L"txtbxAzul";
			this->txtbxAzul->Size = System::Drawing::Size(100, 20);
			this->txtbxAzul->TabIndex = 5;
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(142, 178);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(75, 23);
			this->btnAceptar->TabIndex = 6;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &FrmEscogeColor::btnAceptar_Click);
			// 
			// FrmEscogeColor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->txtbxAzul);
			this->Controls->Add(this->txtbxVerde);
			this->Controls->Add(this->txtbxRojo);
			this->Controls->Add(this->lblAzul);
			this->Controls->Add(this->lblVerde);
			this->Controls->Add(this->lblRojo);
			this->Name = L"FrmEscogeColor";
			this->Text = L"FrmEscogeColor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Color col;

	private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) {

				 Form ^frm = gcnew Form();
				 int red = Convert::ToInt32(txtbxRojo->Text);
				 int green = Convert::ToInt32(txtbxVerde->Text);
				 int blue = Convert::ToInt32(txtbxAzul->Text);
				 frm->BackColor = Color::FromArgb(red, green, blue);
				 col = Color::FromArgb(red, green, blue);
				 frm->Show();
				 this->Close();
	}

			 public:
				 Color DameColor(){

					 return col;

				 }
};
}
