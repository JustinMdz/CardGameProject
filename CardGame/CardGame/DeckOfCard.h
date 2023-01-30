#pragma once
#include "Node.h"
using namespace std;

class DeckOfCard {

private:

	string** saveMoniCard;
	string** saveMoniCardAuxiliar;
	string* savePointCard;
	string* savePointCardAuxiliar;

	string newCard;

	int countMoniCardsAmount[6] = {0,0,0,0,0,0};
	int moniCardsOnDeck = 0;
	int pointCardsOnDeck = 0;
	

public:

	DeckOfCard();
	void createPointCard();
	void copyPointCardToAuxiliar();
	void updatePointCardDeck();

	void dealCard();
	void evaluateDeck();
	void fillDeck();
	void printDeckCard();
};



