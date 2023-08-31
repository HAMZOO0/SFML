// Adding A Rectangle Shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "Shapes");

	sf::CircleShape circle (300);
	circle.setRadius(300); 
	//both have same meaning we are creating  circle of 300 r 

	circle.setPointCount(500); // more clear circle 

	circle.setFillColor(sf::Color(200,150,0)); // adding color in circle 


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == event.Closed)
				window.close();
		}
		window.clear();
		window.draw(circle);
		window.display();
	}
}
