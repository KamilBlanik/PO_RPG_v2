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

	std::vector<Enemy*> spawnEnemies(int count,MapGenerator* dungeon);
	std::vector<Npc*> spawnNpcs(int count);
	Items* generateItem();
	Skills* generateSkill();
	
public:
	void setName(std::string name);
	void setDifficult(int lvl);
	void setEnemies(std::vector<Enemy*> vec);
	void setNpcs(std::vector<Npc*> vec);
	void killEnemy();
	std::vector<Enemy*> getEnemies();
	std::vector<Npc*> getNpcs();
	std::string getName();
	int getDifficult();
	MapGenerator* generateCity();
	MapGenerator* generateDungeon();
	
};

#endif
