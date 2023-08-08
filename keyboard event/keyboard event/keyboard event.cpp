// keyboard event.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"SFML/Graphics.hpp"
#include <iostream>


int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "...(Keyboard)...");
    
	while (window.isOpen())
	{
		sf::Event event; 
		
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			else if (event.type == sf::Event::KeyPressed)
				std::cout << "Key Pressed" << std::endl;

			else if (event.type == sf::Event::MouseButtonPressed) // event.type == sf::Event:: --> auto suggest 
				std::cout << "Mouse Button Pressed" << std::endl;


			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
			{
				std::cout << " jump" << std::endl;
			}


		}

		window.clear();
		window.display();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
