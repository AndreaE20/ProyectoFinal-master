#pragma once
#include "IngresodeDatos.h"
#include <msclr/marshal_cppstd.h>

namespace ProyectoFinalProgramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de visualizacion
	/// </summary>
	public ref class visualizacion : public System::Windows::Forms::Form
	{
	public:
		Form^ regresoVisualizacion;
		visualizacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		visualizacion(Form^ vis)
		{
			regresoVisualizacion = vis;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~visualizacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ datospersonalesdg1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ metasdg2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridView^ Recomedacionesdg3;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(visualizacion::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->datospersonalesdg1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->metasdg2 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Recomedacionesdg3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datospersonalesdg1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metasdg2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Recomedacionesdg3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1393, 271);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 672);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 65);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &visualizacion::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(12, 601);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 65);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &visualizacion::button2_Click);
			// 
			// datospersonalesdg1
			// 
			this->datospersonalesdg1->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->datospersonalesdg1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->datospersonalesdg1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datospersonalesdg1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->datospersonalesdg1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->datospersonalesdg1->Location = System::Drawing::Point(355, 327);
			this->datospersonalesdg1->Name = L"datospersonalesdg1";
			this->datospersonalesdg1->Size = System::Drawing::Size(1031, 431);
			this->datospersonalesdg1->TabIndex = 3;
			this->datospersonalesdg1->Visible = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha de Nacimiento";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Correo";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Telefono";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Telefono";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Zona de Residencia";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Ocupación";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Alergias";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Alimentos que no consume";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Actividad Física";
			this->Column10->Name = L"Column10";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Mindflyers Comics", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(175, 423);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(129, 63);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Datos Personales";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &visualizacion::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Mindflyers Comics", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(175, 513);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button4->Size = System::Drawing::Size(129, 60);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Metas de Peso";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &visualizacion::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Mindflyers Comics", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(151, 599);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button5->Size = System::Drawing::Size(176, 45);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Recomendaciones";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &visualizacion::button5_Click);
			// 
			// metasdg2
			// 
			this->metasdg2->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->metasdg2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metasdg2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Nombre, this->Column11,
					this->Column12, this->Column13, this->Column19, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18
			});
			this->metasdg2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->metasdg2->Location = System::Drawing::Point(345, 327);
			this->metasdg2->Name = L"metasdg2";
			this->metasdg2->Size = System::Drawing::Size(1041, 431);
			this->metasdg2->TabIndex = 7;
			this->metasdg2->Visible = false;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Meta 1";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Tiempo";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Meta 2";
			this->Column13->Name = L"Column13";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Tiempo";
			this->Column19->Name = L"Column19";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Meta 3";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Tiempo";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Altura";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Ginecoide";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Androide";
			this->Column18->Name = L"Column18";
			// 
			// Recomedacionesdg3
			// 
			this->Recomedacionesdg3->BackgroundColor = System::Drawing::Color::DarkSlateGray;
			this->Recomedacionesdg3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Recomedacionesdg3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column20,
					this->Column21
			});
			this->Recomedacionesdg3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Recomedacionesdg3->Location = System::Drawing::Point(648, 327);
			this->Recomedacionesdg3->Name = L"Recomedacionesdg3";
			this->Recomedacionesdg3->Size = System::Drawing::Size(242, 431);
			this->Recomedacionesdg3->TabIndex = 8;
			this->Recomedacionesdg3->Visible = false;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Nombre";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Recomendaciones";
			this->Column21->Name = L"Column21";
			// 
			// visualizacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(1398, 788);
			this->Controls->Add(this->Recomedacionesdg3);
			this->Controls->Add(this->metasdg2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->datospersonalesdg1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"visualizacion";
			this->Text = L"visualizacion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datospersonalesdg1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metasdg2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Recomedacionesdg3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		regresoVisualizacion->Show();
	}


		  IngesoDatosPaciente* PacienteCabezera = NULL;
		   IngesoDatosPaciente* PacienteAuxiliar;

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Recomedacionesdg3->Visible = false;
		datospersonalesdg1->Visible = true;
		PacienteAuxiliar = PacienteCabezera;
		datospersonalesdg1->Rows->Clear();


		while (PacienteAuxiliar != NULL)
		{
			String^ nom;
			String^ fn;
			String^ co;
			String^ tel;
			String^ zr;
			String^ ocu;
			String^ ale;
			String^ anc;
			String^ af;
			
			nom = gcnew String(PacienteAuxiliar->Nombre.c_str());
			fn = gcnew String(PacienteAuxiliar->fechaNacimiento.c_str());
			co = gcnew String(PacienteAuxiliar->correo.c_str());
			tel = gcnew String(PacienteAuxiliar->Telefono.c_str());
			zr = gcnew String(PacienteAuxiliar->zonaResidencia.c_str());
			ocu = gcnew String(PacienteAuxiliar->ocupacion.c_str());
			ale = gcnew String(PacienteAuxiliar->alergias.c_str());
			anc = gcnew String(PacienteAuxiliar->noConsumible.c_str());
			af = gcnew String(PacienteAuxiliar->actividadFisica.c_str());

			datospersonalesdg1->Rows->Add(nom, fn, co, tel, zr, ocu, ale, anc, af);
			PacienteAuxiliar = PacienteAuxiliar->sgt;
		} 

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	datospersonalesdg1->Visible = false;
	Recomedacionesdg3->Visible = false;
	metasdg2->Visible = true;
	PacienteAuxiliar = PacienteCabezera;
	datospersonalesdg1->Rows->Clear();


	while (PacienteAuxiliar != NULL)
	{
		String^ nom;
		String^ m1; String^ t1;
		String^ m2; String^ t2;
		String^ m3; String^ t3;
		String^ alt;
		String^ gn;
		String^and;
		//String^ reco;
		nom = gcnew String(PacienteAuxiliar->Nombre.c_str());
		m1 = gcnew String(PacienteAuxiliar->meta1.c_str());
		t1 = gcnew String(PacienteAuxiliar->tiempometa1.c_str());
		m2 = gcnew String(PacienteAuxiliar->meta2.c_str());
		t2 = gcnew String(PacienteAuxiliar->tiempometa2.c_str());
		m3 = gcnew String(PacienteAuxiliar->meta3.c_str());
		t3= gcnew String(PacienteAuxiliar->tiempometa3.c_str());
		alt = gcnew String(PacienteAuxiliar->altura.c_str());
		gn = gcnew String(PacienteAuxiliar->ginecoide.c_str());
		and = gcnew String(PacienteAuxiliar->androide.c_str());

		metasdg2->Rows->Add(nom, m1, t1, m2, t2, m3,t3, alt, gn, and);
		PacienteAuxiliar = PacienteAuxiliar->sgt;



	} 
		
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	metasdg2->Visible = false;
	datospersonalesdg1->Visible = false;
	Recomedacionesdg3->Visible = true;
	PacienteAuxiliar = PacienteCabezera;
	datospersonalesdg1->Rows->Clear();


	while (PacienteAuxiliar != NULL)
	{
		String^ nom;
		String^ reco;
		nom = gcnew String(PacienteAuxiliar->Nombre.c_str());
		reco = gcnew String(PacienteAuxiliar->recomendaciones.c_str());
		metasdg2->Rows->Add(nom, reco);
		PacienteAuxiliar = PacienteAuxiliar->sgt;



	}


}
};
}
