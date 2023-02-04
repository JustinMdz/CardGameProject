#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class MarketOfMoni
{
private:

	//int quantityMoniCard = 6;
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

};