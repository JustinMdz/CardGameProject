#pragma once
#include <iostream>
using namespace std;
class MarketOfMoni
{
private:
	string* pointStack;
	string** marketOfMoni;
	int cantCardsOnStacks[3];
	int quantityStacks = 3;

public:
	MarketOfMoni();
	void checkMarketOfMoni();//checa si tomaron una carta del mercado moni
	void shuffleCard();
	void resetEmptyStack();
};

