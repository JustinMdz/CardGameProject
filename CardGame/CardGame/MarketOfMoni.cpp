#include "MarketOfMoni.h"


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

void MarketOfMoni::checkMarketOfMoni() {





}
