#if !defined(_GAMEMANAGER_H)
#define _GAMEMANAGER_H

#include <iostream>
#include "stdafx.h"
#include "Player.h"


class GameManager {
private:
	int choice;
	bool gameRunning;
public:
	GameManager();
	virtual ~GameManager();
	bool isGameRunning() const { return this->gameRunning; };
	void gameMenu();
	void goToDangeon(Player player);
	void goToCity(Player player);
};

#endif
