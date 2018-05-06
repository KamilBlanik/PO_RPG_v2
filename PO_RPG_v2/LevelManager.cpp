#include "stdafx.h"
#include "LevelManager.h"


void LevelManager::levelUp(Player* player) {
	player->increaseHp(50);
	player->increaseMaxHp(50);
	player->increaseMana(10);
	player->increaseMaxMana(10);
	player->setDmg(player->getDmg() + 10);
	player->increaseLevel(1);
	player->setSkillPoints(player->getSkillPoints() + 2);
	setMaxExp(player);
}

void LevelManager::experienceManagement(Player* player, Enemy* enemy) {
	
	int exp = enemy->getLevel() * 35 + 25;
	player->setExp(exp + player->getExp());
	if (player->getExp() >= maxExpPerLevel) {
		if (player->getLevel() < maxLevel)
			levelUp(player);
	}
}

void LevelManager::setMaxExp(Player* player) {
	int maxExp = player->getLevel() * 125 + 100;
	this->maxExpPerLevel = maxExp;
}