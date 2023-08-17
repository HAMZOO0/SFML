#include"SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 800), "Drawing");

	sf::Vertex point;
	point.position = sf::Vector2f(300, 300);
	point.color = sf::Color::Green;

	sf::VertexArray line(sf::Lines, 2);

	line[0].position = sf::Vector2f(200, 160);
	line[0].color = sf::Color::Red;

	line[1].position = sf::Vector2f(550, 90);
	line[1].color = sf::Color::Yellow;

	while(window.isOpen())
	{
		window.clear();
		window.draw(line);
		window.display();
	}


}

