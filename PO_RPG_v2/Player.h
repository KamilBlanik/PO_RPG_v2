#if !defined(_PLAYER_H)
#define _PLAYER_H

#include <vector>
#include <iostream>
#include "stdafx.h"
#include "Character.h"
#include "Items.h"
#include "Npc.h"

class Player : public Character {
private:
	int experience;
	int skillPoints;
	int money;
	std::vector<Items*> inventory;
	std::vector<Items*> backpack;
	
public:
	Player();
	~Player();
	void setExp(int exp);
	void setSkillPoints(int sp);
	void setMoney(int money);
	void addItemToInv(Items *item);
	void addItemToBp(Items *item);
	void deleteItemFromInv(int i);
	void deleteItemFromBp(int i);
	void escape();
	void statsManagement();
	void inventoryManagement();
	void backpackManagement();
	void talkToNpc(Npc *npc);
	int getExp();
	int getSkillPoints();
	int getMoney();
	std::vector<Items*> getInventory();
	std::vector<Items*> getBp();

	friend std::ostream& operator<<(std::ostream& out, Player * player);
	friend Player* operator>>(std::ifstream& in, Player * player);
};

#endif
