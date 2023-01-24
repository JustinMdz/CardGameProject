#include <iostream>
#include "Card.h"

#pragma once
using namespace std;

class MoniCard : public Card {

private:

	string moniCardName[6] = {"","","","","",""};
	string frontCardSide="moniSide";
	string backCardSide="pointsSide";
	int cardPuntuation;

public:

	MoniCard(){};

	void setCardPuntuation();
    void getCardPuntuation();

	void flipCard();
	void printCard();
};

