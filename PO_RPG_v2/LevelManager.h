#if !defined(_LEVELMANAGER_H)
#define _LEVELMANAGER_H

#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"
class LevelManager {
private:
	int maxExpPerLevel = 100;
	int maxLevel = 10;
	void levelUp(Player* player);
	void setMaxExp(Player* player);
public:
	
	void experienceManagement(Player* player,Enemy* enemy);
	
};

#endif
