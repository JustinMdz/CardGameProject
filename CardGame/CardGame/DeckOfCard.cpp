#include "DeckOfCard.h"

DeckOfCard::DeckOfCard() {
	first = current = NULL;
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

void DeckOfCard::grabCard(MoniCard* firstCardToTake, MoniCard* secondCardToTake) {
	/*
		llamar a funcion obtener lado de carta
	if (carta igual a pointSide) {
		deck toma la carta de MarketOfMoni
			filldeck
			delete nodo de market
	}

		if(carta 1 igual a moniside y carta 2 igual a moniSide){
		deck toma la carta de MarketOfMoni
			filldeckMonicarss
			delete nodo de market

			deck toma la carta de MarketOfMoni
			filldeckMonicarss
			delete nodo de market
		}
	*/
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

//string DeckOfCard::toString() {
//	stringstream ss;
//	current = first;
//	ss << "Point Cards." << endl;
//	while (current != NULL) {
//		ss << current->toString() << endl;
//		current = current->getNextNode();
//	}
//	return ss.str();
//}