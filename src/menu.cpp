#include "menu.h"
#include "../src/Globals.h"

menu::menu(Globals* globals) {
	gameGlobals = globals;
	main_menu = true; 
	InitGame();  
}

void menu::InitGame(){
	menu_backgr = LoadTexture("Textures/menu/menu.png");
	menu_logo = LoadTexture("Textures/menu/logo.png");
	menu_namco = LoadTexture("Textures/menu/logo_namco.png");
	menu_enemy = LoadTexture("Textures/menu/enemy_title_screen.png");
}

void menu::UpdateGame() {
	if (main_menu) {

		if (IsKeyPressed(KEY_ENTER)) {
			main_menu = false;
			gameGlobals->currentState = Globals::PLAYING;
		}

	}
}

void menu::DrawGame() {
	BeginDrawing();
	ClearBackground(WHITE);

	//draw menu
	float scaleX = (float)Globals::screenWidth / menu_backgr.width;
	float scaleY = (float)Globals::screenHeight / menu_backgr.height;
	DrawTextureEx(menu_backgr, {0,0}, 0.0f,(scaleX,scaleY), WHITE);

	DrawTextureEx(menu_logo, { Globals::screenWidth / 10, Globals::screenHeight / 10 }, 0.0f, (scaleX / 1.425, scaleY / 1.425), WHITE);

	EndDrawing();
}

void menu::UnloadGame() {
	UnloadTexture(menu_backgr);
	UnloadTexture(menu_logo);
	UnloadTexture(menu_namco);
	UnloadTexture(menu_enemy);
}

void menu::UpdateDrawFrame() {
	UpdateGame();
	DrawGame();
}