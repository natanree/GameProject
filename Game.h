#pragma once

#include "SFML/Graphics.hpp"


class Game
{
public:
	void gameLoop();
private:
	sf::RenderWindow gameWindow;
	sf::View playerView;
	bool isPaused;
};

