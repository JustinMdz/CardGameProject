#pragma once
#include <iostream>
#include "DeckOfCard.h"
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
	bool playerTurn(DeckOfCard*, MoniCard*, MoniCard*);
	void setPlayerPuntuation();
	int getPlayerPuntuation(int);
};