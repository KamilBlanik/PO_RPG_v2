#if !defined(_FILEMANAGER_H)
#define _FILEMANAGER_H

#include <fstream>
#include "stdafx.h"
#include "Player.h"

class FileManager {
private:
	std::string savesName;
public:
	
	FileManager();
	~FileManager();
	void saveGame(Player* player, std::string fileName);
	Player* loadGame(std::string fileName);
	std::string getSavesName();
};

#endif