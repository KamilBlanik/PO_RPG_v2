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