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
      for (sf::VertexArray va : lines)
	window.draw(va);
      window.display();
    }

  return 0;
}
