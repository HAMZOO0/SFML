// Window Events.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Window ");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Resized) {
				std::cout << "Height = " << event.size.height << std::endl;
				std::cout << "Width = " << event.size.width << std::endl;
			}

			else if (event.type == sf::Event::Closed())
				window.close();

			else if (event.type == sf::Event::GainedFocus)
				std::cout << "Inside Window " << std::endl;

			else if (event.type == sf::Event::LostFocus)
				std::cout << " Outside  Window " << std::endl;
		}



		window.clear();
		window.display();
	}
}

