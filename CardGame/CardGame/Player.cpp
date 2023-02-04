#include "Player.h"

Player::Player() {}

void Player::setPlayerPuntuation() {}

int Player::getPlayerPuntuation(int playerPoints) {

	return playerPoints;
}

string Player::fillPlayersNames (string nameOfPlayer) {

	cout << "Enter the player name: ";
	cin >> nameOfPlayer;
	return nameOfPlayer;
}

//bool Player::playerTurn(DeckOfCard* playerDeck, MoniCard* cardOneToTake, MoniCard* cardTwoToTake) {
//	playerDeck->grabCard(cardOneToTake, cardTwoToTake);
//	return turnOfPlayer;
//}