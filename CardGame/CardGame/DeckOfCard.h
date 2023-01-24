#include <iostream>
using namespace std;
#pragma once

class DeckOfCard {

private:

	string** saveMoniCard;
	string* savePointCard;
	

public:

	DeckOfCard();
	void dealCard();
	void evaluatDeck();
	void fillDeck();
	void playerCardLimit();
	void printDeckCard();
};