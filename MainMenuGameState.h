#pragma once
#include "BaseGameState.h"
class MainMenuGameState :
    public BaseGameState
{
    void draw(sf::RenderWindow gameWindow, const float timeElapsed);

    void update(sf::RenderWindow gameWindow, const float timeElapsed);
};

