#include <iostream>
#pragma once

using namespace std;

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