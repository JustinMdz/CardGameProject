#include "Game.h"

Game::Game() {

	boarWoodTexture->loadFromFile("backgroundWood.png");
	boarWoodSprite->setTexture(*boarWoodTexture);
	boarWoodSprite->setScale((float)gameBackground->getSize().x / (float)boarWoodSprite->getTexture()->getSize().x,
		(float)gameBackground->getSize().y / (float)boarWoodSprite->getTexture()->getSize().y);

	createOptionMenu();
	getWindow();
}

Game::~Game() {
	delete gameBackground;
	delete boarWoodSprite;
	delete boarWoodTexture;
	delete optionMenu;
	delete fontOfMenu;
}

void Game::createOptionMenu() {

	fontOfMenu->loadFromFile("MartianRobotics.otf");

	gameTitle->setString("Point Robot");
	gameTitle->setFont(*fontOfMenu);
	gameTitle->setCharacterSize(120);
	gameTitle->setPosition(750, 100);
	gameTitle->setFillColor(Color::Black);

	for (int i = 0; i < numberOfOption; i++) {
		optionMenu[i].setFont(*fontOfMenu);
		optionMenu[i].setCharacterSize(90);
	}

	optionMenu[0].setString("New Game");
	optionMenu[0].setPosition(750, 320);

	optionMenu[1].setString("Load");
	optionMenu[1].setPosition(750, 450);

	optionMenu[2].setString("Rules");
	optionMenu[2].setPosition(750, 580);

	optionMenu[3].setString("Exit");
	optionMenu[3].setPosition(750, 710);
}

void Game::creategameBackground() {

	gameBackground->clear();
	gameBackground->draw(*boarWoodSprite);
	gameBackground->draw(*gameTitle);
	for (int i = 0; i < numberOfOption; i++) {
		gameBackground->draw(optionMenu[i]);
	}
	//for (int i = 0; i < 9; i++) {
	//	gameBackground->draw(moniMarketSprite[i]);
	//}
	gameBackground->draw(*boarPlayerSprite);
	gameBackground->display();
}

void Game::moveOptionUp() {
	if (selectOption - 1 >= 0) {
		optionMenu[selectOption].setFillColor(Color::White);
		selectOption--;
		optionMenu[selectOption].setFillColor(Color::Red);
	}
}

void Game::moveOptionDown() {
	if (selectOption + 1 < numberOfOption) {
		optionMenu[selectOption].setFillColor(Color::White);
		selectOption++;
		optionMenu[selectOption].setFillColor(Color::Red);
	}
}

void Game::getOptionPrincipalMenu() {

	switch (option->key.code)
	{
	case Keyboard::Up:
		moveOptionUp();
		break;
	case Keyboard::Down:
		moveOptionDown();
		break;
	}
}

void Game::getOption() {
	if (option->key.code == Keyboard::Return) {
		if (selectOption == 3) {
			exit(1);
		}
		if (selectOption == 0) {
			gameBackground->clear();
			boarPlayerTexture->loadFromFile("PlayerBackgroundWood.png");
			boarPlayerSprite->setTexture(*boarPlayerTexture);
			boarPlayerSprite->setScale((float)gameBackground->getSize().x / (float)boarPlayerSprite->getTexture()->
				getSize().x,(float)gameBackground->getSize().y / (float)boarPlayerSprite->getTexture()->getSize().y);
			//MarketOfMoni market;
			//market.createMarket();
		}
	}
}

void Game::getOptionMenu() {

	while (gameBackground->pollEvent(*option)) {

		switch (option->type) {

		case Event::Closed:
			exit(1);
			break;

		case Event::KeyReleased:
			getOptionPrincipalMenu();
			break;

		case Event::KeyPressed:
			getOption();
		}
	}
}

void Game::getWindow() {

	while (gameBackground->isOpen()) {
		creategameBackground();
		getOptionMenu();
	}
}