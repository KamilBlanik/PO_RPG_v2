#if !defined(_ITEMS_H)
#define _ITEMS_H

#include <string>
#include <fstream>
#include <iostream>
#include "stdafx.h"

class Items {
private:
	std::string name;
	std::string type;
	int price;
	int bonusDmg;
	int bonusHp;
	int bonusMana;
	int bonusArmor;
	int itemLevel;
public:
	bool check;
	Items(
		std::string name, 
		std::string type, 
		int price,
		int bonusDmg,
		int bonusHp,
		int bonusMana,
		int bonusArmor,
		int itemLevel);
	Items();
	~Items();
	void setName(std::string name);
	void setType(std::string type);
	void setPrice(int price);
	void setDmg(int dmg);
	void setHp(int hp);
	void setMana(int mana);
	void setArmor(int armor);
	void setItemLvl(int lvl);

	std::string getName();
	std::string getType();
	int getPrice();
	int getDmg();
	int getHp();
	int getMana();
	int getArmor();
	int getItemLvl();

	friend std::ostream& operator<<(std::ostream& out, Items * item);
	friend Items* operator>>(std::ifstream& in, Items * item);
};

#endif
