#pragma once
#include "SFML/Graphics.hpp"

class BaseGameState
{
public:
	virtual void draw(sf::RenderWindow gameWindow, const float timeElapsed) = 0;

	virtual void update(sf::RenderWindow gameWindow, const float timeElapsed) = 0;

};

