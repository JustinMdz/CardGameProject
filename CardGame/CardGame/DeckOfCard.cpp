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

string DeckOfCard::toString() {
	stringstream ss;
	current = first;
	ss << "Point Cards." << endl;
	while (current != NULL) {
		ss << current->toString() << endl;
		current = current->getNextNode();
	}
	return ss.str();
}






















