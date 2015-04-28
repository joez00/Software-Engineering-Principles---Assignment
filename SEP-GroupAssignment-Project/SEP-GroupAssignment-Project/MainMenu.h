#pragma once
#include "menu.h"

class MainMenu:public Menu
{
public:
	MainMenu(void);
	~MainMenu(void);
	void drawMenu();
	void exit();
	void openOptions();
	void startGame();
};

