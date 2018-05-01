#include "stdafx.h"
#include "FileManager.h"


void FileManager::saveGame(Player* player, std::string fileName) {
	std::ofstream save;
	std::vector<Skills*> skills;
	std::vector<Items*> inv;
	std::vector<Items*> bp;
	skills = player->getSkills();
	inv = player->getInventory();
	bp = player->getBp();
	save.open(fileName);
	save << player;
	for (unsigned int i = 0; i < skills.size(); i++)
	{
		save << skills[i];
	}
	save << "\n***";
	for (unsigned int i = 0; i < inv.size(); i++)
	{
		save << inv[i];
	}
	save << "\n***";
	for (unsigned int i = 0; i < bp.size(); i++)
	{
		save << bp[i];
	}
	save.close();

}

Player * FileManager::loadGame(std::string fileName) {
	Player *tmp = new Player();
	Skills* skill = new Skills();
	Items* item = new Items();
	std::string line = "";
	std::ifstream load;
	load.open(fileName, std::ios::in);
	if (load.is_open()) {
		while (!load.eof())
		{
			load >> tmp;

			while (!skill->check) {
				skill = new Skills();
				load >> skill;
				if (!skill->check)
					tmp->addSkill(skill);
			}
			line = "";
			while (!item->check)
			{
				item = new Items();
				load >> item;
				if (!item->check)
					tmp->addItemToInv(item);
			}
			line = "";
			while (!load.eof())
			{
				item = new Items();
				load >> item;
				if (!item->check)
					tmp->addItemToBp(item);
			}
		}

	}
	else std::cout << "Problem z odczytem";
	load.close();
	return tmp;
	delete tmp;
}

