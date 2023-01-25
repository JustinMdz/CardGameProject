#include <iostream>

#pragma once
using namespace std;

class MoniCard {

private:

	string moniCardName[6] = {"","","","","",""};
	string frontCardSide="moniSide";
	string backCardSide="pointsSide";
	int cardPuntuation;

public:

	MoniCard(){};

	void setCardPuntuation();
    int getCardPuntuation();

	void flipCard();
	void printCard();
};

