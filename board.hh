#ifndef _BOARD_H
#define _BOARD_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>

class Board : public sf::Drawable
{
public:

    Board();

private:
    std::array<sf::RectangleShape, 9> squares;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif

