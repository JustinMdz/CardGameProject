#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

class CardDesign
{
private:

	Texture cardTexture;
	Sprite cardSprite;

public:

	CardDesign(const string&);
	void createDesing();
};

