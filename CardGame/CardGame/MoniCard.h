#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "MarketOfMoni.h"

using namespace std;
using namespace sf;

class MoniCard {

private:

	MoniCard* nextCard;
	MoniCard* beforeCard;
	int* cardPuntuation;
	string cardSideType;
	bool cardSideStatus;
	Texture* moniCardNameTexture = new Texture[6];
	Sprite* moniCardNameSprite = new Sprite[6];

public:
	//MoniCard(Rules*, MoniCard*, MoniCard*);
	MoniCard(int*, MoniCard*, MoniCard*);
	~MoniCard();
	string getCardTypeSide();
	bool getCardSide();
	bool flipCard();
	//void setCardPuntuation();
    //int getCardPuntuation();
	//void printCard();

	void loadCardName();
	void getSizeCard();
};