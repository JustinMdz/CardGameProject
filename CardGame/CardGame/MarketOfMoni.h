#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class MarketOfMoni
{
private:
	
	int marketSampleLimit = 6;
	Texture* moniMarketTexture = new Texture[marketSampleLimit];
	Sprite* moniMarketSprite = new Sprite[marketSampleLimit];

public:
	MarketOfMoni();
	
	void createMarket();
	void getmarketPositionCard();
	void drawMarket();
	
	bool checkMarketOfMoni();
	bool checkRepeatedly();
	void shuffleCard();
	void resetEmptyStack();
};

