#pragma once
#include <iostream>
using namespace std;

class Player {

private:

	string nameOfPlayerOne;
	string nameOfPlayerTwo;
	int pointCounterOfPlayerOne = 0;
	int pointCounterOfPlayerTwo = 0;
	bool turnOfPlayer;

public:

	Player();
	string fillPlayersNames(string);
	bool playerTurn();
	int getPlayerPuntuation(int);
	void grabCard();
	void convertCard();
};
