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
	int rows = 3;
	int colums = 2;
	int repeated = 0;
	
public:
	MarketOfMoni();
	void checkMarketOfMoni();
	void createMarket();
	bool checkRepeatedly();
	void shuffleCard();
	void resetEmptyStack();
};

