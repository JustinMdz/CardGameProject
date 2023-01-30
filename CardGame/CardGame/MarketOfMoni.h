#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class MarketOfMoni
{
private:
	//string* pointStack;
	//int** moniMarket;
	//int cantCardsOnStacks[3];
	//int quantityStacks = 3;
	//int row = 3;
	//int colum = 2;
	//int repeated = 0;
	//int card;

	//int quantityMoniCard = 6;
	int broad = 1800;
	int alture = 950;
	RenderWindow* gameBackground;
	Texture* boarWood = new Texture;
	Sprite* boarWoodSprite = new Sprite(*boarWood);
	Event* windowClose = new Event;

	//
	//Texture* moniMarket = new Texture[quantityMoniCard];
	//Sprite* moniMarketSprite = new Sprite[quantityMoniCard] ;

public:
	MarketOfMoni();
	bool checkMarketOfMoni();
	void createMarket();
	bool checkRepeatedly();
	void shuffleCard();
	void resetEmptyStack();

	//void getmarketPositionCard();
	void creategameBackground();
	void getmarketWindow();
	void closeOfWindow();;
};

