#include "stdafx.h"
#include "LevelManager.h"


LevelManager::LevelManager() {
	maxExpPerLevel = 100;
	maxLevel = 10;
}
LevelManager::~LevelManager() {
	maxExpPerLevel = 0;
	maxLevel = 0;
}

void LevelManager::levelUp(Player* player) {
	player->increaseHp(50);
	player->increaseMaxHp(50);
	player->increaseMana(10);
	player->increaseMaxMana(10);
	player->setDmg(player->getDmg() + 10);
	player->increaseLevel(1);
	player->setSkillPoints(player->getSkillPoints() + 2);
	player->setExp(player->getExp() - maxExpPerLevel);
	setMaxExp(player);

}

void LevelManager::getExp(Player* player, Enemy* enemy) {

	int exp = enemy->getLevel() * 35 + 25;
	player->setExp(exp + player->getExp());
}

void LevelManager::setMaxExp(Player* player) {
	int maxExp = player->getLevel() * 125 + 100;
	this->maxExpPerLevel = maxExp;
}