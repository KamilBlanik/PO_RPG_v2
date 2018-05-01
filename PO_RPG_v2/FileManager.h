#if !defined(_FILEMANAGER_H)
#define _FILEMANAGER_H

#include <fstream>
#include "stdafx.h"
#include "Player.h"

class FileManager {
public:
	void saveGame(Player* player, std::string fileName);
	Player* loadGame(std::string fileName);
};

#endif