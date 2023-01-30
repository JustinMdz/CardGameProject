#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "MarketOfMoni.h"

using namespace std;
using namespace sf;

class MoniCard {

private:

	MarketOfMoni* cardData;
	MoniCard* nextCard;
	MoniCard* beforeCard;
	//
	int quantityCard = 6;
	Texture* moniCardNameTexture = new Texture[quantityCard];
	Sprite* moniCardNameSprite = new Sprite[quantityCard];

	//
	string frontCardSide = "moniSide";
	string backCardSide = "pointsSide";
	int cardPuntuation;

public:

	MoniCard(MarketOfMoni*, MoniCard*, MoniCard*);
	~MoniCard();

	//void setCardPuntuation();
    //int getCardPuntuation();
	//void flipCard();
	//void printCard();

	void loadCardName();
	void getSizeCard();
};

