#include "stdafx.h"
#include "MapGenerator.h"

std::vector<Enemy*> MapGenerator::spawnEnemy(int count) {

}

std::vector<Npc*> MapGenerator::spawnNpc(int count) {
	std::string name[5] = { "A","B","C","D","E" };
	std::string type[2] = { "Handlarz","Nauczyciel" };
	
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
