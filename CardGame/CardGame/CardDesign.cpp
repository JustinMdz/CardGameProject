#include "CardDesign.h"

CardDesign desingCards[54];
int quantityCardsPoint = 54;

CardDesign::CardDesign(const string& ruta) {

    if (!cardTexture.loadFromFile(ruta))
    {
        // manejo de error
    }

    cardSprite.setTexture(cardSprite);
}

void CardDesign::createDesing() {

    for (int numberOfCard = 0; numberOfCard < 53; numberOfCard++) {
        desingCards[numberOfCard] = new CardDesign();

    }
}