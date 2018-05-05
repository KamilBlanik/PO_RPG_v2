#include "stdafx.h"
#include "CombatManager.h"


void CombatManager::combat(Player* player, MapGenerator* map){
	isCombat = true;
	while (player->checkAlive() || map->getEnemies()[0]->checkAlive())
	{

	}
}

