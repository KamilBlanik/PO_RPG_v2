#include "stdafx.h"
#include "Character.h"


Character::Character() {
	name = "Bezimienny";
	isAlive = true;
	level = 0;
	health = 100;
	mana = 0;
	armor = 0;
	bonusHp = 0;
	baseDmg = 10;
	bonusMana = 0;
	bonusDmg = 0;
	bonusArmor = 0;
	skill.empty();
	incrasedArmor = false;
	incrasedArmorVal = 0;
	maxHp = health;
	maxMana = mana;
}

Character::~Character() {
	name = "Bezimienny";
	isAlive = false;
	level = 0;
	health = 0;
	mana = 0;
	armor = 0;
	bonusHp = 0;
	bonusMana = 0;
	baseDmg = 0;
	bonusDmg = 0;
	bonusArmor = 0;
	incrasedArmor = false;
	incrasedArmorVal = 0;
	skill.clear();
	maxHp = health;
	maxMana = mana;
}

int Character::attack() {
	return baseDmg + bonusDmg;
}

void Character::defend() {
	incrasedArmor = true;
	increaseArmor(bonusArmor);
	incrasedArmorVal = bonusArmor;
}

void Character::getHit(int damage) {
	health = health - int(damage-(damage*((armor+bonusArmor)/200)));
	
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

int Character::useSkill(Skills* skill) {
	if (this->mana-skill->getMana()>=0)
	{
		if (skill->getType() == "Leczacy") {
			increaseHp(skill->getValue());
			return 0;
		}
		if (skill->getType() == "Defensywny") {
			incrasedArmor = true;
			increaseArmor(skill->getValue());
			incrasedArmorVal = skill->getValue();
			return 0;
		}
		if (skill->getType() == "Ofensywny") {
			return skill->getValue();

		}
		this->mana -= skill->getMana();
	}
}
void Character::refresh() {
	mana = maxMana;
	health = maxHp;
}

void Character::increaseMaxHp(int value) {
	this->maxHp += value;
}

void Character::increaseMaxMana(int value) {
	this->maxMana += value;
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

void Character::setBonusHp(int bonus) {
	this->bonusHp = bonus;
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

int Character::getBonusHp() {
	return this->bonusHp;
}
int Character::getBonusMana() {
	return this->bonusMana;
}
int Character::getBonusArmor() {
	return this->bonusArmor;
}
int Character::getBonusDmg() {
	return this->bonusDmg;
}

std::vector<Skills*> Character::getSkills() {
	return skill;
}