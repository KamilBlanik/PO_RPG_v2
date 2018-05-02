#include "stdafx.h"
#include "MapGenerator.h"

std::vector<Enemy*> MapGenerator::spawnEnemy(int count) {

}

std::vector<Npc*> MapGenerator::spawnNpc(int count) {
	std::string name[5] = { "A","B","C","D","E" };
	std::string type[2] = { "Handlarz","Nauczyciel" };
	std::vector<Items*> items;
	std::vector<Skills*> skills;
	int money;
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
	srand(time(NULL));
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
	srand(time(NULL));
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
	price = rand() % 100 + 100 + 50 * skillLevel;
	Skills* skill = new Skills(name, type[i], value, price, skillLevel);
	return skill;

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
