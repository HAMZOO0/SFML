// Text Events.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 500), "TEXT");

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		
			else if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode == 65)
				{
					std::cout << "A\n";
				}
				else
				{
					std::cout << "TEXT Entered\n";
				}
			}
		

		}


		window.clear();
		window.display();
	}

}

