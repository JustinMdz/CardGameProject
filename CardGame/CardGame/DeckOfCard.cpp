#include "DeckOfCard.h"

DeckOfCard::DeckOfCard() {
	this->first = NULL;
	this->current = NULL;
}

void DeckOfCard::fillDeck(MoniCard* card) {
	Node* newNode = new Node();
	newNode->dataCard = card;
	newNode->nextNode = NULL;

	if (first == NULL) {
		first = newNode;
	}
	if (first != NULL) {
		Node* auxNode = first;
		while (auxNode->nextNode != NULL) {
			auxNode = auxNode->nextNode;
		}
		auxNode->nextNode = newNode;
	}
}

void DeckOfCard::grabMoniCard(MoniCard* firstCardToTake, MoniCard* secondCardToTake) {

	if ((firstCardToTake->flipCard() == true) && (secondCardToTake->flipCard() == true)) {
		fillDeck(firstCardToTake);
		fillDeck(secondCardToTake);
	}
}

void DeckOfCard::grabPointCard(MoniCard* cardToTake) {

	if (cardToTake->flipCard() == false) {
		fillDeck(cardToTake);
	}
}

void DeckOfCard::dealCard(DeckOfCard* victimsDeck, Node* stolenCard, MoniCard* card) {

	fillDeck(card);
	Node* indexNode = new Node();
	indexNode = victimsDeck->first;
	while (indexNode != NULL || indexNode == stolenCard) {
		if (indexNode == stolenCard) {
			stolenCard->~Node();
		}
	}
}
