// Mouse Events.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"SFML/Graphics.hpp"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 500), "Mouse");

	while (window.isOpen())
	{	
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case  sf::Event::Closed:
				window.close();
				break;

				
			case  sf::Event::MouseWheelMoved:
				std::cout << "MouseWheelMoved " << std::endl;
				break;


			case  sf::Event::MouseMoved:
				std::cout << "Movemnt Detected" << std::endl;
				std::cout << event.mouseMove.x   << std::endl;
				std::cout << event.mouseMove.y << std::endl;
				
				break;

			case  sf::Event::MouseButtonPressed  : 
				std::cout << "MouseButtonPressed " << std::endl;

				switch (event.key.code)
				{
				case sf::Mouse::Left:
					std::cout << "Left Mouse Button Pressed" << std::endl;
					break;
				case sf::Mouse::Right:
					std::cout << "Right Mouse Button Pressed" << std::endl;
					break;
				}

			
			}

		}

		window.clear();
		window.display();
	}
}

