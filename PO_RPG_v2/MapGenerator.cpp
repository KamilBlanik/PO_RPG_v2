#include "stdafx.h"
#include "MapGenerator.h"

std::vector<Enemy*> MapGenerator::spawnEnemies(int count) {
	std::string name[5] = { "Gnom","Troll","Chochlik","Zywiolak","Golem" };
	std::vector<Enemy*> enemies;
	std::vector<Items*> loot;
	std::vector<Skills*> skills;
	Enemy* enemy;
	Items* item ;
	Skills* skill;
	int j;
	//srand(time(NULL));
	for (int i = 0; i < count; i++)
	{
		enemy = new Enemy();
		j = rand() % 5;
		enemy->setName(name[j]);
		enemy->setLevel(getDifficult());
		enemy->setHp(enemy->getLevel() * 50 + 75);
		enemy->setArmor(rand() % 5 + enemy->getLevel() * 5);
		enemy->setBonusArmor(rand() % 3 + enemy->getLevel() * 2);
		enemy->setDmg(rand() % 10 + 5 + 5 * enemy->getLevel());
		enemy->setMana(rand() % 10 + 10 * enemy->getLevel());
		int k = rand() % 5 + 1;
		for (int e = 0; e < k; e++)
		{
			item = new Items();
			item = generateItem();
			loot.push_back(item);
		}
		int w = rand() % 3 + 1;
		for (int x = 0; x < w; x++)
		{
			skill = new Skills();
			skill = generateSkill();
			enemy->addSkill(skill);
		}
		enemy->setLoot(loot);
		enemies.push_back(enemy);
	}

	return enemies;
}

std::vector<Npc*> MapGenerator::spawnNpcs(int count) {
	std::string name[5] = { "Janek","Bartek","Tomek","Kamil","Marcin" };
	std::string type[2] = { "Handlarz","Nauczyciel" };
	std::vector<Items*> items;
	std::vector<Skills*> skills;
	std::vector<Npc*> npcs;
	srand(time(NULL));
	for (int c = 0; c < count; c++)
	{
		int money = rand() % 500 + 300;
		int i = rand() % 2;
		int j = rand() % 5;
		switch (i)
		{
		case 0: {
			items.clear();
			int icount = rand() % 7 + 2;
			for (int k = 0; k < icount; k++)
			{
				Items* item = generateItem();
				items.push_back(item);
			}
		}
				break;
		case 1: {
			skills.clear();
			int icount = rand() % 3 + 1;
			for (int k = 0; k < icount; k++)
			{
				Skills* skill = generateSkill();
				skills.push_back(skill);
			}
		}
				break;
		default:
			break;
		}
		Npc* npc = new Npc(name[j], type[i], items, skills, money);
		npcs.push_back(npc);
	}
	return npcs;

}

Items* MapGenerator::generateItem() {
	std::string name[5] = { "Lotrzykowy","Tajemniczy","Gigantyczny","Magiczny","Rycerski" };
	std::string type[5] = { "Miecz","Helm","Zbroja","Tarcza","Naszyjnik" };
	int price = 0;
	int bonusDmg = 0;
	int bonusHp = 0;
	int bonusMana = 0;
	int bonusArmor = 0;
	int itemLevel = 0;
	//srand(time(NULL));
	itemLevel = rand() % 11;
	int i = rand() % 5;
	int j = rand() % 5;
	switch (j)
	{
	case 0: {
		bonusDmg = rand() % 15 + 5 + 5 * itemLevel;
	}
			break;
	case 1: {
		bonusArmor = rand() % 2 + 3 + 2 * itemLevel;
		bonusMana = rand() % 5 + 5 + 5 * itemLevel;
	}
			break;
	case 2: {
		bonusArmor = rand() % 5 + 5 + 5 * itemLevel;
		bonusHp = rand() % 20 + 5 + 10 * itemLevel;
	}
			break;
	case 3: {
		bonusArmor = rand() % 3 + 2 + 5 * itemLevel;
		bonusDmg = rand() % 5 + 5 + 3 * itemLevel;
	}
			break;
	case 4: {
		bonusDmg = rand() % 5 + 5 + 3 * itemLevel;
		bonusArmor = rand() % 2 + 1 + 1 * itemLevel;
		bonusHp = rand() % 10 + 5 + 5 * itemLevel;
		bonusMana = rand() % 10 + 5 + 5 * itemLevel;
	}
			break;
	default:
		break;
	}
	price = rand() % 50 + 50 + 50 * itemLevel;
	Items* item = new Items(name[i], type[j], price, bonusDmg, bonusHp, bonusMana, bonusArmor, itemLevel);
	return item;
}

