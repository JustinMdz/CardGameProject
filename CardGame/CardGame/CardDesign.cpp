#include "CardDesign.h"

CardDesign::CardDesign() {}

void CardDesign::createPointCardDesign() {

	for (int numberOfCard = 0; numberOfCard < quantityCards; numberOfCard++) {
		pointCardTexture[numberOfCard].loadFromFile(to_string(numberOfCard + 1) + ".png");
	}
}

void CardDesign::createMoniCardDesign() {
	int moniCardsPerGame = 9;

	for (int numberOfCard = 0; numberOfCard < moniCardsPerGame; numberOfCard++) {
		moniCardTexture[numberOfCard].loadFromFile("MoniCard0.png");
		moniCardTexture[(numberOfCard + (moniCardsPerGame))].loadFromFile("MoniCard1.png");
		moniCardTexture[(numberOfCard + (moniCardsPerGame * 2))].loadFromFile("MoniCard2.png");
		moniCardTexture[(numberOfCard + (moniCardsPerGame * 3))].loadFromFile("MoniCard3.png");
		moniCardTexture[(numberOfCard + (moniCardsPerGame * 4))].loadFromFile("MoniCard4.png");
		moniCardTexture[(numberOfCard + (moniCardsPerGame * 5))].loadFromFile("MoniCard5.png");
	}
}

void CardDesign::getPointCardsSize() {
	for (int numberOfCard = 0; numberOfCard < quantityCards; numberOfCard++) {
		pointCardSprite[numberOfCard].setTexture(pointCardTexture[numberOfCard]);
		pointCardSprite[numberOfCard].setScale(150.f / pointCardSprite->getTexture()->getSize().x,
			200.f / pointCardSprite->getTexture()->getSize().y);
	}
}

void CardDesign::getMoniCardSize() {

	for (int numberOfCard = 0; numberOfCard < quantityCards; numberOfCard++) {
		moniCardSprite[numberOfCard].setTexture(moniCardTexture[numberOfCard]);
		moniCardSprite[numberOfCard].setScale(150.f / moniCardSprite->getTexture()->getSize().x,
			200.f / moniCardSprite->getTexture()->getSize().y);
	}
}

Sprite CardDesign::getMoniSprite(int position) {

	Sprite moniSprite;
	moniSprite = moniCardSprite[position];
	return moniSprite;
}

Sprite CardDesign::getPointSprite(int position) {

	Sprite pointSprite;
	pointSprite = pointCardSprite[position];
	return pointSprite;
}

