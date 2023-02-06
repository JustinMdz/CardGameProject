#include "MoniCard.h"

MoniCard::MoniCard(int* puntuationCard, MoniCard* cardNext = NULL, MoniCard* cardBefore = NULL) {
	cardPuntuation = puntuationCard;
	nextCard = cardNext;
	beforeCard = cardBefore;
}

MoniCard::MoniCard(Sprite cardMoni_Sprite, Sprite cardPoint_Sprite) {

	pointCardSprite = cardPoint_Sprite;
	moniCardSprite = cardMoni_Sprite;
}

MoniCard::~MoniCard() {}

string MoniCard::getCardTypeSide() {
	if (cardSideStatus == true) {
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