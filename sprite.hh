sf::VertexArray CreateX(float x_pos, float y_pos)
{
  sf::VertexArray x;
  x.setPrimitiveType(sf::Lines);
  x.resize(2);
  x[0].position = sf::Vector2f(x_pos, y_pos);
  x[0].color    = sf::Color(sf::Color::White);
  x[1].position = sf::Vector2f(0, 0);
  x[1].color    = sf::Color(sf::Color::White);
  return x;
}

sf::VertexArray CreateO(float x_pos, float y_pos)
{
  sf::VertexArray o;
  o.setPrimitiveType(sf::Lines);
  o.resize(2);
  o[0].position = sf::Vector2f(x_pos, y_pos);
  o[0].color    = sf::Color(sf::Color::White);
  o[1].position = sf::Vector2f(0, 0);
  o[1].color    = sf::Color(sf::Color::White);
  return o;
}
