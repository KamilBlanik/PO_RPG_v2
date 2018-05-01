#if !defined(_CHARACTER_H)
#define _CHARACTER_H

#include <vector>
#include <fstream>
#include <string>
#include "stdafx.h"
#include "Skills.h"


class Character {
public:
	Character();
	virtual ~Character();
	int attack();
	int defend();
	void getHit(int damage);
	bool checkAlive();
	void useSkill(Skills *skill);
	void setName(std::string name);
	void setLevel(int lvl);
	void setHp(int hp);
	void setMana(int mana);
	void setArmor(int armor);
	void setDmg(int dmg);
	void setBonusArmor(int bonus);
	void setBonusDmg(int bonus);
	void increaseLevel(int value);
	void increaseHp(int value);
	void increaseMana(int value);
	void increaseArmor(int value);
	void addSkill(Skills* skill);
	void deleteSkill(int i);
	std::string getName();
	int getLevel();
	int getHp();
	int getMana();
	int getArmor();
	int getDmg();
	std::vector<Skills*> getSkills();

protected:
	std::string name;
	bool isAlive;
	int level;
	int health;
	int mana;
	int armor;
	int bonusArmor;
	int baseDmg;
	int bonusDmg;
	std::vector<Skills*> skill;
};

#endif
