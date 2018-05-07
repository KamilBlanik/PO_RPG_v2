#if !defined(_ITEMS_H)
#define _ITEMS_H

#include <string>
#include <fstream>
#include <iostream>
#include "stdafx.h"
#include "time.h"

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
	bool check; // pomocniczy prametr wykorzystywany podczas zapisu i odczytu z pliku
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
	//settery, ustawiaja wartosci parametrow obiektu klasy Items
	void setName(std::string name);
	void setType(std::string type);
	void setPrice(int price);
	void setDmg(int dmg);
	void setHp(int hp);
	void setMana(int mana);
	void setArmor(int armor);
	void setItemLvl(int lvl);
	//gettery, pobieraja wartosci parametrow obiektu klasy Items
	std::string getName();
	std::string getType();
	int getPrice();
	int getDmg();
	int getHp();
	int getMana();
	int getArmor();
	int getItemLvl();
	//przeciazanie operatorow zapisu i odczytu z pliku dla obiektow klasy Items
	friend std::ostream& operator<<(std::ostream& out, Items * item);
	friend Items* operator>>(std::ifstream& in, Items * item);
};

#endif
