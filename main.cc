#include <SFML/Graphics.hpp>
#include <iostream>

#include "sprite.hh"
#include "board.hh"

int main(int argc, char** argv, char** envp)
{
  Lines line;
  sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");

  bool draw_x = false, draw_o = false;
  float x_pos, y_pos;
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
	    case sf::Event::MouseButtonPressed:
	      switch (event.mouseButton.button)
		{
		case sf::Mouse::Right:
		  draw_x = true;
		  x_pos  = event.mouseButton.x;
		  y_pos  = event.mouseButton.y;
		  break;
		case sf::Mouse::Left:
		  draw_o = true;
		  x_pos = event.mouseButton.x;
		  y_pos = event.mouseButton.y;
		  break;
		default: break;
		}
	      break;
	    default: break;
	    }
	}

      window.clear();
      for (sf::VertexArray va : line.lines)
	window.draw(va);
      
      if (draw_x)
	window.draw(CreateX(x_pos, y_pos));

      if (draw_o)
	window.draw(CreateO(x_pos, y_pos));
      
      window.display();
    }

  return 0;
}
