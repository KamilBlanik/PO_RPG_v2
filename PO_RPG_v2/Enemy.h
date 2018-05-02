#if !defined(_ENEMY_H)
#define _ENEMY_H

#include <vector>
#include <cstdlib>
#include "stdafx.h"
#include "Character.h"
#include "Items.h"

class Enemy : public Character {
private:
	
	std::vector<Items*> loot;

public:
	Enemy();
	~Enemy();	
	Items* dropItem();
	std::vector<Items*> getLoot();
	void setLoot(std::vector<Items*> loot);
};

#endif
