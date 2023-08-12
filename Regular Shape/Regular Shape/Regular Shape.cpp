
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "Shapes");

	sf::CircleShape shape(300,4); // 1st parameter is radius and 2nd is poins of circle so if we use this so we create polygon shapes 
// 	shape.setPointCount(3); same as 2nd parameter 

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == event.Closed)
				window.close();
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
}
