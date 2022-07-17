#pragma once
#include "SFML/Graphics.hpp"
#include "BaseGameState.h"
#include <stack>
using std::stack;

class GameStateManager
{
public:
	bool pushState(BaseGameState* newGameState);

	bool popState();

	BaseGameState* peekState();

	void draw(sf::RenderWindow gameWindow, const float timeElapsed);

	void update(sf::RenderWindow gameWindow, const float timeElapsed);
private:
	stack<BaseGameState*> gameStateStack;
};

