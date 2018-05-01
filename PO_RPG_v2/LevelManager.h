#if !defined(_LEVELMANAGER_H)
#define _LEVELMANAGER_H

#include "stdafx.h"
#include "Player.h"

class LevelManager {
public:
	int maxExpPerLevel;
	Player player;
	void levelUp(Player player);
	void experienceManagement(Player player);
};

#endif
