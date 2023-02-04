#include <iostream>
#include "MoniCard.h"
#pragma once
class Game
{
private:
	bool runGame;
	MoniCard gameMoniCard;

	int broad = 1800;
	int alture = 950;
	RenderWindow* gameBackground;
	Texture* boarWoodTexture = new Texture;
	Sprite* boarWoodSprite = new Sprite(*boarWoodTexture);
	Event* windowClose = new Event;

public:
	Game();
	void startTheGame();
	void endTheGame();
	void initializeListCard();
	void auxPrint();
	
	void creategameBackground();
	void getmarketWindow();
	void closeOfWindow();
};
