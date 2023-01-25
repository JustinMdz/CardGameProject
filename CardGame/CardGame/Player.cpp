#include "Player.h"

Player::Player() {}

void Player::setPlayerPuntuation() {


}

int Player::getPlayerPuntuation(int playerPoints) {

	return playerPoints;

}


string Player::fillPlayersNames (string nameOfPlayer) {

	cout << "Enter the player name: ";
	cin >> nameOfPlayer;
	return nameOfPlayer;
}


void Player::grabCard() {
	string cardTaken;
	cout << "Please take one card";
	cin >> cardTaken;
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
			grabCard();
			cardsTaken++;
		}
	}
	return turnOfPlayer;
}



