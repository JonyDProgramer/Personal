#include "Globals.h"
#include "../src/Globals.h"
#include <raylib.h>



Globals::Globals() { InitGame(); }

void Globals::InitGame() {

	
	gameOver = false;
	pause = false;
	victory = false;
	main_menu = true;

	score = 0;
	highscore = 0;
	activeEnemies = 10;
	enemieskill = 0;
	shootRate = 0;
	shootRate2 = 0;

}

void Globals::UpdateDrawFrame() {
	BeginDrawing();
	ClearBackground(RAYWHITE);
	


	EndDrawing();
}

void Globals::UnloadGame() {
	// texuras
}