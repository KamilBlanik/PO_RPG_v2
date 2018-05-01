#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy() {
	loot.clear();
}

Enemy::~Enemy() {
	loot.clear();
}

Items* Enemy::dropItem(Items* loot) {
	int i = rand() % this->loot.size();
	return this->loot[i];
}

