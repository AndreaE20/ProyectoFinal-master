#include "ingresoPrincipal.h"

using namespace ProyectoFinalProgramacion1;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoFinalProgramacion1::ingresoPrincipal form;
	Application::Run(% form);
	
}

