sf::VertexArray* CreateX(float x_pos, float y_pos)
{
  // \   /
  //  \ /
  //   -  <- (x, y)
  //  / \
  // /   \
  
  // Length: 50px
  sf::VertexArray line1, line2, line3, line4;
  // TODO: Line vertices
  // line1: (x-50, y+50)
  line1.setPrimitiveType(sf::Lines);
  line1.resize(2);
  line1[0].position = sf::Vector2f(x_pos, y_pos);
  line1[0].color    = sf::Color(sf::Color::White);
  line1[1].position = sf::Vector2f(0, 0);
  line1[1].color    = sf::Color(sf::Color::White);

  // line2: (x+50, y-50)
  line2.setPrimitiveType(sf::Lines);
  line2.resize(2);
  line2[0].position = sf::Vector2f(x_pos, y_pos);
  line2[0].color    = sf::Color(sf::Color::White);
  line2[1].position = sf::Vector2f(0, 0);
  line2[1].color    = sf::Color(sf::Color::White);

  // line3: (x-50, y-50)
  line3.setPrimitiveType(sf::Lines);
  line3.resize(2);
  line3[0].position = sf::Vector2f(x_pos, y_pos);
  line3[0].color    = sf::Color(sf::Color::White);
  line3[1].position = sf::Vector2f(0, 0);
  line3[1].color    = sf::Color(sf::Color::White);

  // line4: (x+50, y+50)
  line4.setPrimitiveType(sf::Lines);
  line4.resize(2);
  line4[0].position = sf::Vector2f(x_pos, y_pos);
  line4[0].color    = sf::Color(sf::Color::White);
  line4[1].position = sf::Vector2f(0, 0);
  line4[1].color    = sf::Color(sf::Color::White);

  return { first_line, second_line };
}

sf::CircleShape CreateO(float x_pos, float y_pos)
{
  // Radius: 50px
  sf::CircleShape o(50);
  o.setFillColor(sf::Color::Black);
  o.setOutlineThickness(1);
  o.setOutlineColor(sf::Color::White);
  o.setPosition(x_pos, y_pos);
  return o;
}
