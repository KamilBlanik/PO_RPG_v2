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
	//przenosznie obiektu klasy Player do generowanej mapy
	void goToDangeon(Player* player);
	void goToCity(Player* player);
	//gettery, pobieraja parametry klasy GameManager
	MapGenerator* getMap();
	Player* getPlayer();
};

#endif
