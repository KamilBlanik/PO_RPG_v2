#if !defined(_ENEMY_H)
#define _ENEMY_H

#include <vector>
#include <cstdlib>
#include "stdafx.h"
#include "Character.h"
#include "Items.h"

class Enemy : public Character {
public:
	Enemy();
	~Enemy();
	std::vector<Items*> loot;
	Items* dropItem(Items* loot);
};

#endif
