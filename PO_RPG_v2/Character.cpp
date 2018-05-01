#include "stdafx.h"
#include "Character.h"


Character::Character() {
	name = "Bezimienny";
	isAlive = true;
	level = 0;
	health = 100;
	mana = 0;
	armor = 0;
	baseDmg = 10;
	bonusDmg = 0;
	skill.clear();

}

Character::~Character() {
	name = "Bezimienny";
	isAlive = false;
	level = 0;
	health = 0;
	mana = 0;
	armor = 0;
	baseDmg = 0;
	bonusDmg = 0;
	skill.clear();
}

int Character::attack() {
	return baseDmg + bonusDmg;
}

int Character::defend() {
	return armor = armor + bonusArmor;
}

void Character::getHit(int damage) {
	health = health - int(damage-(damage*(armor/100)));
	
}

bool Character::checkAlive() {
	if (health > 0) {
		return true;
	}
	else
	{
		return false;
	}
}

void Character::useSkill(Skills* skill) {
	if (skill->getType() == "healing") {
		increaseHp(skill->getValue());
	}
	if (skill->getType() == "defensive") {
		increaseArmor(skill->getValue());
	}
	if (skill->getType() == "offensive") {
		//todo
	}
}

void Character::setName(std::string name) {
	this->name = name;
}

void Character::setLevel(int lvl) {
	this->level = lvl;
}

void Character::setHp(int val) {
	this->health = val;
}

void Character::setMana(int val) {
	this->mana = val;
}

void Character::setArmor(int val) {
	this->armor = val;
}

void Character::setDmg(int val) {
	this->baseDmg = val;
}

void Character::setBonusArmor(int val) {
	this->bonusArmor = val;
}

void Character::setBonusDmg(int val) {
	this->bonusDmg = val;
}

void Character::increaseArmor(int val) {
	this->armor += val;
}

void Character::increaseHp(int val) {
	this->health += val;
}

void Character::increaseLevel(int val) {
	this->level += val;
}

void Character::increaseMana(int val) {
	this->mana += val;
}

void Character::addSkill(Skills* skill) {
	this->skill.push_back(skill);
}

void Character::deleteSkill(int i) {
	delete this->skill[i];
	this->skill.erase(skill.begin() + i);
}

std::string Character::getName() {
	return name;
}

int Character::getArmor() {
	return armor;
}

int Character::getDmg() {
	return baseDmg;
}

int Character::getMana() {
	return mana;
}

int Character::getLevel() {
	return level;
}

int Character::getHp() {
	return health;
}

std::vector<Skills*> Character::getSkills() {
	return skill;
}