
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "Shapes");

	sf::RectangleShape line(sf::Vector2f(1000, 5));
	line.rotate(50);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == event.Closed)
				window.close();
		}
		window.clear();
		window.draw(line);
		window.display();
	}
}
