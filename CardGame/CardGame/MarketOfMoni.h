#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#define quantityCard 54
using namespace std;
using namespace sf;

class MarketOfMoni
{
private:
	
	int repeatedCard = 0;
	int numberOfMoniCard[quantityCard];
	int marketSampleLimit = 6;
	int idCard = 0;
	Texture* moniMarketTexture = new Texture[marketSampleLimit];
	Sprite* moniMarketSprite = new Sprite[marketSampleLimit];

public:
	MarketOfMoni();
	
	void createMarket();
	void getmarketPositionCard();
	
	bool checkMarketOfMoni();
	bool checkRepeatedly();
	void shuffleCard();

	void foundEmptyStack();
	void refillEmptyStack();
};

