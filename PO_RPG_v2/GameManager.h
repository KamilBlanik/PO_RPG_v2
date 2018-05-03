#if !defined(_GAMEMANAGER_H)
#define _GAMEMANAGER_H

#include <iostream>
#include "stdafx.h"
#include "Player.h"
#include "MapGenerator.h"


class GameManager {
private:
	Player * player;
	MapGenerator* map;
public:
	GameManager();
	~GameManager();
	void goToDangeon(Player* player);
	void goToCity(Player* player);
	MapGenerator* getMap();
	Player* getPlayer();
};

#endif
