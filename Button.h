#pragma once
#include "SFML/Graphics.hpp"
class Button :
    public sf::RectangleShape
{
public:
    /*  Function: Button() 
    *   Date Created: 07/17/2022
    *   Date Last Modified: 07/17/2022
    *   Description: constructor for Button class
    *   Input: Vector2f of position and size, and a color
    *   Output: n/a
    *   Precondition: n/a
    *   Postcondition: creates Button
    */
    Button(sf::Vector2f pos, sf::Vector2f size, sf::Color color) : sf::RectangleShape(size)
    {
        this->setPosition(pos);
        this->setFillColor(color);
    }
};

