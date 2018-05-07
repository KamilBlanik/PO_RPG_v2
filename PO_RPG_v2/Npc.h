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
	//settery, ustawiaja parametry w obiekcie klasy Npc
	void setName(std::string name);
	void setType(std::string type);
	void setMoney(int money);
	//dodawanie/usuwanie elemntow z wektorow obiektu klasy Npc
	void addItem(Items* item);
	void deleteItem(int i);
	void addSkill(Skills* skill);
	void deleteSkill(int i);
	//ziwekszanie/ zmniejszanie wartosci money
	void incraseMoney(int i);
	void subbMoney(int i);
	//gettery, pozyskuja parametry obiektu
	int getMoney();
	std::string getName();
	std::string getType();
	std::vector<Items*> getItems();
	std::vector<Skills*> getSkills();


};

#endif