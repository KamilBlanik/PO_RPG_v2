#include "windowManager.h"
#include "Player.h"
#include "FileManager.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	// inicjalizacja okienka
	/*
	Player *player = new Player();
	FileManager *fm = new FileManager();
	fm->saveGame(player,"t1.txt");
	fm->saveGame(player, "t2.txt");
	fm->saveGame(player, "t3.txt");
	fm->saveGame(player, "t4.txt");*/
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PORPGv2::windowManager form;
	Application::Run(%form);
	//
}