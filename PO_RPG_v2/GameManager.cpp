#include "stdafx.h"
#include "GameManager.h"



GameManager::GameManager() {
	gameRunning = true;
}

GameManager::~GameManager() {
	
}
void GameManager::gameMenu() {
	std::cout << "GAME MENU\n";
}

void GameManager::goToDangeon(Player player) {
	choice = 1;
}

void GameManager::goToCity(Player player) {
	choice = 2;
}

