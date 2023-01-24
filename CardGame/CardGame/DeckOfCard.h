#include <iostream>
using namespace std;
#pragma once

using namespace std;

class DeckOfCard {

private:

	string** saveMoniCard;
	string* savePointCard;
	int countMoniCardsAmoutn[6] = {0,0,0,0,0,0};
	

public:

	DeckOfCard();
	void dealCard();
	void evaluatDeck();
	void fillDeck();
	void printDeckCard();
};