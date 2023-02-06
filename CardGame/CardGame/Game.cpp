#include "Game.h"

Game::Game() {

	boardWoodTexture->loadFromFile("backgroundWood.png");
	boardWoodSprite->setTexture(*boardWoodTexture);
	boardWoodSprite->setScale((float)gameBackground->getSize().x / (float)boardWoodSprite->getTexture()->getSize().x,
		(float)gameBackground->getSize().y / (float)boardWoodSprite->getTexture()->getSize().y);

	createOptionMenu();
	getWindow();
}

Game::~Game() {
	delete gameBackground;
	delete boardWoodSprite;
	delete boardWoodTexture;
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
	gameBackground->draw(*boardWoodSprite);
	gameBackground->draw(*gameTitle);
	for (int i = 0; i < numberOfOption; i++) {
		gameBackground->draw(optionMenu[i]);
	}
	//for (int i = 0; i < 9; i++) {
	//	gameBackground->draw(moniMarketSprite[i]);
	//}
	gameBackground->draw(*boardPlayerSprite);
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

		if (selectOption == 0) {
			gameBackground->clear();
			boardPlayerTexture->loadFromFile("PlayerBackgroundWood.png");
			boardPlayerSprite->setTexture(*boardPlayerTexture);
			boardPlayerSprite->setScale((float)gameBackground->getSize().x / (float)boardPlayerSprite->getTexture()->
				getSize().x,(float)gameBackground->getSize().y / (float)boardPlayerSprite->getTexture()->getSize().y);
			MarketOfMoni market;
			market.createMarket();
		}
		if (selectOption == 3) {
			exit(1);
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