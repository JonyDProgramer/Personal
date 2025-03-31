#pragma once



class Globals
{
public:

	Globals();

	void InitGame();
	void UpdateGame();
	void DrawGame();
	void UnloadGame();
	void UpdateDrawFrame();

	static constexpr int screenWidth = 840;
	static constexpr int screenHeight = 1080;

private:

	bool gameOver;
	bool pause;
	bool victory;
	bool main_menu;

	int score;
	int highscore;
	int activeEnemies;
	int enemieskill;
	int shootRate;
	int shootRate2;

};


