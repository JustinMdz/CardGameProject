#pragma once
#include <iostream>
using namespace std;
class MarketOfMoni
{
private:
	string* pointStack;
	int** moniMarket;
	int cantCardsOnStacks[3];
	int quantityStacks = 3;
	int row = 3;
	int colum = 2;
	int repeated = 0;
	int card;

public:
	MarketOfMoni();
	bool checkMarketOfMoni();
	void createMarket();
	bool checkRepeatedly();
	void shuffleCard();
	void resetEmptyStack();
};

