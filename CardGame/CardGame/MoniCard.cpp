#include "MoniCard.h"

MoniCard::MoniCard() {

	this->firtsCard = nullptr;
	this->currentCard = nullptr;
}

void MoniCard::insertCard(int card) {

	Node* insert = new Node(card);
	if (firtsCard == nullptr) {
		firtsCard = insert;
	}
	else {
		currentCard = firtsCard;
		while (currentCard->getNextNode() != nullptr) {
			currentCard = currentCard->getNextNode();
		}
		currentCard->setNextNode(insert);
		insert->setLastNode(currentCard);
	}
}

string MoniCard::toString() {

	stringstream ouput;
	currentCard = firtsCard;
	while (currentCard != nullptr) {
		ouput << currentCard->getDataCard() << endl;
		currentCard = currentCard->getNextNode();
	}
	return ouput.str();
}


//void MoniCard::loadCardName() {
//
//	for (int i = 0; i < 6; i++) {
//		moniCardNameTexture[i].loadFromFile("MoniCard" + to_string(i) + ".png");
//	}
//}
//
//void MoniCard::getSizeCard() {
//
//	for (int i = 0; i < 6; i++) {
//		moniCardNameSprite[i].setTexture(moniCardNameTexture[i]);
//		moniCardNameSprite[i].setScale(150.f / moniCardNameSprite->getTexture()->getSize().x,
//			200.f / moniCardNameSprite->getTexture()->getSize().y);
//	}
//}

//void  MoniCard::setCardPuntuation() {
//
//}

//int  MoniCard::getCardPuntuation(){
//
//	return cardPuntuation;
//}
//
//void MoniCard::flipCard() {
//
//	swap(frontCardSide,backCardSide);
//}
//
//void MoniCard::printCard() {
//
//	cout << frontCardSide;
//	cout << backCardSide;
//}