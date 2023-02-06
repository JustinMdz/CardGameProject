#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#define  quantityCards 54
using namespace std;
using namespace sf;

class CardDesign
{
private:

	Texture pointCardTexture[quantityCards];
	Sprite pointCardSprite[quantityCards];
	Texture moniCardTexture[quantityCards];
	Sprite moniCardSprite[quantityCards];


public:
	CardDesign();
	void createPointCardDesign();
	void createMoniCardDesign();
	void getMoniCardSize();
	void getPointCardsSize();
	Sprite getMoniSprite(int);
	Sprite getPointSprite(int);
};