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
	//atak, zwracanie wartosci baseDmg + bonusDmg
	virtual int attack();
	//obrona, chwilowe(czas 1 tura) podwajanie wartosci bonusArmor
	void defend();
	//otrzymywanie, zredukowanych przez armor + bonusArmor, obrazem
	void getHit(int damage);
	//sprawdza czy obiekt ma wiecej niz 0 pkt zycia
	bool checkAlive();
	//uzywanie umiejetnosci, w zaleznosci od typu
	int useSkill(Skills *skill);
	//settery, ustawiaja parametry obiektu klasy Character
	void setName(std::string name);
	void setLevel(int lvl);
	void setHp(int hp);
	void setMana(int mana);
	void setArmor(int armor);
	void setDmg(int dmg);
	void setBonusArmor(int bonus);
	void setBonusDmg(int bonus);
	void setBonusHp(int bonus);
	//funkcje zwieszajace bonusy
	void increaseLevel(int value);
	void increaseHp(int value);
	void increaseMaxHp(int value);
	void increaseMaxMana(int value);
	void increaseMana(int value);
	void increaseArmor(int value);
	// dodawnie/usuwanie obiektow Skills do wektora
	void addSkill(Skills* skill);
	void deleteSkill(int i);
	// resetowanie zycia i many do wartosci podstawowych(maksymalnych)
	void refresh();
	//gettery, pobieraja parametry obiektu klasy Character
	std::string getName();
	int getLevel();
	int getHp();
	int getMana();
	int getArmor();
	int getDmg();
	int getBonusHp();
	int getBonusMana();
	int getBonusArmor();
	int getBonusDmg();
	std::vector<Skills*> getSkills();
	//pomocnicze zmienne przy ustawianiu i usuwaniu bonusu do obrony
	bool incrasedArmor;
	int incrasedArmorVal;
protected:
	std::string name;
	bool isAlive;
	int level;
	int health;
	int mana;
	int armor;
	int bonusHp;
	int bonusArmor;
	int bonusMana;
	int baseDmg;
	int bonusDmg;
	int maxHp;
	int maxMana;
	
	
	std::vector<Skills*> skill;
};

#endif
