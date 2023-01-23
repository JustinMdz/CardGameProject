#pragma once
#include <iostream>
using namespace std;
class MarketOfMoni
{
private:
	string* pointStack;
	string** marketOfMoni;

public:
	MarketOfMoni();
	void shuffleCard();
	void resetEmptyStack();

};

