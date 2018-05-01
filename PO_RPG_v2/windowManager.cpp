#include "windowManager.h"
#include "Player.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	// inicjalizacja okienka
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PORPGv2::windowManager form;
	Application::Run(%form);
	//
}