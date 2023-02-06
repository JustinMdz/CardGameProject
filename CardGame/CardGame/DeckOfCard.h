#pragma once
#include "Node.h"
using namespace std;

class DeckOfCard {
private:

	Node* first;
	Node* current;
	MoniCard* moniCardDeck[6];
	int countMoniCardsAmount[6] = { 0,0,0,0,0,0 };
	int moniCardsOnDeck = 0;

public:

	DeckOfCard();
	void fillDeck(MoniCard*);
	void dealCard(DeckOfCard*, Node*, MoniCard*);
	void evaluateDeck();

	void printDeckCard();
	void grabMoniCard(MoniCard*, MoniCard*);
	void grabPointCard(MoniCard*);
};