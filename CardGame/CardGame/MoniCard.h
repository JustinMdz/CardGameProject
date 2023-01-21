#include <iostream>
#include "Card.h"

#pragma once
using namespace std;

class MoniCard : public Card {

private:

	string moniCardName[6];

public:
	MoniCard();
	void designOfMoniCard();
	void printCard();
};

