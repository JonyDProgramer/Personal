#pragma once
#include <raylib.h>
#include "Globals.h"



class menu
{
public:

	menu(Globals* globals);

	void InitGame();
	void UpdateGame();
	void DrawGame();
	void UpdateDrawFrame();
	void UnloadGame();

private:
	Globals* gameGlobals;
	bool main_menu;

	Texture2D menu_backgr;
	Texture2D menu_logo;
	Texture2D menu_namco;
	Texture2D menu_enemy;

};

