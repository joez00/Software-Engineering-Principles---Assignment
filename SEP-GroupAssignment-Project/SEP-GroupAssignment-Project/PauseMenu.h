#pragma once
#include "menu.h"

class PauseMenu:public Menu
{
public:
	PauseMenu(void);
	~PauseMenu(void);
	void drawMenu();
	void exit();
	void openOptions();
	void openMainMenu();
};

