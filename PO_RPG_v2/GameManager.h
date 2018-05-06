#if !defined(_GAMEMANAGER_H)
#define _GAMEMANAGER_H

#include <iostream>
#include "stdafx.h"
#include "MapGenerator.h"
#include "LevelManager.h"

class GameManager {
private:
	Player * player;
	MapGenerator* map;
public:
	GameManager();
	~GameManager();
	void killEnemy();
	void goToDangeon(Player* player);
	void goToCity(Player* player);
	MapGenerator* getMap();
	Player* getPlayer();
};

#endif
