#include "stdafx.h"
#include "GameManager.h"



GameManager::GameManager() {
	player = new Player();
}

GameManager::~GameManager() {
	
}


void GameManager::goToDangeon(Player* player) {
	this->player = player;
}

void GameManager::goToCity(Player *player) {
	
	this->player = player;

}

