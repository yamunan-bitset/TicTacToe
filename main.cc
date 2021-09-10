#include <SFML/Graphics.hpp>

#include "board.hh"

int main(int argc, char** argv)
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Tic Tac Toe");
	/*
	sf::Texture x, o;
	x.loadFromFile("x.png");
	o.loadFromFile("o.png");
	sf::Sprite x_s(x), o_s(o);
	*/
	Board board;
	
	sf::Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				default: break;
			}
		}
		
		window.draw(board);
		window.clear();
		window.display();
    }
  return 0;
}
