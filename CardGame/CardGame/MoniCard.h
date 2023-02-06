#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "MarketOfMoni.h"
#include "CardDesign.h"
#include "Rules.h"

using namespace std;
using namespace sf;

class MoniCard {

private:

	MoniCard* nextCard;
	MoniCard* beforeCard;
	Rules* cardPuntuation;
	string cardSideType;
	bool cardSideStatus;

	Sprite pointCardSprite;
	Sprite moniCardSprite;


public:
	MoniCard(Rules*, MoniCard*, MoniCard*);
	MoniCard(Sprite, Sprite);
	string getCardTypeSide();
	bool getCardSide();
	bool flipCard();
	void setCardPuntuation();
	int getCardPuntuation();
	void printCard();
};