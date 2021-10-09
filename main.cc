#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "sprite.hh"
#include "board.hh"

int main(int argc, char** argv, char** envp)
{
  Lines line;
  
  sf::RenderWindow window(sf::VideoMode(900, 900), "Tic Tac Toe");

  bool add_o = false, player_turn = false;
  float x_pos, y_pos;
  std::vector<sf::CircleShape> circles;
  std::vector<std::pair<float, float>> computer_xy;
  
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
		case sf::Mouse::Left:
		  if (player_turn)
		    {
		      add_o = true;
		      x_pos = event.mouseButton.x;
		      y_pos = event.mouseButton.y;
		    }
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

      // Player Turn
      if (add_o)
	{
	  circles.push_back(CreateO(x_corrected - 50, y_corrected - 50)); // 50 px offset
	  add_o = false;
	  player_turn = false;
	}

      // Computer
      if (!player_turn)
	{
	  std::srand(std::time(NULL));
	  float x, y;
	  // Choose Random Position between: 
	  switch (1 + (std::rand() % 4))
	    {
	      //  X |  |
	      // ---|--|---
	      //    |  |
	      // ---|--|---
	      //    |  |
	    case 1: x = 150; y = 150; break;
	      //    |  |
	      // ---|--|---
	      //    |  |
	      // ---|--|---
	      //  X |  |
	    case 2: x = 150; y = 750; break;
	      //    |  | X
	      // ---|--|---
	      //    |  |
	      // ---|--|---
	      //    |  |
	    case 3: x = 750; y = 150; break;
	      //    |  |
	      // ---|--|---
	      //    |  |
	      // ---|--|---
	      //    |  | X
	    case 4: x = 750; y = 750; break;
	    }
	  computer_xy.push_back(std::pair<float, float> (x, y));
	  player_turn = true;
	}

      // Render
      for (unsigned i = 0; i < computer_xy.size(); i++)
	{
	  window.draw(CreateX1(computer_xy[i].first, computer_xy[i].second));
	  window.draw(CreateX2(computer_xy[i].first, computer_xy[i].second));
	  window.draw(CreateX3(computer_xy[i].first, computer_xy[i].second));
	  window.draw(CreateX4(computer_xy[i].first, computer_xy[i].second));
	}
      for (auto i : circles)
	window.draw(i);
      
      window.display();
    }

  return 0;
}
