#pragma once
class Card
{
private:

	int numberOfCards;
	int puntuation;//TODO: fix typo punctuation

public:
	Card();
	void cardOption();
	void typeOfCard();
	void exchangeCard();
	virtual void printCard();
};
