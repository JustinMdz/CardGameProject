#include <iostream>
#pragma once

class DeckOfCard {

private:

	string** saveMoniCard;
	string* savePointCard;

public:

	DeckOfCard();

	void evaluatDeck();
	void fillDeck();
	void cardLimit();
	void playerCardLimit();
	void printDeckCard();

};