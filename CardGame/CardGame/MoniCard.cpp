#include "MoniCard.h"

MoniCard::MoniCard(Rules* puntuationCard, MoniCard* cardNext = NULL, MoniCard* cardBefore = NULL) {
	cardPuntuation = puntuationCard;
	nextCard = cardNext;
	beforeCard = cardBefore;
}

MoniCard::MoniCard(Sprite cardMoni_Sprite, Sprite cardPoint_Sprite) {

	pointCardSprite = cardPoint_Sprite;
	moniCardSprite = cardMoni_Sprite;
}

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