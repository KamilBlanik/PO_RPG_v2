#if !defined(_NPC_H)
#define _NPC_H

#include <string>
#include <vector>
#include "stdafx.h"
#include "Items.h"
#include "Skills.h"

class Npc {
public:
	std::string name;
	std::string type;
	std::vector<Items> item;
	int money;
	void sell(Items item);
	void buy(Items item);
	void learn(Skills skill);

};

#endif