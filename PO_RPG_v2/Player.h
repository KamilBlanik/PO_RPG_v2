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
	// settery, ustawiaja parametry obiektu klasy Player
	void setExp(int exp);
	void setSkillPoints(int sp);
	void setMoney(int money);
	// funkcje dodajace elementy do wektorow skladowych klasy Player
	void addItemToInv(Items *item, int controll);
	void addItemToInv(Items *item);
	void addItemToBp(Items *item);
	// funkcje usuwajace elementy z wektorow
	void deleteItemFromInv(int i);
	void deleteItemFromBp(int i);
	// zwiekszanie i zmniejszanie ilosci pieniedzy
	void incraseMoney(int i);
	void subbMoney(int i);
	// dodawanie/ usuwanie odpowiednich elemntow wektorow klasy Player przez interakcje z klasa Npc
	void buyItem(int i,Npc* npc);
	void sellItem(int i, Npc* npc);
	void learnSkill(Skills* skill,Npc* npc);
	//funkcja dodajaca bonusy graczowi z przedmiotow bedacych w ekwipunku
	void getBonuses();
	//gettery, pozyskuja parametry klasy Player
	int getExp();
	int getSkillPoints();
	int getMoney();
	std::vector<Items*> getInventory();
	std::vector<Items*> getBp();
	//przeciazanie operatorow do zapisu i odczytu z pliku dla obiektow klasy Player
	friend std::ostream& operator<<(std::ostream& out, Player * player);
	friend Player* operator>>(std::ifstream& in, Player * player);
};

#endif
