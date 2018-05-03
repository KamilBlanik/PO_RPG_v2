#include "stdafx.h"
#include "GameManager.h"



GameManager::GameManager() {
	player = new Player();
	map = new MapGenerator();
}

GameManager::~GameManager() {
	delete player;
	delete map;
}


void GameManager::goToDangeon(Player* player) {
	this->player = player;
	map = map->generateDungeon();
}

void GameManager::goToCity(Player *player) {
	
	this->player = player;
	map = map->generateCity();
}

MapGenerator* GameManager::getMap() {
	return this->map;
}

Player* GameManager::getPlayer() {
	return this->player;
}