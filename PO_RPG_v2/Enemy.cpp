#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy() {

	loot.clear();
}

Enemy::~Enemy() {
	loot.clear();
}

Items* Enemy::dropItem() {
	srand(time(NULL));
	int i = rand() % this->loot.size();
	return this->loot[i];
}

std::vector<Items*> Enemy::getLoot() {
	return this->loot;
}

void Enemy::setLoot(std::vector<Items*> loot) {
	this->loot = loot;
}

int Enemy::attack() {
	srand(time(NULL));
	int i = 0;
	if (skill.size() != 0) {i = rand() % 3; }
	else
	{
		i = rand() % 2;
	}
	switch (i)
	{
	case 0: {
		return baseDmg + bonusDmg;
	}break;
	case 1: {
		defend();
		return 0;
	}break;
	case 2: {
		
		int j = rand() % skill.size();
		return useSkill(skill[j]);

	}break;
	default:
		break;
	}
}