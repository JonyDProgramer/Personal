#include <raylib.h>
#include <iostream>
#include "Globals.h"

using namespace std;


int main() {

	InitWindow(Globals::screenWidth, Globals::screenHeight, "Galaga88");

	Globals game;
	game.InitGame();
	SetTargetFPS(60);
	while (!WindowShouldClose()) { game.UpdateDrawFrame(); }
	game.UnloadGame();
	CloseWindow();

	return 0;
}