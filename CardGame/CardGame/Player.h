#include <iostream>
#pragma once
using namespace std;

class Player {

private:

	string nameOfPlayerOne;
	string nameOfPlayerTwo;
	int pointCounterOfPlayerOne;
	int pointCounterOfPlayerTwo;
	bool turnOfPlayer;

public:

	Player();
	int getPlayerPuntuation();
	bool playerTurn();
	void grabCard();
	void fillPlayersNames();
	void convertCard();
};
