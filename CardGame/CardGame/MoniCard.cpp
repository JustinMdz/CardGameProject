#include "MoniCard.h"

MoniCard::MoniCard(int* puntuationCard,MoniCard* cardNext = NULL, MoniCard* cardBefore = NULL) {

	cardPuntuation = puntuationCard;
	nextCard = cardNext;
	beforeCard = cardBefore;
}

MoniCard::~MoniCard() {}

void MoniCard::loadCardName() {

	for (int i = 0; i < 6; i++) {
		moniCardNameTexture[i].loadFromFile("MoniCard" + to_string(i) + ".png");
	}
}

string MoniCard::getCardTypeSide() {
	if (cardSideStatus==true) {
		cardSideType = "MoniCardSide";
	}

	if (cardSideStatus == false) {
		cardSideType = "PointCardSide";
	}
	return cardSideType;
}

bool MoniCard::getCardSide() {
	return cardSideStatus;
}

bool MoniCard::flipCard() {
	cardSideStatus = !cardSideStatus;
	return cardSideStatus;
}

void MoniCard::getSizeCard() {

	for (int i = 0; i < 6; i++) {
		moniCardNameSprite[i].setTexture(moniCardNameTexture[i]);
		moniCardNameSprite[i].setScale(150.f / moniCardNameSprite->getTexture()->getSize().x,
			200.f / moniCardNameSprite->getTexture()->getSize().y);
	}
}

//void  MoniCard::setCardPuntuation() {
//
//}

//int  MoniCard::getCardPuntuation(){
//
//	return cardPuntuation;
//}
//

//
//void MoniCard::printCard() {
//
//	cout << frontCardSide;
//	cout << backCardSide;
//}