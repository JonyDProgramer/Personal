#pragma once


class Globals
{
public:

	Globals();

	void InitGame();
	void UpdateGame();
	void DrawGame();
	void UpdateDrawFrame();

	static constexpr int screenWidth = 840;
	static constexpr int screenHeight = 1080;

	enum GameState { MAIN_MENU, PLAYING, GAME_OVER, VICTORY };
	GameState currentState;

private:

	bool gameOver;
	bool pause;
	bool victory;
	

	int score;
	int highscore;
	int activeEnemies;
	int enemieskill;
	int shootRate;
	int shootRate2;

};


