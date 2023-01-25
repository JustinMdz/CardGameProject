#include "MoniCard.h"


void  MoniCard::setCardPuntuation() {

}

int   MoniCard::getCardPuntuation(){

	return cardPuntuation;
}

void MoniCard::flipCard() {

	swap(frontCardSide,backCardSide);
}

void MoniCard::printCard() {

	cout << frontCardSide;
	cout << backCardSide;
}




