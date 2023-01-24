#include <iostream>
#pragma once

class Card
{
private:

	int numberOfCards;
	int puntuation;

public:

	Card();
	void cardOption();
	void typeOfCard();
	void exchangeCard();
	virtual void printCard();
};
