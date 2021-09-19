// \   /
//  \ /
//   -  <- (x, y)
//  / \
// /   \
  
sf::VertexArray CreateX1(float x_pos, float y_pos)
{
  sf::VertexArray line1;
  // line1: (x-50, y+50)
  line1.setPrimitiveType(sf::Lines);
  line1.resize(2);
  line1[0].position = sf::Vector2f(x_pos - 50, y_pos + 50);
  line1[0].color    = sf::Color(sf::Color::White);
  line1[1].position = sf::Vector2f(x_pos, y_pos);
  line1[1].color    = sf::Color(sf::Color::White);

  return line1;
}

sf::VertexArray CreateX2(float x_pos, float y_pos)
{
  sf::VertexArray line2;
  // line2: (x+50, y-50)
  line2.setPrimitiveType(sf::Lines);
  line2.resize(2);
  line2[0].position = sf::Vector2f(x_pos + 50, y_pos - 50);
  line2[0].color    = sf::Color(sf::Color::White);
  line2[1].position = sf::Vector2f(x_pos, y_pos);
  line2[1].color    = sf::Color(sf::Color::White);

  return line2;
}

sf::VertexArray CreateX3(float x_pos, float y_pos)
{
  sf::VertexArray line3;
  // line3: (x-50, y-50)
  line3.setPrimitiveType(sf::Lines);
  line3.resize(2);
  line3[0].position = sf::Vector2f(x_pos - 50, y_pos - 50);
  line3[0].color    = sf::Color(sf::Color::White);
  line3[1].position = sf::Vector2f(x_pos, y_pos);
  line3[1].color    = sf::Color(sf::Color::White);

  return line3;
}

sf::VertexArray CreateX4(float x_pos, float y_pos)
{
  sf::VertexArray line4;
  // line4: (x+50, y+50)
  line4.setPrimitiveType(sf::Lines);
  line4.resize(2);
  line4[0].position = sf::Vector2f(x_pos + 50, y_pos + 50);
  line4[0].color    = sf::Color(sf::Color::White);
  line4[1].position = sf::Vector2f(x_pos, y_pos);
  line4[1].color    = sf::Color(sf::Color::White);

  return line4;
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
