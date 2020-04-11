#pragma once
#include <msclr/marshal_cppstd.h>

namespace ProyectoFinalProgramacion1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std; 

    struct IngesoDatosPaciente {
        string Nombre; 
        string fechaNacimiento; 
        string correo; 
        string Telefono; 
        string zonaResidencia; 
        string ocupacion; 
        string alergias; 
        string noConsumible; 
        string actividadFisica; 
        string meta1; string tiempometa1; 
        string meta2; string tiempometa2;
        string meta3; string tiempometa3; 
        string altura; 
        string ginecoide; string androide; 
        string recomendaciones; 
        IngesoDatosPaciente* sgt; 
        IngesoDatosPaciente* ant; 
    };


  /*  struct IngesoDatosPacienteSave {
        string Nom;
        string fechao;
        string mail;
        string telefono;
        string zona;
        string ocupacion;
        string alergias;
        string noConsume;
        string actividadF;
        string meta1; string tiempo1;
        string meta2; string tiempo2;
        string meta3; string tiempo3;
        string altura;
        string gine; string andro;
        string recomendaciones;
        IngesoDatosPacienteSave* sgt;
        IngesoDatosPacienteSave* ant;
    };*/

	/// <summary>
	/// Resumen de IngresodeDatos
	/// </summary>
	public ref class IngresodeDatos : public System::Windows::Forms::Form
	{
	public:
		Form^ regresoIngreso; 
		IngresodeDatos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		IngresodeDatos(Form^ing)
		{
			regresoIngreso = ing;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IngresodeDatos()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ banner;
	private: System::Windows::Forms::Panel^ ingreso1;
	private: System::Windows::Forms::Panel^ combozona;

	private: System::Windows::Forms::Panel^ ingreso3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboactividad;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::ComboBox^ cmbzona;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::ComboBox^ combometa3;

	private: System::Windows::Forms::ComboBox^ combometa2;

	private: System::Windows::Forms::ComboBox^ combometa1;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::TextBox^ tbrecomndaciones;

	private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::TextBox^ tbnoconsume;
    private: System::Windows::Forms::TextBox^ tbalergias;
    private: System::Windows::Forms::TextBox^ tbocupacion;
    private: System::Windows::Forms::TextBox^ tbtelefono;
    private: System::Windows::Forms::TextBox^ tbcorreo;
    private: System::Windows::Forms::TextBox^ tbnacimiento;
    private: System::Windows::Forms::TextBox^ tbnombre;
    private: System::Windows::Forms::TextBox^ tbandroide;
    private: System::Windows::Forms::TextBox^ tbginecoide;
    private: System::Windows::Forms::TextBox^ tbaltura;
    private: System::Windows::Forms::TextBox^ tbmeta3;
    private: System::Windows::Forms::TextBox^ tbmeta2;
    private: System::Windows::Forms::TextBox^ tbmeta1;
private: System::Windows::Forms::Button^ button3;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IngresodeDatos::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->banner = (gcnew System::Windows::Forms::Panel());
            this->ingreso1 = (gcnew System::Windows::Forms::Panel());
            this->tbnoconsume = (gcnew System::Windows::Forms::TextBox());
            this->tbalergias = (gcnew System::Windows::Forms::TextBox());
            this->tbocupacion = (gcnew System::Windows::Forms::TextBox());
            this->tbtelefono = (gcnew System::Windows::Forms::TextBox());
            this->tbcorreo = (gcnew System::Windows::Forms::TextBox());
            this->tbnacimiento = (gcnew System::Windows::Forms::TextBox());
            this->tbnombre = (gcnew System::Windows::Forms::TextBox());
            this->comboactividad = (gcnew System::Windows::Forms::ComboBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->cmbzona = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->combozona = (gcnew System::Windows::Forms::Panel());
            this->tbandroide = (gcnew System::Windows::Forms::TextBox());
            this->tbginecoide = (gcnew System::Windows::Forms::TextBox());
            this->tbaltura = (gcnew System::Windows::Forms::TextBox());
            this->tbmeta3 = (gcnew System::Windows::Forms::TextBox());
            this->tbmeta2 = (gcnew System::Windows::Forms::TextBox());
            this->tbmeta1 = (gcnew System::Windows::Forms::TextBox());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->combometa3 = (gcnew System::Windows::Forms::ComboBox());
            this->combometa2 = (gcnew System::Windows::Forms::ComboBox());
            this->combometa1 = (gcnew System::Windows::Forms::ComboBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->ingreso3 = (gcnew System::Windows::Forms::Panel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->tbrecomndaciones = (gcnew System::Windows::Forms::TextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->ingreso1->SuspendLayout();
            this->combozona->SuspendLayout();
            this->panel18->SuspendLayout();
            this->panel16->SuspendLayout();
            this->panel14->SuspendLayout();
            this->ingreso3->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(-8, 603);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(73, 57);
            this->button1->TabIndex = 10;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &IngresodeDatos::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(-3, 666);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(64, 61);
            this->button2->TabIndex = 11;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &IngresodeDatos::button2_Click);
            // 
            // banner
            // 
            this->banner->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"banner.BackgroundImage")));
            this->banner->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->banner->Location = System::Drawing::Point(0, 0);
            this->banner->Name = L"banner";
            this->banner->Size = System::Drawing::Size(1368, 262);
            this->banner->TabIndex = 12;
            // 
            // ingreso1
            // 
            this->ingreso1->Controls->Add(this->tbnoconsume);
            this->ingreso1->Controls->Add(this->tbalergias);
            this->ingreso1->Controls->Add(this->tbocupacion);
            this->ingreso1->Controls->Add(this->tbtelefono);
            this->ingreso1->Controls->Add(this->tbcorreo);
            this->ingreso1->Controls->Add(this->tbnacimiento);
            this->ingreso1->Controls->Add(this->tbnombre);
            this->ingreso1->Controls->Add(this->comboactividad);
            this->ingreso1->Controls->Add(this->label10);
            this->ingreso1->Controls->Add(this->panel7);
            this->ingreso1->Controls->Add(this->label9);
            this->ingreso1->Controls->Add(this->panel6);
            this->ingreso1->Controls->Add(this->label8);
            this->ingreso1->Controls->Add(this->panel5);
            this->ingreso1->Controls->Add(this->label7);
            this->ingreso1->Controls->Add(this->cmbzona);
            this->ingreso1->Controls->Add(this->label6);
            this->ingreso1->Controls->Add(this->panel4);
            this->ingreso1->Controls->Add(this->panel3);
            this->ingreso1->Controls->Add(this->label5);
            this->ingreso1->Controls->Add(this->label4);
            this->ingreso1->Controls->Add(this->panel2);
            this->ingreso1->Controls->Add(this->label3);
            this->ingreso1->Controls->Add(this->panel1);
            this->ingreso1->Controls->Add(this->label2);
            this->ingreso1->Controls->Add(this->label1);
            this->ingreso1->Location = System::Drawing::Point(71, 260);
            this->ingreso1->Name = L"ingreso1";
            this->ingreso1->Size = System::Drawing::Size(456, 477);
            this->ingreso1->TabIndex = 14;
            // 
            // tbnoconsume
            // 
            this->tbnoconsume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbnoconsume->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbnoconsume->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbnoconsume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbnoconsume->Location = System::Drawing::Point(8, 356);
            this->tbnoconsume->Name = L"tbnoconsume";
            this->tbnoconsume->Size = System::Drawing::Size(383, 18);
            this->tbnoconsume->TabIndex = 47;
            // 
            // tbalergias
            // 
            this->tbalergias->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbalergias->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbalergias->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbalergias->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbalergias->Location = System::Drawing::Point(69, 282);
            this->tbalergias->Name = L"tbalergias";
            this->tbalergias->Size = System::Drawing::Size(316, 18);
            this->tbalergias->TabIndex = 46;
            // 
            // tbocupacion
            // 
            this->tbocupacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbocupacion->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbocupacion->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbocupacion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbocupacion->Location = System::Drawing::Point(86, 245);
            this->tbocupacion->Name = L"tbocupacion";
            this->tbocupacion->Size = System::Drawing::Size(316, 18);
            this->tbocupacion->TabIndex = 45;
            // 
            // tbtelefono
            // 
            this->tbtelefono->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbtelefono->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbtelefono->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbtelefono->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbtelefono->Location = System::Drawing::Point(71, 164);
            this->tbtelefono->Name = L"tbtelefono";
            this->tbtelefono->Size = System::Drawing::Size(316, 18);
            this->tbtelefono->TabIndex = 44;
            // 
            // tbcorreo
            // 
            this->tbcorreo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbcorreo->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbcorreo->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbcorreo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbcorreo->Location = System::Drawing::Point(61, 130);
            this->tbcorreo->Name = L"tbcorreo";
            this->tbcorreo->Size = System::Drawing::Size(316, 18);
            this->tbcorreo->TabIndex = 43;
            // 
            // tbnacimiento
            // 
            this->tbnacimiento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbnacimiento->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbnacimiento->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbnacimiento->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbnacimiento->Location = System::Drawing::Point(152, 88);
            this->tbnacimiento->Name = L"tbnacimiento";
            this->tbnacimiento->Size = System::Drawing::Size(298, 18);
            this->tbnacimiento->TabIndex = 42;
            // 
            // tbnombre
            // 
            this->tbnombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbnombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbnombre->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbnombre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbnombre->Location = System::Drawing::Point(71, 46);
            this->tbnombre->Name = L"tbnombre";
            this->tbnombre->Size = System::Drawing::Size(314, 18);
            this->tbnombre->TabIndex = 41;
            // 
            // comboactividad
            // 
            this->comboactividad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->comboactividad->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboactividad->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->comboactividad->FormattingEnabled = true;
            this->comboactividad->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"4-5 veces por semana", L"1-2 veces por semana",
                    L"Muy poco", L"Nunca"
            });
            this->comboactividad->Location = System::Drawing::Point(118, 420);
            this->comboactividad->Name = L"comboactividad";
            this->comboactividad->Size = System::Drawing::Size(206, 22);
            this->comboactividad->TabIndex = 17;
            this->comboactividad->SelectedIndexChanged += gcnew System::EventHandler(this, &IngresodeDatos::comboBox2_SelectedIndexChanged);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label10->Location = System::Drawing::Point(3, 421);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(109, 16);
            this->label10->TabIndex = 16;
            this->label10->Text = L"Actividad Física";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Location = System::Drawing::Point(6, 377);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(385, 3);
            this->panel7->TabIndex = 12;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label9->Location = System::Drawing::Point(3, 331);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(181, 16);
            this->label9->TabIndex = 15;
            this->label9->Text = L"Alimentos que no consume";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Location = System::Drawing::Point(69, 301);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(316, 3);
            this->panel6->TabIndex = 11;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label8->Location = System::Drawing::Point(3, 288);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(60, 16);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Alergias";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Location = System::Drawing::Point(86, 266);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(316, 3);
            this->panel5->TabIndex = 10;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label7->Location = System::Drawing::Point(3, 253);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(77, 16);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Ocupación";
            // 
            // cmbzona
            // 
            this->cmbzona->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->cmbzona->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cmbzona->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->cmbzona->FormattingEnabled = true;
            this->cmbzona->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
                L"Zona 1", L"Zona 2", L"Zona 3", L"Zona 4", L"Zona 5",
                    L"Zona 6", L"Zona 7", L"Zona 8", L"Zona 9", L"Zona 10", L"Zona 11", L"Zona 12", L"Zona 13", L"Zona 14", L"Zona 15", L"Zona 16",
                    L"Zona 17", L"Zona 18", L"Zona 19", L"Zona 21"
            });
            this->cmbzona->Location = System::Drawing::Point(133, 213);
            this->cmbzona->Name = L"cmbzona";
            this->cmbzona->Size = System::Drawing::Size(116, 22);
            this->cmbzona->TabIndex = 12;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label6->Location = System::Drawing::Point(3, 214);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(129, 16);
            this->label6->TabIndex = 11;
            this->label6->Text = L"Zona de residencia";
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Location = System::Drawing::Point(71, 185);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(316, 3);
            this->panel4->TabIndex = 9;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Location = System::Drawing::Point(61, 151);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(316, 3);
            this->panel3->TabIndex = 8;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label5->Location = System::Drawing::Point(3, 172);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(67, 16);
            this->label5->TabIndex = 10;
            this->label5->Text = L"Telefono ";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label4->Location = System::Drawing::Point(3, 138);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(52, 16);
            this->label4->TabIndex = 9;
            this->label4->Text = L"Correo";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Location = System::Drawing::Point(148, 109);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(305, 3);
            this->panel2->TabIndex = 8;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label3->Location = System::Drawing::Point(3, 96);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(143, 16);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Fecha de nacimiento ";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Location = System::Drawing::Point(71, 67);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(316, 3);
            this->panel1->TabIndex = 7;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label2->Location = System::Drawing::Point(3, 54);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(62, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Nombre ";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label1->Location = System::Drawing::Point(128, 5);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(196, 27);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Datos personales";
            // 
            // combozona
            // 
            this->combozona->Controls->Add(this->tbandroide);
            this->combozona->Controls->Add(this->tbginecoide);
            this->combozona->Controls->Add(this->tbaltura);
            this->combozona->Controls->Add(this->tbmeta3);
            this->combozona->Controls->Add(this->tbmeta2);
            this->combozona->Controls->Add(this->tbmeta1);
            this->combozona->Controls->Add(this->panel18);
            this->combozona->Controls->Add(this->label29);
            this->combozona->Controls->Add(this->panel16);
            this->combozona->Controls->Add(this->label26);
            this->combozona->Controls->Add(this->label22);
            this->combozona->Controls->Add(this->panel14);
            this->combozona->Controls->Add(this->label21);
            this->combozona->Controls->Add(this->combometa3);
            this->combozona->Controls->Add(this->combometa2);
            this->combozona->Controls->Add(this->combometa1);
            this->combozona->Controls->Add(this->label20);
            this->combozona->Controls->Add(this->label19);
            this->combozona->Controls->Add(this->label18);
            this->combozona->Controls->Add(this->panel13);
            this->combozona->Controls->Add(this->label17);
            this->combozona->Controls->Add(this->panel12);
            this->combozona->Controls->Add(this->label16);
            this->combozona->Controls->Add(this->panel11);
            this->combozona->Controls->Add(this->label15);
            this->combozona->Controls->Add(this->label14);
            this->combozona->Controls->Add(this->label13);
            this->combozona->Controls->Add(this->label12);
            this->combozona->Controls->Add(this->label11);
            this->combozona->Location = System::Drawing::Point(532, 259);
            this->combozona->Name = L"combozona";
            this->combozona->Size = System::Drawing::Size(495, 477);
            this->combozona->TabIndex = 15;
            this->combozona->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &IngresodeDatos::combozona_Paint);
            // 
            // tbandroide
            // 
            this->tbandroide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbandroide->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbandroide->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbandroide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbandroide->Location = System::Drawing::Point(230, 336);
            this->tbandroide->Name = L"tbandroide";
            this->tbandroide->Size = System::Drawing::Size(79, 18);
            this->tbandroide->TabIndex = 40;
            // 
            // tbginecoide
            // 
            this->tbginecoide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbginecoide->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbginecoide->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbginecoide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbginecoide->Location = System::Drawing::Point(346, 289);
            this->tbginecoide->Name = L"tbginecoide";
            this->tbginecoide->Size = System::Drawing::Size(79, 18);
            this->tbginecoide->TabIndex = 39;
            // 
            // tbaltura
            // 
            this->tbaltura->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbaltura->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbaltura->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbaltura->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbaltura->Location = System::Drawing::Point(115, 288);
            this->tbaltura->Name = L"tbaltura";
            this->tbaltura->Size = System::Drawing::Size(79, 15);
            this->tbaltura->TabIndex = 38;
            // 
            // tbmeta3
            // 
            this->tbmeta3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbmeta3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbmeta3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbmeta3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbmeta3->Location = System::Drawing::Point(115, 225);
            this->tbmeta3->Name = L"tbmeta3";
            this->tbmeta3->Size = System::Drawing::Size(79, 15);
            this->tbmeta3->TabIndex = 37;
            // 
            // tbmeta2
            // 
            this->tbmeta2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbmeta2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbmeta2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbmeta2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbmeta2->Location = System::Drawing::Point(115, 160);
            this->tbmeta2->Name = L"tbmeta2";
            this->tbmeta2->Size = System::Drawing::Size(79, 15);
            this->tbmeta2->TabIndex = 36;
            // 
            // tbmeta1
            // 
            this->tbmeta1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbmeta1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbmeta1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbmeta1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbmeta1->Location = System::Drawing::Point(115, 102);
            this->tbmeta1->Name = L"tbmeta1";
            this->tbmeta1->Size = System::Drawing::Size(79, 15);
            this->tbmeta1->TabIndex = 35;
            // 
            // panel18
            // 
            this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel18->Controls->Add(this->panel19);
            this->panel18->Controls->Add(this->label28);
            this->panel18->Location = System::Drawing::Point(230, 357);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(85, 3);
            this->panel18->TabIndex = 32;
            // 
            // panel19
            // 
            this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel19->Location = System::Drawing::Point(26, 5);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(85, 3);
            this->panel19->TabIndex = 24;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label28->Location = System::Drawing::Point(-28, -8);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(48, 16);
            this->label28->TabIndex = 23;
            this->label28->Text = L"Altura";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label29->Location = System::Drawing::Point(159, 344);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(65, 16);
            this->label29->TabIndex = 31;
            this->label29->Text = L"Androide";
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel16->Controls->Add(this->panel17);
            this->panel16->Controls->Add(this->label25);
            this->panel16->Location = System::Drawing::Point(346, 309);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(85, 3);
            this->panel16->TabIndex = 29;
            // 
            // panel17
            // 
            this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel17->Location = System::Drawing::Point(26, 5);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(85, 3);
            this->panel17->TabIndex = 24;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label25->Location = System::Drawing::Point(-28, -8);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(48, 16);
            this->label25->TabIndex = 23;
            this->label25->Text = L"Altura";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label26->Location = System::Drawing::Point(275, 296);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(70, 16);
            this->label26->TabIndex = 28;
            this->label26->Text = L"Ginecoide";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label22->Location = System::Drawing::Point(206, 296);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(18, 16);
            this->label22->TabIndex = 27;
            this->label22->Text = L"ft";
            // 
            // panel14
            // 
            this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel14->Controls->Add(this->panel15);
            this->panel14->Controls->Add(this->label23);
            this->panel14->Location = System::Drawing::Point(115, 309);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(85, 3);
            this->panel14->TabIndex = 22;
            // 
            // panel15
            // 
            this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel15->Location = System::Drawing::Point(26, 5);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(85, 3);
            this->panel15->TabIndex = 24;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label23->Location = System::Drawing::Point(-28, -8);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(48, 16);
            this->label23->TabIndex = 23;
            this->label23->Text = L"Altura";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label21->Location = System::Drawing::Point(61, 296);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(48, 16);
            this->label21->TabIndex = 18;
            this->label21->Text = L"Altura";
            // 
            // combometa3
            // 
            this->combometa3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->combometa3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->combometa3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->combometa3->FormattingEnabled = true;
            this->combometa3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"1 Mes", L"2 Meses", L"3 Meses", L"4 Meses ",
                    L"5 Meses", L"6 Meses", L"7 Meses", L"8 Meses", L"9 Meses", L"10 Meses", L"11 Meses ", L"12 Meses"
            });
            this->combometa3->Location = System::Drawing::Point(336, 228);
            this->combometa3->Name = L"combometa3";
            this->combometa3->Size = System::Drawing::Size(116, 22);
            this->combometa3->TabIndex = 26;
            // 
            // combometa2
            // 
            this->combometa2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->combometa2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->combometa2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->combometa2->FormattingEnabled = true;
            this->combometa2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"1 Mes", L"2 Meses", L"3 Meses", L"4 Meses ",
                    L"5 Meses", L"6 Meses", L"7 Meses", L"8 Meses", L"9 Meses", L"10 Meses", L"11 Meses ", L"12 Meses"
            });
            this->combometa2->Location = System::Drawing::Point(336, 170);
            this->combometa2->Name = L"combometa2";
            this->combometa2->Size = System::Drawing::Size(116, 22);
            this->combometa2->TabIndex = 25;
            // 
            // combometa1
            // 
            this->combometa1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->combometa1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->combometa1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->combometa1->FormattingEnabled = true;
            this->combometa1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"1 Mes", L"2 Meses", L"3 Meses", L"4 Meses ",
                    L"5 Meses", L"6 Meses", L"7 Meses", L"8 Meses", L"9 Meses", L"10 Meses", L"11 Meses ", L"12 Meses"
            });
            this->combometa1->Location = System::Drawing::Point(336, 113);
            this->combometa1->Name = L"combometa1";
            this->combometa1->Size = System::Drawing::Size(116, 22);
            this->combometa1->TabIndex = 18;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label20->Location = System::Drawing::Point(260, 233);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(55, 16);
            this->label20->TabIndex = 24;
            this->label20->Text = L"Tiempo";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label19->Location = System::Drawing::Point(260, 170);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(55, 16);
            this->label19->TabIndex = 23;
            this->label19->Text = L"Tiempo";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label18->Location = System::Drawing::Point(260, 114);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(55, 16);
            this->label18->TabIndex = 18;
            this->label18->Text = L"Tiempo";
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel13->Location = System::Drawing::Point(115, 246);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(85, 3);
            this->panel13->TabIndex = 21;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label17->Location = System::Drawing::Point(206, 233);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(26, 16);
            this->label17->TabIndex = 22;
            this->label17->Text = L"Kg";
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel12->Location = System::Drawing::Point(115, 181);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(85, 3);
            this->panel12->TabIndex = 19;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label16->Location = System::Drawing::Point(206, 168);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(26, 16);
            this->label16->TabIndex = 20;
            this->label16->Text = L"Kg";
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel11->Location = System::Drawing::Point(115, 123);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(85, 3);
            this->panel11->TabIndex = 8;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label15->Location = System::Drawing::Point(206, 110);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(26, 16);
            this->label15->TabIndex = 18;
            this->label15->Text = L"Kg";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label14->Location = System::Drawing::Point(28, 228);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(81, 21);
            this->label14->TabIndex = 20;
            this->label14->Text = L"Meta #3";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label13->Location = System::Drawing::Point(28, 165);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(81, 21);
            this->label13->TabIndex = 19;
            this->label13->Text = L"Meta #2";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label12->Location = System::Drawing::Point(28, 110);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(81, 21);
            this->label12->TabIndex = 18;
            this->label12->Text = L"Meta #1";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label11->Location = System::Drawing::Point(180, 6);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(162, 27);
            this->label11->TabIndex = 18;
            this->label11->Text = L"Metas de peso";
            // 
            // ingreso3
            // 
            this->ingreso3->Controls->Add(this->button3);
            this->ingreso3->Controls->Add(this->panel20);
            this->ingreso3->Controls->Add(this->tbrecomndaciones);
            this->ingreso3->Controls->Add(this->label24);
            this->ingreso3->Location = System::Drawing::Point(1036, 260);
            this->ingreso3->Name = L"ingreso3";
            this->ingreso3->Size = System::Drawing::Size(332, 477);
            this->ingreso3->TabIndex = 16;
            // 
            // button3
            // 
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(129, 294);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(84, 72);
            this->button3->TabIndex = 35;
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &IngresodeDatos::button3_Click);
            // 
            // panel20
            // 
            this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel20->Location = System::Drawing::Point(15, 222);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(305, 3);
            this->panel20->TabIndex = 9;
            // 
            // tbrecomndaciones
            // 
            this->tbrecomndaciones->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->tbrecomndaciones->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->tbrecomndaciones->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbrecomndaciones->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->tbrecomndaciones->Location = System::Drawing::Point(15, 203);
            this->tbrecomndaciones->Name = L"tbrecomndaciones";
            this->tbrecomndaciones->Size = System::Drawing::Size(305, 18);
            this->tbrecomndaciones->TabIndex = 34;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->label24->Location = System::Drawing::Point(73, 138);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(205, 27);
            this->label24->TabIndex = 33;
            this->label24->Text = L"Recomendaciones";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Location = System::Drawing::Point(59, 265);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(2, 510);
            this->panel8->TabIndex = 10;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Location = System::Drawing::Point(530, 265);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(2, 540);
            this->panel9->TabIndex = 11;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)));
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Location = System::Drawing::Point(1028, 265);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(2, 540);
            this->panel10->TabIndex = 12;
            // 
            // IngresodeDatos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->ClientSize = System::Drawing::Size(1370, 749);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->panel9);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->ingreso1);
            this->Controls->Add(this->combozona);
            this->Controls->Add(this->ingreso3);
            this->Controls->Add(this->banner);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"IngresodeDatos";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"IngresodeDatos";
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &IngresodeDatos::IngresodeDatos_FormClosed);
            this->Load += gcnew System::EventHandler(this, &IngresodeDatos::IngresodeDatos_Load);
            this->ingreso1->ResumeLayout(false);
            this->ingreso1->PerformLayout();
            this->combozona->ResumeLayout(false);
            this->combozona->PerformLayout();
            this->panel18->ResumeLayout(false);
            this->panel18->PerformLayout();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            this->ingreso3->ResumeLayout(false);
            this->ingreso3->PerformLayout();
            this->ResumeLayout(false);

        }

        IngesoDatosPaciente* PacienteCabezera = NULL;
        IngesoDatosPaciente* PacienteAuxiliar; 
        IngesoDatosPaciente* PacienteNuevoNodo; 

      /*  IngesoDatosPacienteSave* PacienteSCabezera = NULL;
        IngesoDatosPacienteSave* PacienteSAuxiliar;
        IngesoDatosPacienteSave* PacienteNuevoS;*/

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		regresoIngreso->Show();
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void combozona_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    if ((tbnombre->Text == "") || (tbnacimiento->Text == "") || (tbcorreo->Text == "") || (tbtelefono->Text == "") || (cmbzona->Text == "")
        || (tbocupacion->Text == "") || (tbalergias->Text == "") || (tbnoconsume->Text == "") || (comboactividad->Text == "") || (tbmeta1->Text == "") || (tbmeta2->Text == "") || (tbmeta3->Text == "") || (combometa1->Text == "") || (combometa2->Text == "") || (combometa3->Text == "")
        || (tbaltura->Text == "") || (tbginecoide->Text == "") || (tbandroide->Text == "") || (tbrecomndaciones->Text == ""))
    {
        MessageBox::Show("Algunos campos están vacíos", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return; 
    }

    String^ NOMBRE = tbnombre->Text;
    String^ FNACIMIENTO = tbnacimiento->Text;
    String^ CORREO = tbcorreo->Text;
    String^ TELEFONO = tbtelefono->Text;
    String^ ZONARES = cmbzona->Text;
    String^ OCUPACION = tbocupacion->Text;
    String^ ALERGIAS = tbalergias->Text;
    String^ NOCONSUMIBLES = tbnoconsume->Text;
    String^ ACTIVIDADF = comboactividad->Text;
    String^ META1 = tbmeta1->Text;
    String^ META1TIEMPO = combometa1->Text;
    String^ META2 = tbmeta2->Text;
    String^ META2TIEMPO = combometa2->Text;
    String^ META3 = tbmeta3->Text;
    String^ META3TIEMPO = combometa3->Text;
    String^ ALTURA = tbaltura->Text;
    String^ GINECOIDE = tbginecoide->Text;
    String^ ANDROIDE = tbandroide->Text;
    String^ RECOMENDACIONES = tbrecomndaciones->Text;

    //Ingreso de datos a la lista si esta vacía.
    if (PacienteNuevoNodo == NULL)
    {
        PacienteNuevoNodo = new IngesoDatosPaciente();
        PacienteNuevoNodo->Nombre = msclr::interop::marshal_as<string>(NOMBRE);
        PacienteNuevoNodo->fechaNacimiento = msclr::interop::marshal_as<string>(FNACIMIENTO);
        PacienteNuevoNodo->correo = msclr::interop::marshal_as<string>(CORREO);
        PacienteNuevoNodo->Telefono = msclr::interop::marshal_as<string>(TELEFONO);
        PacienteNuevoNodo->zonaResidencia = msclr::interop::marshal_as<string>(ZONARES);
        PacienteNuevoNodo->ocupacion = msclr::interop::marshal_as<string>(OCUPACION);
        PacienteNuevoNodo->alergias = msclr::interop::marshal_as<string>(ALERGIAS);
        PacienteNuevoNodo->noConsumible = msclr::interop::marshal_as<string>(NOCONSUMIBLES);
        PacienteNuevoNodo->actividadFisica = msclr::interop::marshal_as<string>(ACTIVIDADF);
        PacienteNuevoNodo->meta1 = msclr::interop::marshal_as<string>(META1);
        PacienteNuevoNodo->tiempometa1 = msclr::interop::marshal_as<string>(META1TIEMPO);
        PacienteNuevoNodo->meta2 = msclr::interop::marshal_as<string>(META2);
        PacienteNuevoNodo->tiempometa2 = msclr::interop::marshal_as<string>(META2TIEMPO);
        PacienteNuevoNodo->meta3 = msclr::interop::marshal_as<string>(META3);
        PacienteNuevoNodo->tiempometa3 = msclr::interop::marshal_as<string>(META3TIEMPO);
        PacienteNuevoNodo->altura = msclr::interop::marshal_as<string>(ALTURA);
        PacienteNuevoNodo->ginecoide = msclr::interop::marshal_as<string>(GINECOIDE);
        PacienteNuevoNodo->androide = msclr::interop::marshal_as<string>(ANDROIDE);
        PacienteNuevoNodo->recomendaciones = msclr::interop::marshal_as<string>(RECOMENDACIONES);
        PacienteNuevoNodo->sgt = NULL; 
        PacienteNuevoNodo->ant = NULL; 
        PacienteNuevoNodo->sgt = PacienteCabezera;
        PacienteCabezera = PacienteNuevoNodo;

        //Limpiar los textbox
        tbnombre->Text = ""; tbnacimiento->Text = ""; tbcorreo->Text = ""; tbtelefono->Text = ""; cmbzona->Text = ""; tbocupacion->Text = ""; tbalergias->Text = ""; tbnoconsume->Text = "";
        comboactividad->Text = ""; tbmeta1->Text = ""; combometa1->Text = ""; tbmeta2->Text = ""; combometa2->Text = ""; tbmeta3->Text = ""; combometa3->Text = ""; tbaltura->Text = "";
        tbginecoide->Text = ""; tbandroide->Text = ""; tbrecomndaciones->Text = "";
        
        MessageBox::Show("DATOS INGRESADOS CON EXITO", "ATENCIÓN", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    else
    {
        PacienteNuevoNodo = new IngesoDatosPaciente();
        PacienteNuevoNodo->Nombre = msclr::interop::marshal_as<string>(NOMBRE);
        PacienteNuevoNodo->fechaNacimiento = msclr::interop::marshal_as<string>(FNACIMIENTO);
        PacienteNuevoNodo->correo = msclr::interop::marshal_as<string>(CORREO);
        PacienteNuevoNodo->Telefono = msclr::interop::marshal_as<string>(TELEFONO);
        PacienteNuevoNodo->zonaResidencia = msclr::interop::marshal_as<string>(ZONARES);
        PacienteNuevoNodo->ocupacion = msclr::interop::marshal_as<string>(OCUPACION);
        PacienteNuevoNodo->alergias = msclr::interop::marshal_as<string>(ALERGIAS);
        PacienteNuevoNodo->noConsumible = msclr::interop::marshal_as<string>(NOCONSUMIBLES);
        PacienteNuevoNodo->actividadFisica = msclr::interop::marshal_as<string>(ACTIVIDADF);
        PacienteNuevoNodo->meta1 = msclr::interop::marshal_as<string>(META1);
        PacienteNuevoNodo->tiempometa1 = msclr::interop::marshal_as<string>(META1TIEMPO);
        PacienteNuevoNodo->meta2 = msclr::interop::marshal_as<string>(META2);
        PacienteNuevoNodo->tiempometa2 = msclr::interop::marshal_as<string>(META2TIEMPO);
        PacienteNuevoNodo->meta3 = msclr::interop::marshal_as<string>(META3);
        PacienteNuevoNodo->tiempometa3 = msclr::interop::marshal_as<string>(META3TIEMPO);
        PacienteNuevoNodo->altura = msclr::interop::marshal_as<string>(ALTURA);
        PacienteNuevoNodo->ginecoide = msclr::interop::marshal_as<string>(GINECOIDE);
        PacienteNuevoNodo->androide = msclr::interop::marshal_as<string>(ANDROIDE);
        PacienteNuevoNodo->recomendaciones = msclr::interop::marshal_as<string>(RECOMENDACIONES);
        PacienteNuevoNodo->sgt = PacienteCabezera;
        PacienteNuevoNodo->ant = PacienteCabezera->ant;
        PacienteCabezera = PacienteNuevoNodo;

        //Limpiar los textbox
        tbnombre->Text = ""; tbnacimiento->Text = ""; tbcorreo->Text = ""; tbtelefono->Text = ""; cmbzona->Text = ""; tbocupacion->Text = ""; tbalergias->Text = ""; tbnoconsume->Text = "";
        comboactividad->Text = ""; tbmeta1->Text = ""; combometa1->Text = ""; tbmeta2->Text = ""; combometa2->Text = ""; tbmeta3->Text = ""; combometa3->Text = ""; tbaltura->Text = "";
        tbginecoide->Text = ""; tbandroide->Text = ""; tbrecomndaciones->Text = "";

        MessageBox::Show("DATOS INGRESADOS CON EXITO", "ATENCIÓN", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}

       //new--------------------
private: System::Void IngresodeDatos_Load(System::Object^ sender, System::EventArgs^ e) {
   /* FILE* archivo;
    archivo = fopen("PacientesNutresgoN.txt", "rb");
    PacienteCabezera = NULL;

    if (archivo == NULL)
    {
        return;
    }

    while (feof(archivo) == 0)
    {
        PacienteNuevoNodo = (IngesoDatosPaciente*)malloc(sizeof(IngesoDatosPaciente));
        if (1 != fread(PacienteNuevoNodo, sizeof(IngesoDatosPaciente), 1, archivo)) break;
        PacienteNuevoNodo->sgt = PacienteCabezera;
        PacienteCabezera = PacienteNuevoNodo;
    }
    fclose(archivo);*/
}



private: System::Void IngresodeDatos_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    /*PacienteAuxiliar = PacienteCabezera;

    while (PacienteAuxiliar != NULL)
    {
        //Depositamos el nodo nuevo a la estructura para guardar el archivo en orden.
        PacienteNuevoS = new  IngesoDatosPacienteSave();
        PacienteNuevoS->Nom = PacienteAuxiliar->Nombre;
        PacienteNuevoS->fechao = PacienteAuxiliar->fechaNacimiento;
        PacienteNuevoS->mail = PacienteAuxiliar->correo;
        PacienteNuevoS->telefono = PacienteAuxiliar->Telefono;
        PacienteNuevoS->zona = PacienteAuxiliar->zonaResidencia;
        PacienteNuevoS->ocupacion = PacienteAuxiliar->ocupacion;
        PacienteNuevoS->alergias = PacienteAuxiliar->alergias;
        PacienteNuevoS->noConsume = PacienteAuxiliar->noConsumible;
        PacienteNuevoS->actividadF = PacienteAuxiliar->actividadFisica;
        PacienteNuevoS->meta1= PacienteAuxiliar->meta1;
        PacienteNuevoS->tiempo1 = PacienteAuxiliar->tiempometa1;
        PacienteNuevoS->meta2 = PacienteAuxiliar->meta2;
        PacienteNuevoS->tiempo3 = PacienteAuxiliar->tiempometa2;
        PacienteNuevoS->meta3 = PacienteAuxiliar->meta3;
        PacienteNuevoS->tiempo1 = PacienteAuxiliar->tiempometa3;
        PacienteNuevoS->altura = PacienteAuxiliar->altura;
        PacienteNuevoS->gine = PacienteAuxiliar->ginecoide;
        PacienteNuevoS->andro = PacienteAuxiliar->androide;
        PacienteNuevoS->recomendaciones = PacienteAuxiliar->recomendaciones;

        PacienteNuevoS->sgt = PacienteSCabezera;
        PacienteSCabezera = PacienteNuevoS;

        PacienteSAuxiliar = PacienteSAuxiliar->sgt;
    }

  //Guardamos el archivo 
    PacienteSAuxiliar = PacienteSCabezera;

    FILE* archivo;
    archivo = fopen("PacientesNutresgoN.txt", "w");

    while (PacienteSAuxiliar != NULL)
    {
        fwrite(PacienteSAuxiliar, sizeof(IngesoDatosPacienteSave), 1, archivo);
        PacienteSAuxiliar = PacienteSAuxiliar->sgt;
    }
    fclose(archivo);*/
}
};
}
