#if !defined(_COMBATMANAGER_H)
#define _COMBATMANAGER_H

#include "stdafx.h"
#include "Player.h"
#include "MapGenerator.h"

class CombatManager {
private:
	bool isCombat;
public:
	void combat(Player* player, MapGenerator* map);
};

#endif
