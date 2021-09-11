sf::VertexArray lines[4];

//  |
//  |
//  |
//  |
lines[0].setPrimitiveType(sf::Lines);
lines[0].resize(2);
lines[0][0].position = sf::Vector2f(300, 0);
lines[0][0].color = sf::Color(100, 0, 200);
lines[0][1].position = sf::Vector2f(300, 900);
lines[0][1].color = sf::Color(100, 0, 200);

//   |
//   |
//   |
//   |
lines[1].setPrimitiveType(sf::Lines);
lines[1].resize(2);lines[1][0].position = sf::Vector2f(600, 0);
lines[1][0].color = sf::Color(100, 0, 200);
lines[1][1].position = sf::Vector2f(600, 900);
lines[1][1].color = sf::Color(100, 0, 200);

//
// -------
//
//
lines[2].setPrimitiveType(sf::Lines);
lines[2].resize(2);
lines[2][0].position = sf::Vector2f(0, 300);
lines[2][0].color = sf::Color(100, 0, 200);
lines[2][1].position = sf::Vector2f(900, 300);
lines[2][1].color = sf::Color(100, 0, 200);

//
//
// -------
//
lines[3].setPrimitiveType(sf::Lines);
lines[3].resize(2);
lines[3][0].position = sf::Vector2f(0, 600);
lines[3][0].color = sf::Color(100, 0, 200);
lines[3][1].position = sf::Vector2f(900, 600);
lines[3][1].color = sf::Color(100, 0, 200);

//   | |
// --|-|--
// --|-|--
//   | |
