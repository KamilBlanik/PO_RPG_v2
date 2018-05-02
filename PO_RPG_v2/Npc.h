#if !defined(_NPC_H)
#define _NPC_H

#include <string>
#include <vector>
#include "stdafx.h"
#include "Items.h"
#include "Skills.h"

class Npc {
private:
	std::string name;
	std::string type;
	std::vector<Items*> items;
	std::vector<Skills*> skills;
	int money;
public:
	Npc(std::string name, std::string type, std::vector<Items*> items, std::vector<Skills*> skills, int money);
	~Npc();
	void setName(std::string name);
	void setType(std::string type);
	void addItem(Items* item);
	void deleteItem(int i);
	void addSkill(Skills* skill);
	void deleteSkill(int i);
	void setMoney(int money);
	std::string getName();
	std::string getType();
	std::vector<Items*> getItems();
	std::vector<Skills*> getSkills();

	void sell(Items* item);
	void buy(Items* item);
	void learn(Skills* skill);

};

#endif