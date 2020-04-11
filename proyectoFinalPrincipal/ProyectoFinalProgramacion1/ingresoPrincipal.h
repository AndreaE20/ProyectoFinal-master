#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include "menuPrincipal.h"


namespace ProyectoFinalProgramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 

	/// <summary>
	/// Resumen de ingresoPrincipal
	/// </summary>
	public ref class ingresoPrincipal : public System::Windows::Forms::Form
	{
	public:
		ingresoPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ingresoPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ LBUsuario;
	private: System::Windows::Forms::Label^ LBContraseña;
	private: System::Windows::Forms::TextBox^ TBUsuario;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ TBContraseña;

	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ingresoPrincipal::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LBUsuario = (gcnew System::Windows::Forms::Label());
			this->LBContraseña = (gcnew System::Windows::Forms::Label());
			this->TBUsuario = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TBContraseña = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(141, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 142);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// LBUsuario
			// 
			this->LBUsuario->AutoSize = true;
			this->LBUsuario->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBUsuario->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->LBUsuario->Location = System::Drawing::Point(122, 254);
			this->LBUsuario->Name = L"LBUsuario";
			this->LBUsuario->Size = System::Drawing::Size(82, 23);
			this->LBUsuario->TabIndex = 1;
			this->LBUsuario->Text = L"Usuario";
			// 
			// LBContraseña
			// 
			this->LBContraseña->AutoSize = true;
			this->LBContraseña->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBContraseña->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->LBContraseña->Location = System::Drawing::Point(83, 315);
			this->LBContraseña->Name = L"LBContraseña";
			this->LBContraseña->Size = System::Drawing::Size(116, 23);
			this->LBContraseña->TabIndex = 2;
			this->LBContraseña->Text = L"Contraseña";
			// 
			// TBUsuario
			// 
			this->TBUsuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->TBUsuario->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBUsuario->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBUsuario->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->TBUsuario->Location = System::Drawing::Point(253, 256);
			this->TBUsuario->Name = L"TBUsuario";
			this->TBUsuario->Size = System::Drawing::Size(316, 18);
			this->TBUsuario->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(253, 278);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(316, 3);
			this->panel1->TabIndex = 6;
			// 
			// TBContraseña
			// 
			this->TBContraseña->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->TBContraseña->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TBContraseña->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBContraseña->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->TBContraseña->Location = System::Drawing::Point(253, 322);
			this->TBContraseña->Name = L"TBContraseña";
			this->TBContraseña->Size = System::Drawing::Size(316, 18);
			this->TBContraseña->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(253, 338);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(316, 3);
			this->panel2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(277, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 48);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ingresoPrincipal::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(-3, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(695, 312);
			this->panel3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(638, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 57);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ingresoPrincipal::button1_Click_1);
			// 
			// ingresoPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(687, 411);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->TBContraseña);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TBUsuario);
			this->Controls->Add(this->LBContraseña);
			this->Controls->Add(this->LBUsuario);
			this->Controls->Add(this->panel3);
			this->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ingresoPrincipal";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ingresoPrincipal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	if ((TBUsuario->Text == "usuario") && (TBContraseña->Text == "123"))
	{
		Form^ Menu = gcnew menuPrincipal();
		Menu->Show();
	}
	else {
		MessageBox::Show("Usuario o Contraseña incorrecta", "ERROR DE AUTENTICACION", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
