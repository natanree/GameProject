#pragma once
#include "BaseGameState.h"
#include "Button.h"

class MainMenuGameState :
    public BaseGameState
{
public:
    void draw(sf::RenderWindow gameWindow, const float timeElapsed);

    void update(sf::RenderWindow gameWindow, const float timeElapsed);
private:
    Button mPlayButton;
    Button mSettingsButton;
    Button mQuitButton;
};

