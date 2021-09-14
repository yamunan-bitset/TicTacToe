sf::VertexArray CreateX(float x_pos, float y_pos)
{
  // Length: 50px TODO
  sf::VertexArray x;//TODO:first_line, second_line;
  x.setPrimitiveType(sf::Lines);
  x.resize(2);
  x[0].position = sf::Vector2f(x_pos, y_pos);
  x[0].color    = sf::Color(sf::Color::White);
  x[1].position = sf::Vector2f(0, 0);
  x[1].color    = sf::Color(sf::Color::White);
  return x;
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
