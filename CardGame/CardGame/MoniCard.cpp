#include "MoniCard.h"

MoniCard::MoniCard(MarketOfMoni* dataCard = NULL, MoniCard* cardNext = NULL, MoniCard* cardBefore = NULL) {

	cardData = dataCard;
	nextCard = cardNext;
	beforeCard = cardBefore;
}

MoniCard::~MoniCard() {
	delete moniCardNameTexture;
	delete moniCardNameSprite;
	delete cardData;
}

void MoniCard::loadCardName() {

	for (int i = 0; i < 6; i++) {
		moniCardNameTexture[i].loadFromFile("MoniCard" + to_string(i) + ".png");
	}
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