#include "GameStateManager.h"

/*	Function: pushState()
*	Date Created: 07/16/2022
*	Date Last Modified: 07/16/2022
*	Description: pushes a game state onto the game state stack
*	Inputs: pointer to a game state
*	Output: boolean
*	Precondition: n/a
*	Postcondition: returns true if game state is pushed otherwise false
*/
bool GameStateManager::pushState(BaseGameState* newGameState)
{
    if (newGameState == nullptr)
    {
        return false;
    }
    else 
    {
        this->gameStateStack.push(newGameState);
        return true;
    }
}

/*	Function: popState()
*	Date Created: 07/16/2022
*	Date Last Modified: 07/16/2022
*	Description: pops a game state from the game state stack
*	Inputs: n/a
*	Output: boolean
*	Precondition: n/a
*	Postcondition: returns false if stack is empty otherwise pops stack and returns true
*/
bool GameStateManager::popState()
{
    if (this->gameStateStack.empty())
    {
        return false;
    }
    else
    {
        this->gameStateStack.pop();
        return true;
    }
}

/*	Function: peekState()
*	Date Created: 07/16/2022
*	Date Last Modified: 07/16/2022
*	Description: peeks at the top most state on the stack
*	Inputs: n/a
*	Output: pointer to game state
*	Precondition: n/a
*	Postcondition: returns nullptr if stack is empty otherwise returns pointer to game state
*/
BaseGameState* GameStateManager::peekState()
{
    if (this->gameStateStack.empty())
    {
        return nullptr;
    }
    else
    {
        return this->gameStateStack.top();
    }
}
