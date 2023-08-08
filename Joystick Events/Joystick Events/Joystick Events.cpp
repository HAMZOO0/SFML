// Joystick Events.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"SFML/Graphics.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 500), "Joystick");

	while (window.isOpen())
	{	
		sf::Event event; 
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed())
				window.close();

			else if (event.type == sf::Event::JoystickConnected)
				cout << "Joystick Connected (*) " << endl;

			else if (event.type == sf::Event::JoystickDisconnected)
				cout << "Joystick Disconnected (!) " << endl;
		}

		window.clear();
		window.display();
	}
}

