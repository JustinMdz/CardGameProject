#pragma once
#include "Node.h"
using namespace std;

class DeckOfCard {
private:

	Node* first;
	Node* current;
	string moniCardDeck[6];
	int countMoniCardsAmount[6] = { 0,0,0,0,0,0 };
	int moniCardsOnDeck = 0;

public:

	DeckOfCard();
	void fillDeck(int);
	void dealCard(DeckOfCard*, Node*, int);
	void evaluateDeck();
	void printDeckCard();
	void grabCard();// MoniCard*, MoniCard*);
	//string toString();
};