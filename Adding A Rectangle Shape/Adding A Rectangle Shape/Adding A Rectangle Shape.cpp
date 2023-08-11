// Adding A Rectangle Shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "Shapes");

	sf::RectangleShape rs(sf::Vector2f(50, 50));

	while (window.isOpen())
	{
		sf::Event event; 
		while (window.pollEvent(event))
		{
			if (event.type == event.Closed)
				window.close();
		}
		window.clear();
		window.draw(rs);
		window.display();
	}
}

