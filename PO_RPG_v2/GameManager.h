#if !defined(_GAMEMANAGER_H)
#define _GAMEMANAGER_H

#include <iostream>
#include "stdafx.h"
#include "Player.h"
#include "MapGenerator.h"


class GameManager {
private:
	Player * player;

public:
	GameManager();
	~GameManager();
	void goToDangeon(Player* player);
	void goToCity(Player* player);
};

#endif
