#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class CardDesign
{
private:

	int quantityCards = 54;
	Texture pointCardTexture[54];
	Sprite pointCardSprite[54];
	Texture moniCardTexture[54];
	Sprite moniCardSprite[54];


public:
	CardDesign();
	void createPointCardDesign();
	void createMoniCardDesign();
	void getMoniCardSize();
	void getPointCardsSize();
	Sprite getMoniSprite(int);
	Sprite getPointSprite(int);
};