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
	void addItemToInv(Items *item, int controll);
	void addItemToInv(Items *item);
	void addItemToBp(Items *item);
	void deleteItemFromInv(int i);
	void deleteItemFromBp(int i);
	void incraseMoney(int i);
	void subbMoney(int i);
	void buyItem(int i,Npc* npc);
	void sellItem(int i, Npc* npc);
	void learnSkill(Skills* skill,Npc* npc);
	void getBonuses();
	int getExp();
	int getSkillPoints();
	int getMoney();
	std::vector<Items*> getInventory();
	std::vector<Items*> getBp();

	friend std::ostream& operator<<(std::ostream& out, Player * player);
	friend Player* operator>>(std::ifstream& in, Player * player);
};

#endif
