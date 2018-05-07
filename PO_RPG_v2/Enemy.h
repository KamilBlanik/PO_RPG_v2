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
	//losowanie przedmiotu z wektora 
	Items* dropItem();
	//pobieranie wartosci wektora obiektu klasy Enemy
	std::vector<Items*> getLoot();
	//ustawienie wartosci wektora obiektu klasy Enemy
	void setLoot(std::vector<Items*> loot);
	//losowanie ataku obiektu kalasy Enemy
	int attack();
};

#endif
