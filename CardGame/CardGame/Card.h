#include <iostream>
#pragma once

class Card
{
private:

	int numberOfCards;

public:

	Card();
	void cardOption();
	void typeOfCard();
	void exchangeCard();
	virtual void printCard();
};
