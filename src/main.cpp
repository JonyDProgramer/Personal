#include <raylib.h>
#include <iostream>
#include "Globals.h"
#include "menu.h"

using namespace std;



int main() {

	InitWindow(Globals::screenWidth, Globals::screenHeight, "Galaga88");

	Globals game;
    menu* mainMenu = new menu(&game);

	game.InitGame();
	SetTargetFPS(60);
    while (!WindowShouldClose()) {
        switch (game.currentState) {

        case Globals::MAIN_MENU:
            mainMenu->UpdateDrawFrame();
            break;
        case Globals::PLAYING:

            break;
        case Globals::GAME_OVER:

            break;
        case Globals::VICTORY:

            break;
        }
    }
	CloseWindow();
    delete mainMenu;

	return 0;
}

