#include "DeckOfCard.h"

void DeckOfCard::createPointCard() {

	savePointCard = new string[pointCardsOnDeck];
}

void DeckOfCard::copyPointCardToAuxiliar() {
	 savePointCardAuxiliar = new string[pointCardsOnDeck];

	 for (int numberOfPointCard = 0; numberOfPointCard < pointCardsOnDeck; numberOfPointCard++) {
		 savePointCardAuxiliar[numberOfPointCard] = savePointCard[numberOfPointCard];
	 }
}

void DeckOfCard::updatePointCardDeck() {

	for (int numberOfPointCard = 0; numberOfPointCard < pointCardsOnDeck; numberOfPointCard++) {
		savePointCard[numberOfPointCard]=savePointCardAuxiliar[numberOfPointCard];
	}

	for (int numberOfPointCard = pointCardsOnDeck; numberOfPointCard < (pointCardsOnDeck+1); numberOfPointCard++) {
		 savePointCard[numberOfPointCard]=newCard;
	}
}

void DeckOfCard::printDeckCard() {

	for (int i = 0; i < pointCardsOnDeck; i++) {
		cout <<savePointCard[i] << "     ";
	}
	cout << endl;

	for (int i = 0; i < moniCardsOnDeck; i++) {
		cout << countMoniCardsAmount[i] << "  ";
	}
}






























