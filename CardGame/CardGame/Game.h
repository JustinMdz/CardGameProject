#pragma once
#include "MarketOfMoni.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#define numberOfOption  4
using namespace sf;

class Game
{
private :
	bool runGame;

	int selectOption = 0;
	int broad = 1800;
	int alture = 950;

	RenderWindow* gameBackground = new RenderWindow(VideoMode(broad, alture), "windowGame");
	Texture* boardWoodTexture = new Texture;
	Sprite* boardWoodSprite = new Sprite;

	Font* fontOfMenu = new Font;
	Text* gameTitle = new Text;
	Text* optionMenu = new Text[numberOfOption];

	Event* option = new Event;

	Texture* boardPlayerTexture = new Texture;
	Sprite* boardPlayerSprite = new Sprite;

public:
	Game();
	~Game();

	void startTheGame();
	void endTheGame();

	void creategameBackground();
	void getWindow();

	void createOptionMenu();
	void getOptionMenu();
	void getOptionPrincipalMenu();

	void moveOptionUp();
	void moveOptionDown();
	void getOption();
};
