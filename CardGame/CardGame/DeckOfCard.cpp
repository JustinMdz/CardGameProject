//#include "DeckOfCard.h"
//
//DeckOfCard::DeckOfCard() {
//	this->first = nullptr;
//	this->current = nullptr;
//}
//
//void DeckOfCard::fillDeck(int card) {
//
//	Node* insert = new Node(card);
//	if (first == nullptr) {
//		first = insert;
//	}
//	else {
//		current = first;
//		while (current->getNextNode() != nullptr) {
//			current = current->getNextNode();
//		}
//		current->setNextNode(insert);
//		insert->setLastNode(current);
//	}
//}
//
////void DeckOfCard::grabCard(MoniCard* firstCardToTake, MoniCard* secondCardToTake) {
////	/*
////		llamar a funcion obtener lado de carta
////	if (carta igual a pointSide) {
////		deck toma la carta de MarketOfMoni
////			filldeck
////			delete nodo de market
////	}
////
////		if(carta 1 igual a moniside y carta 2 igual a moniSide){
////		deck toma la carta de MarketOfMoni
////			filldeckMonicarss
////			delete nodo de market
////
////			deck toma la carta de MarketOfMoni
////			filldeckMonicarss
////			delete nodo de market
////		}
////	*/
////}
//
//void DeckOfCard::dealCard(DeckOfCard* victimsDeck, Node* stolenCard, int card) {
//
//	fillDeck(card);
//
//	Node* indexNode = new Node(card);
//	indexNode = victimsDeck->first;
//	while (indexNode != NULL || indexNode == stolenCard) {
//		if (indexNode == stolenCard) {
//			stolenCard->~Node();
//		}
//	}
//}

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