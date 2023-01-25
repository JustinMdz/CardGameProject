#include "MarketOfMoni.h"

void MarketOfMoni :: createMarket() {

	moniMarket = new int* [rows];

	for (int numberOfRows = 0; numberOfRows < rows; numberOfRows++) {
		moniMarket[numberOfRows] = new int[colums];
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

	for (int numberOfRows = 0; numberOfRows < rows; numberOfRows++) {
		for (int numberOfColums = 0; numberOfColums < colums; numberOfColums++) {
			if (repeated == moniMarket[numberOfRows][numberOfColums])
				return true;
		}
	}
	return false;
}

void MarketOfMoni::shuffleCard() {

	for (int numberOfRows = 0; numberOfRows < rows; numberOfRows++) {
		cout << endl;
		for (int numberOfColums = 0; numberOfColums < colums; numberOfColums++) {

			do
				repeated = 1 + rand() % 55;
			while (checkRepeatedly());
			moniMarket[numberOfRows][numberOfColums] = repeated;
		}
	}
}

void MarketOfMoni::checkMarketOfMoni() {


}