Skills* MapGenerator::generateSkill() {
	std::string nameOff[3] = { "Kula Ognia","Lodowy pocisk","Wietrzna Piesc" };
	std::string nameDef[3] = { "Ognista zbroja", "Ziemna tarcza", "Sciana wiatru" };
	std::string nameHeal[3] = { "Wodny dotyk", "Leczacy promien", "Kojacy plomien" };
	std::string type[3] = { "Defensywny","Leczacy","Ofensywny" };
	std::string name;
	int value;
	int price;
	int skillLevel;
	int manaCost;
	//srand(time(NULL));
	skillLevel = rand() % 11;
	int i = rand() % 3;
	int j = rand() % 3;
	switch (i)
	{
	case 0: {
		name = nameDef[j];
		value = rand() % 5 + 5 + 5 * skillLevel;
	}
			break;
	case 1: {
		name = nameHeal[j];
		value = rand() % 25 + 25 + 25 * skillLevel;
	}
			break;
	case 2: {
		name = nameOff[j];
		value = rand() % 50 + 50 + 25 * skillLevel;
	}
			break;
	default:
		break;
	}
	manaCost = rand() % 5 + 5 + 10 * skillLevel;
	price = rand() % 100 + 100 + 50 * skillLevel;
	Skills* skill = new Skills(name, type[i],manaCost, value, price, skillLevel);
	return skill;

}

MapGenerator* MapGenerator::generateCity() {
	MapGenerator* map = new MapGenerator();
	std::string cityName[5] = { "Wroclaw","Rybnik","Kielce","Warszawa","Radom" };
	srand(time(NULL));
	int i = rand() % 5;
	int j = rand() % 4 + 2;

	map->setName(cityName[i]);
	map->setDifficult(0);
	map->setNpcs(spawnNpcs(j));
	return map;
}

MapGenerator* MapGenerator::generateDungeon() {
	MapGenerator* dungeon = new MapGenerator();
	std::string dungeonName[5] = { "Podziemia klasztoru","Katakumby Majow","Piwnica w bloku","Lochy zamku","Opuszczona kopalnia" };
	srand(time(NULL));
	int i = rand() % 5;
	int j = rand() % 4 + 2;
	int lvl = rand() % 11;
	setName(dungeonName[i]);
	setDifficult(lvl);
	setEnemies(spawnEnemies(j));
	dungeon->setName(dungeonName[i]);
	dungeon->setDifficult(lvl);
	dungeon->setEnemies(spawnEnemies(j));
	return dungeon;
}

void MapGenerator::setName(std::string name) {
	this->name = name;
}

void MapGenerator::setDifficult(int lvl) {
	this->difficult = lvl;
}

std::string MapGenerator::getName() {
	return this->name;
}

int MapGenerator::getDifficult() {
	return this->difficult;
}

void MapGenerator::setEnemies(std::vector<Enemy*> vec) {
	this->enemies = vec;
}

void MapGenerator::setNpcs(std::vector<Npc*> vec) {
	this->npcs = vec;
}

void MapGenerator::killEnemy() {
	
	delete this->enemies[0];
	this->enemies.erase(enemies.begin());
}

std::vector<Enemy*> MapGenerator::getEnemies() {
	return this->enemies;
}

std::vector<Npc*> MapGenerator::getNpcs() {
	return this->npcs;
}