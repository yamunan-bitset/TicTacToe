#include "board.hh"

Board::Board()
{
	for (unsigned i = 0; i < 3; i++)
		for (unsigned j = 0; j < 3; j++)
		{
			squares[j + (i * 3)].setPosition(sf::Vector2f(j * 58.0f, i * 58.0f));
			squares[j + (i * 3)].setSize(sf::Vector2f(58.0f, 58.0f));
		}
}

void Board::draw(sf::RenderTarget& target, sf::RenderStates states) const
{ for (unsigned i = 0; i < 9; i++) target.draw(squares[i]);
}

