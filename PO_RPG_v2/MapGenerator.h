#if !defined(_MAPGENERATOR_H)
#define _MAPGENERATOR_H

#include "stdafx.h"
#include "Enemy.h"
#include "Npc.h"
#include <string>
#include <vector>

class MapGenerator {
private:
	std::string name;
	int difficult;
	std::vector<Npc*> npcs;
	std::vector<Enemy*> enemies;
	std::vector<Enemy*> spawnEnemies(int count);
	std::vector<Npc*> spawnNpcs(int count);
	//generowanie obiektow klasy Skills i Items o losowych parametrach
	Items* generateItem();
	Skills* generateSkill();
	
public:
	//settery, ustawiaja wartosci parametrow obiektu klasy MapGenerator
	void setName(std::string name);
	void setDifficult(int lvl);
	void setEnemies(std::vector<Enemy*> vec);
	void setNpcs(std::vector<Npc*> vec);
	//usuniecie przeciwnika z danego obiektu klasy MapGenerator
	void killEnemy();
	//gettery , pobieraja wartosci obiektu kalsy MapGenerator
	std::vector<Enemy*> getEnemies();
	std::vector<Npc*> getNpcs();
	std::string getName();
	int getDifficult();
	//generowaie losowych obiektow klasy MapGenerator, zale¿nie od tego czy mapa jest miastem czy lochem
	MapGenerator* generateCity();
	MapGenerator* generateDungeon();
	
};

#endif
