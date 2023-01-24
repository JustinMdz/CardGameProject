#include <iostream>
#include "Card.h"

#pragma once
using namespace std;

class MoniCard : public Card {

private:

	string moniCardName[6] = {"","","","","",""};
	string monicardSide;
	string pointsSide;
	int puntuation;

public:
	MoniCard();
	int setCardPuntuation();
	int getCardPuntuation(int);
	void designOfMoniCard();
	void printCard();
};

