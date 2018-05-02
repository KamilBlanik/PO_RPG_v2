#if !defined(_MAPGENERATOR_H)
#define _MAPGENERATOR_H

#include "stdafx.h"
#include "Enemy.h"
#include "Npc.h"
#include <string>
#include <vector>

class MapGenerator {
	std::string name;
	int difficult;
public:
	void setName(std::string name);
	void setDifficult(int lvl);
	std::string getName();
	int getDifficult();
	void spawnEnemy(std::vector<Enemy> enemy);
	void spawnNpc(std::vector<Npc> npc);
};

#endif
