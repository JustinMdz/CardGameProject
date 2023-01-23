#include "Player.h"

Player::Player() {}

string Player::fillPlayersNames (string nameOfPlayer) {

	cout << "Enter the player name: ";
	cin >> nameOfPlayer;

	return nameOfPlayer;
}
//

bool Player::playerTurn(){
	turnOfPlayer = true;
	while(turnOfPlayer==true){
	//
		turnOfPlayer = false;
	}
	return turnOfPlayer;
}

