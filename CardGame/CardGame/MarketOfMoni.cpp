#include "MarketOfMoni.h"

void MarketOfMoni :: createMarket() {

	moniMarket = new int* [row];

	for (int numberOfRows = 0; numberOfRows < row; numberOfRows++) {
		moniMarket[numberOfRows] = new int[colum];
	}
}

void MarketOfMoni::resetEmptyStack() {

	int majorNumberCardsInStack = cantCardsOnStacks[0];

	for (int numberOfStack = 1; numberOfStack < quantityStacks; numberOfStack++) {

		if (cantCardsOnStacks[numberOfStack] == 0) {

			if (cantCardsOnStacks[numberOfStack] > cantCardsOnStacks[0]) {
				majorNumberCardsInStack = cantCardsOnStacks[numberOfStack];
				cantCardsOnStacks[numberOfStack] = majorNumberCardsInStack / 2;
			}
		}
	}
}
bool MarketOfMoni::checkRepeatedly() {

	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {
			if (repeated == moniMarket[numberOfRow][numberOfColum])
				return true;
		}
	}
	return false;
}

void MarketOfMoni::shuffleCard() {

	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
		cout << endl;
		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {

			do
				repeated = 1 + rand() % 55;
			while (checkRepeatedly());
			moniMarket[numberOfRow][numberOfColum] = repeated;
		}
	}
}

bool MarketOfMoni::checkMarketOfMoni() {

	for (int numberOfRow = 0; numberOfRow < row; numberOfRow++) {
		for (int numberOfColum = 0; numberOfColum < colum; numberOfColum++) {
			card = moniMarket[numberOfRow][numberOfColum];
			if (moniMarket[numberOfRow][numberOfColum] == card) {
				return true;
			}
		}
	}
}
