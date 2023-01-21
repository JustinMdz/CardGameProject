#include <iostream>
#include "Card.h"
#pragma once

class CardPoint : public Card {

private:
	int firstPointOfCard;
	int secondPointOfCard;
	int thirdPointOfCard;

public:
	CardPoint();
	int winPoint();
	int losePoint();

	void evaluateCard();
	void desingOfPoint();
	void printCard();
};

