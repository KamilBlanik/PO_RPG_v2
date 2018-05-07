#if !defined(_SKILLS_H)
#define _SKILLS_H

#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>

class Skills {
private:
	std::string name;
	std::string type;
	int value;
	int mana;
	int price;
	int skillLevel;
	
public:
	bool check; // Sprawdzenie pomocnicze przy odczycie z zapisu
	Skills(std::string name, std::string type, int mana, int value, int price, int skillLevel);
	Skills();
	~Skills();
	// settery, sluza do ustawiania wartosci parametrow obiektu klasy Skills
	void setName(std::string name);
	void setType(std::string type);
	void setValue(int vl);
	void setPrice(int price);
	void setSkillLevel(int lvl);
	void setMana(int val);
	// gettery, sluza do uzyskania wartosci parametrow obiektu klasy Skills
	std::string getName();
	std::string getType();
	int getValue();
	int getPrice();
	int getSkillLevel();
	int getMana();
	// Przeciazone operatory zapisu i odczytu z pliku
	friend std::ostream& operator<<(std::ostream& out, Skills * skill);
	friend Skills* operator>>(std::ifstream& in, Skills * skill);
};

#endif 
