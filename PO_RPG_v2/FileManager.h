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
	//zapisuje wartosci gracza wraz z jego przedmiotami i umiejetnosciami
	void saveGame(Player* player, std::string fileName);
	//zwraca gracza o parametrach zadanych w pliku wraz z jego przedmiotami i umiejetnosciami
	Player* loadGame(std::string fileName);
	//pobieranie nazwy pliku zawierajacego wszystkie nazwy zapisow
	std::string getSavesName();
};

#endif