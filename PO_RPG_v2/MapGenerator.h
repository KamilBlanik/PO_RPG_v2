#if !defined(_MAPGENERATOR_H)
#define _MAPGENERATOR_H

#include "stdafx.h"
#include "Enemy.h"
#include "Npc.h"
#include <string>
#include <vector>

class MapGenerator {
public:
	std::string name;
	int difficult;
	void spawnEnemy(std::vector<Enemy> enemy);
	void spawnNpc(std::vector<Npc> npc);
};

#endif
