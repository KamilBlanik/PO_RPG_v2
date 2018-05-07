#include "stdafx.h"
#include "Npc.h"

Npc::Npc(std::string name, std::string type, std::vector<Items*> items, std::vector<Skills*> skills, int money) {
	this->name = name;
	this->type = type;
	this->items = items;
	this->skills = skills;
	this->money = money;
}

Npc::~Npc() {
	this->name = "";
	this->type = "";
	this->items.clear();
	this->skills.clear();
	this->money = 0;
}

void Npc::setName(std::string name) {
	this->name = name;
}

void Npc::setType(std::string type) {
	this->type = type;
}
void Npc::addItem(Items* item) {
	this->items.push_back(item);
}
void Npc::deleteItem(int i) {
	//delete this->items[i];
	this->items.erase(items.begin() + i);
}
void Npc::addSkill(Skills* skill) {
	this->skills.push_back(skill);
}
void Npc::deleteSkill(int i) {
	delete this->skills[i];
	this->skills.erase(skills.begin() + i);
}
void Npc::setMoney(int money) {
	this->money = money;
}

void Npc::incraseMoney(int i) {
	this->money += i;
}

void Npc::subbMoney(int i) {
	this->money -= i;
}

int Npc::getMoney() {
	return this->money;
}

std::string Npc::getName() {
	return this->name;
}
std::string Npc::getType() {
	return this->type;
}
std::vector<Items*> Npc::getItems() {
	return items;
}
std::vector<Skills*> Npc::getSkills() {
	return skills;
}

