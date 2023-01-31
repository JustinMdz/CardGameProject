#include "MarketOfMoni.h"

MarketOfMoni::MarketOfMoni() {

	gameBackground = new RenderWindow(VideoMode(broad, alture), "windowMarket");
	boarWood->loadFromFile("backgroundWood.png");
	boarWoodSprite->setScale((float)gameBackground->getSize().x / (float)boarWoodSprite->getTexture()->getSize().x,
		(float)gameBackground->getSize().y / (float)boarWoodSprite->getTexture()->getSize().y);

	getmarketWindow();
	delete gameBackground;
}

//void MarketOfMoni::getmarketPositionCard() {
//
//	/*moniMarketSprite[0].setPosition(550, 100);
//	moniMarketSprite[1].setPosition(750, 100);    // stack
//	moniMarketSprite[2].setPosition(950, 100);*/
// 
//	moniMarketSprite[0].setPosition(550, 350);
//	moniMarketSprite[1].setPosition(750, 350);
//	moniMarketSprite[2].setPosition(950, 350);
//	moniMarketSprite[3].setPosition(550, 600);
//	moniMarketSprite[4].setPosition(750, 600);
//	moniMarketSprite[5].setPosition(950, 600);
//}

void MarketOfMoni::creategameBackground() {

	gameBackground->clear();
	gameBackground->draw(*boarWoodSprite);
	/*for (int i = 0; i < 9; i++) {
		gameBackground->draw(moniMarketSprite[i]);
	}*/
	gameBackground->display();
}

void MarketOfMoni::getmarketWindow() {

	while (gameBackground->isOpen()) {
		creategameBackground();
		closeOfWindow();
	}
}

void MarketOfMoni::closeOfWindow() {

	while (gameBackground->pollEvent(*windowClose)) {

		switch (windowClose->type) {

		case Event::Closed:
			exit(1);
			break;
		}
	}
}


//
//void MarketOfMoni :: createMarket() {
//
//	moniMarket = new int* [row];
//
//	for (int numberOfRows = 0; numberOfRows < row; numberOfRows++) {
//		moniMarket[numberOfRows] = new int[colum];
//	}
//}
//
//void MarketOfMoni::resetEmptyStack() {
//
//	int majorNumberCardsInStack = cantCardsOnStacks[0];
//
//	for (int numberOfStack = 1; numberOfStack < quantityStacks; numberOfStack++) {
//
//		if (cantCardsOnStacks[numberOfStack] == 0) {
//
//			if (cantCardsOnStacks[numberOfStack] > cantCardsOnStacks[0]) {
//				majorNumberCardsInStack = cantCardsOnStacks[numberOfStack];
//				cantCardsOnStacks[numberOfStack] = majorNumberCardsInStack / 2;
//			}
//		}
//	}
//}
//bool MarketOfMoni::checkRepeatedly() {
//
//	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
//		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {
//			if (repeated == moniMarket[numberOfRow][numberOfColum])
//				return true;
//		}
//	}
//	return false;
//}
//
//void MarketOfMoni::shuffleCard() {
//
//	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
//		cout << endl;
//		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {
//
//			do
//				repeated = 1 + rand() % 55;
//			while (checkRepeatedly());
//			moniMarket[numberOfRow][numberOfColum] = repeated;
//		}
//	}
//}
//
//bool MarketOfMoni::checkMarketOfMoni() {
//
//	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
//		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {
//			card = moniMarket[numberOfRow][numberOfColum];
//			if (moniMarket[numberOfRow][numberOfColum] == card) {
//				return true;
//			}
//		}
//	}
//}
