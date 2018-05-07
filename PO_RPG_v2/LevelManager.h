#if !defined(_LEVELMANAGER_H)
#define _LEVELMANAGER_H

#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"
class LevelManager {
private:
	int maxExpPerLevel;
	int maxLevel;	
public:
	
	LevelManager();
	~LevelManager();
	//gettery, pobieraja wartosci parametrow klasy LevelManager
	int getMaxLvl();
	int getMaxExpPerLvl();
	//dodawanie doswiadczenai po zabicu wroga
	void getExp(Player* player,Enemy* enemy);
	//zwiekszanie parametrow gracza po przekroczeniu maksymalnego progu doswaiadczenia
	void levelUp(Player* player);
	//ustawianie progu doswiadczenia w zaleznosci od poziomu gracza
	void setMaxExp(Player* player);
};

#endif
