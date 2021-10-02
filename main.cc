#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "sprite.hh"
#include "board.hh"

int main(int argc, char** argv, char** envp)
{
  Lines line;
  
  sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");

  bool draw_x = false, draw_o = false;
  float x_pos, y_pos;
  std::vector<sf::CircleShape> circles;
  std::vector<float> xX;
  std::vector<float> yX;
  
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
		  draw_o = false;
		  x_pos  = event.mouseButton.x;
		  y_pos  = event.mouseButton.y;
		  break;
		case sf::Mouse::Left:
		  draw_o = true;
		  draw_x = false;
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
      
      int x_corrected, y_corrected;
      if (x_pos <= 300) x_corrected = 150;
      if (y_pos <= 300) y_corrected = 150;
      if (x_pos >= 300 && x_pos <= 600) x_corrected = 450;
      if (y_pos >= 300 && y_pos <= 600) y_corrected = 450;
      if (x_pos >= 600 && x_pos <= 900) x_corrected = 750;
      if (y_pos >= 600 && y_pos <= 900) y_corrected = 750;

      if (draw_x)
	{
	  xX.push_back(x_corrected);
	  yX.push_back(y_corrected);
	  for (auto i : xX)
	    {
	      for (auto j : yX)
		{
		  window.draw(CreateX1(i, j));
		  window.draw(CreateX2(i, j));
		  window.draw(CreateX3(i, j));
		  window.draw(CreateX4(i, j));
		}
	    }
	}
      
      if (draw_o)
	{
	  circles.push_back(CreateO(x_corrected - 50, y_corrected - 50)); // 50 px offset
	  for (auto i : circles)
	    window.draw(i);
	}
      
      window.display();
    }

  return 0;
}
