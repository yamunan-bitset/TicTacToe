#include <SFML/Graphics.hpp>

int main(int argc, char** argv, char** envp)
{
  sf::RenderWindow window(sf::VideoMode(800, 800), "Tic Tac Toe");
  sf::Clock clock;
  
  sf::Texture x, o;
  x.loadFromFile("x.png");
  o.loadFromFile("o.png");
  sf::Sprite x_s(x), o_s(o);
  
  sf::VertexArray line(sf::Lines, 2);
  line[0].position = sf::Vector2f(0, 0);
  line[0].color = sf::Color(100, 0, 200);
  line[1].position = sf::Vector2f(100, 100);
  line[1].color = sf::Color(100, 0, 200);

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
      window.draw(line);
      window.display();
    }

  return 0;
}
