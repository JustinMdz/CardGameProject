#include <iostream>
#pragma once

class Game
{
private :
	bool startGame;
	bool endGame;

public:

	Game();
	void startTheGame();
	void endTheGame();
	void runGame();
};
