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
	int getMaxLvl();
	int getMaxExpPerLvl();
	void getExp(Player* player,Enemy* enemy);
	void levelUp(Player* player);
	void setMaxExp(Player* player);
};

#endif
