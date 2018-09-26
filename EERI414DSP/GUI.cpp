#include "GUI.h"

using namespace System;
using namespace System::Windows::Forms;


void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	EERI414DSP::GUI form;
	Application::Run(%form);
	
}
