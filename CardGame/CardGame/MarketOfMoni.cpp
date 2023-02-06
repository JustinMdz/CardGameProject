#include "MarketOfMoni.h"

MarketOfMoni::MarketOfMoni() {

}

void MarketOfMoni::getmarketPositionCard() {

	moniMarketSprite[0].setPosition(550, 350);
	moniMarketSprite[1].setPosition(750, 350);
	moniMarketSprite[2].setPosition(950, 350);
	moniMarketSprite[3].setPosition(550, 600);
	moniMarketSprite[4].setPosition(750, 600);
	moniMarketSprite[5].setPosition(950, 600);
}

void MarketOfMoni::createMarket() {

	getmarketPositionCard();
	for (int numberOfCard = 0; numberOfCard < marketSampleLimit; numberOfCard++) {
		moniMarketTexture[numberOfCard].loadFromFile("MoniCard" + to_string(numberOfCard) + ".png");
		moniMarketSprite[numberOfCard].setTexture(moniMarketTexture[numberOfCard]);
		moniMarketSprite[numberOfCard].setScale(150.f / moniMarketSprite->getTexture()->getSize().x,
			200.f / moniMarketSprite->getTexture()->getSize().y);
	}
}

bool MarketOfMoni::checkRepeatedly() {

	for (int numberOfCard = 0; numberOfCard < marketSampleLimit; numberOfCard++) {
		if (repeatedCard == numberOfMoniCard[numberOfCard]){
			return true;
		}
	}
	return false;
}

void MarketOfMoni::shuffleCard() {

	for (int numberOfCard = 0; numberOfCard < marketSampleLimit; numberOfCard++) {
		do {
			repeatedCard = 1 + rand() % 55;
		} while (checkRepeatedly());
			numberOfMoniCard[numberOfCard] = repeatedCard;
	}	
}

bool MarketOfMoni::checkMarketOfMoni(){

	for (int numberOfCard = 0; numberOfCard < marketSampleLimit; numberOfCard++) {
		idCard = numberOfMoniCard[numberOfCard];
		if (numberOfMoniCard[numberOfCard] == idCard) {
			return true;
		}
	}
	return false;
}
