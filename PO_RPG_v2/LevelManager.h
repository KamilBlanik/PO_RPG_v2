#if !defined(_LEVELMANAGER_H)
#define _LEVELMANAGER_H

#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"
class LevelManager {
private:
	
	void setMaxExp(Player* player);
public:
	LevelManager();
	~LevelManager();
	void getExp(Player* player,Enemy* enemy);
	int maxExpPerLevel;
	int maxLevel;
	void levelUp(Player* player);
	
};

#endif
