#include <SFML/Graphics.hpp>

class Lines
{
  //   | |
  // --|-|--
  // --|-|--
  //   | |

public:
  Lines();
  //  inline const sf::VertexArray* GetLines() const { return lines; }
  
  sf::VertexArray lines[4];
};
