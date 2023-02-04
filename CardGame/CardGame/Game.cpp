#include "Game.h"

Game::Game() {

	gameBackground = new RenderWindow(VideoMode(broad, alture), "windowMarket");
	boarWoodTexture->loadFromFile("backgroundWood.png");
	boarWoodSprite->setScale((float)gameBackground->getSize().x / (float)boarWoodSprite->getTexture()->getSize().x,
		(float)gameBackground->getSize().y / (float)boarWoodSprite->getTexture()->getSize().y);

	getmarketWindow();
//	delete gameBackground;

}

void Game::creategameBackground() {

	gameBackground->clear();
	gameBackground->draw(*boarWoodSprite);
	/*for (int i = 0; i < 9; i++) {
		gameBackground->draw(moniMarketSprite[i]);
	}*/
	gameBackground->display();
}

void Game::getmarketWindow() {

	while (gameBackground->isOpen()) {
		creategameBackground();
		closeOfWindow();
	}
}

void Game::closeOfWindow() {

	while (gameBackground->pollEvent(*windowClose)) {

		switch (windowClose->type) {

		case Event::Closed:
			exit(1);
			break;
		}
	}
}






void Game::initializeListCard() {

	int quantityCard = 54;
	for (int i = 0; i < quantityCard; i++) {
		gameMoniCard.insertCard(i);
	}
}

void Game::auxPrint() {
	cout << gameMoniCard.toString();
}
