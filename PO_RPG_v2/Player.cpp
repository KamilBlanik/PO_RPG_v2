#include "stdafx.h"
#include "Player.h"

Player::Player() {
	experience = 0;
	skillPoints = 0;
	money = 0;

}

Player::~Player() {
	experience = 0;
	skillPoints = 0;
	money = 0;
	inventory.clear();
	backpack.clear();

}

void Player::escape() {

}

void Player::talkToNpc(Npc *npc) {

}

void Player::setExp(int exp) {
	this->experience = exp;
}

void Player::setSkillPoints(int sp) {
	this->skillPoints = sp;
}

void Player::setMoney(int money) {
	this->money = money;
}

void Player::addItemToBp(Items *item) {
	this->backpack.push_back(item);
}

void Player::addItemToInv(Items *item, int controll) {
	bool isThere = false;
	if (level>=item->getItemLvl())
	{
		for (int i = 0; i < inventory.size(); i++)
		{
			if (inventory[i]->getType() == item->getType()) {
				isThere = true;
				addItemToBp(inventory[i]);
				deleteItemFromInv(i);
				deleteItemFromBp(controll);
				this->inventory.push_back(item);
			}

		}
		if (!isThere) {
			deleteItemFromBp(controll);
			this->inventory.push_back(item);
		}
	}
		
}

void Player::addItemToInv(Items *item) {
	this->inventory.push_back(item);

}

void Player::deleteItemFromBp(int i) {

	//delete this->backpack[i];
	this->backpack.erase(backpack.begin() + i);

}

void Player::deleteItemFromInv(int i) {

	//delete this->inventory[i];
	this->inventory.erase(inventory.begin() + i);

}

void Player::incraseMoney(int i) {
	this->money += i;
}
void Player::subbMoney(int i) {
	this->money -= i;
}

int Player::getExp() {
	return this->experience;
}

void Player::getBonuses() {
	int tmpArmor = 0;
	int tmpDmg = 0;
	int tmpHp = 0;
	int tmpMana = 0;
	for (int i = 0; i < inventory.size(); i++)
	{
		tmpArmor += inventory[i]->getArmor();
		tmpDmg += inventory[i]->getDmg();
		tmpHp += inventory[i]->getHp();
		tmpMana += inventory[i]->getMana();
	}
	this->bonusArmor = tmpArmor;
	this->bonusDmg = tmpDmg;
	this->bonusHp = tmpHp;
	this->bonusMana = tmpMana;
}

int Player::getSkillPoints() {
	return this->skillPoints;
}

int Player::getMoney() {
	return this->money;
}

std::vector<Items*> Player::getInventory() {
	return this->inventory;
}

std::vector<Items*> Player::getBp() {
	return this->backpack;
}

void Player::buyItem(int i, Npc* npc) {

	if (npc->getItems()[i]->getPrice() > this->money) {

	}
	else {

		this->money -= npc->getItems()[i]->getPrice();
		npc->incraseMoney(npc->getItems()[i]->getPrice());
		addItemToBp(npc->getItems()[i]);
		npc->deleteItem(i);

	}
}
void Player::sellItem(int i, Npc* npc) {
	if (npc->getMoney()<backpack[i]->getPrice())
	{

	}
	else
	{
		this->money += backpack[i]->getPrice();
		npc->subbMoney(backpack[i]->getPrice());
		npc->addItem(backpack[i]);
		deleteItemFromBp(i);
	}

}
void Player::learnSkill(Skills* skill, Npc* npc) {
	if (skill->getPrice()>this->money)
	{

	}
	else
	{
		this->money -= skill->getPrice();
		npc->incraseMoney(skill->getPrice());
		addSkill(skill);
	}
}

std::ostream& operator<<(std::ostream&  out, Player * player) {
	out << player->getName() << "\n";
	out << player->getLevel() << "\n";
	out << player->getHp() << "\n";
	out << player->getArmor() << "\n";
	out << player->getMana() << "\n";
	out << player->getDmg() << "\n";
	out << player->getExp() << "\n";
	out << player->getSkillPoints() << "\n";
	out << player->getMoney();
	return out;
}

Player* operator>>(std::ifstream& in, Player * player) {
	std::string line;
	std::getline(in, line);
	player->setName(line);
	std::getline(in, line);
	player->setLevel(stoi(line));
	std::getline(in, line);
	player->setHp(stoi(line));
	player->increaseMaxHp(stoi(line)-100);
	std::getline(in, line);
	player->setArmor(stoi(line));
	std::getline(in, line);
	player->setMana(stoi(line));
	player->increaseMaxMana(stoi(line));
	std::getline(in, line);
	player->setDmg(stoi(line));
	std::getline(in, line);
	player->setExp(stoi(line));
	std::getline(in, line);
	player->setSkillPoints(stoi(line));
	std::getline(in, line);
	player->setMoney(stoi(line));

	return player;
}