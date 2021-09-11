#include <SFML/Graphics.hpp>

int main(int argc, char** argv, char** envp)
{
  sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");
  sf::Clock clock;

  sf::Texture x, o;
  x.loadFromFile("x.png");
  o.loadFromFile("o.png");
  sf::Sprite x_s(x), o_s(o);
  
#include "board.hh"
  
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

      window.clear();
      window.draw(l1);
      window.draw(l2);
      window.draw(l3);
      window.draw(l4);
      window.display();
    }

  return 0;
}
