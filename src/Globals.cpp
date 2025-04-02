#include "../src/Globals.h"
#include <raylib.h>



Globals::Globals() { InitGame(); currentState = MAIN_MENU; }

void Globals::InitGame() {

	
	gameOver = false;
	pause = false;
	victory = false;
	

	score = 0;
	highscore = 0;
	activeEnemies = 10;
	enemieskill = 0;
	shootRate = 0;
	shootRate2 = 0;

}

void Globals::UpdateGame() {

}

void Globals::DrawGame() {
	BeginDrawing();
	ClearBackground(WHITE);
	EndDrawing();
}

void Globals::UpdateDrawFrame() {
	UpdateGame();
	DrawGame();
}
