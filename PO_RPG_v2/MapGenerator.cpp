#include "stdafx.h"
#include "MapGenerator.h"

void MapGenerator::spawnEnemy(std::vector<Enemy> enemy) {

}

void MapGenerator::spawnNpc(std::vector<Npc>  npc) {

}

void MapGenerator::setName(std::string name) {
	this->name = name;
}

void MapGenerator::setDifficult(int lvl) {
	this->difficult = lvl;
}

std::string MapGenerator::getName() {
	return this->name;
}

int MapGenerator::getDifficult() {
	return this->difficult;
}
