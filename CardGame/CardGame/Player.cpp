#include "Player.h"

Player::Player() {}

string Player::fillPlayersNames (string nameOfPlayer) {

	cout << "Enter the player name: ";
	cin >> nameOfPlayer;
	return nameOfPlayer;
}



bool Player::playerTurn() {
	turnOfPlayer = true;
	int cardOnHand = 2;
	int cardsTaken = 0;
	while (turnOfPlayer == true) {

		if (cardsTaken == cardOnHand) {
			turnOfPlayer = false;
		}

		if (cardsTaken < cardOnHand) {
			cout << "Please take one card";
			//guardar carta
			cardsTaken++;
		}
	}
	return turnOfPlayer;
}



