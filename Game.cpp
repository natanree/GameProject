#include "Game.h"

/*	Function: gameLoop()
*	Date Created: 07/16/2022
*	Date Last Modified: 07/16/2022
*	Description: acts as main game loop while game is running
*	Inputs: n/a
*	Output: n/a
*	Precondition: n/a
*	Postcondition: n/a
*/
void Game::gameLoop() {
	sf::Clock gameClock;
	float timeElapsed = 0.0;

	while (this->gameWindow.isOpen()) {
		timeElapsed = gameClock.restart().asSeconds();
		sf::Event event;
		while (this->gameWindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				this->gameWindow.close();
			}
		}
	}
}