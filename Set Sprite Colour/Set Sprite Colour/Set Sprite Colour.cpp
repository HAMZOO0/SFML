#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{

	sf::RenderWindow window(sf::VideoMode(500, 500), "Color");
	
	sf::Texture image;

	if (!image.loadFromFile("download (2).jpg"))
		std::cout<<"Error Image Not Load\n";

	sf::Sprite sprite(image);
	sprite.setTextureRect(sf::IntRect(0, 0, 500, 500));

	sprite.setColor(sf::Color(255, 255, 255, 200)); // half transparent
	//sprite.setColor(sf::Color(153, 255, 255));

	while (window.isOpen())
	{
		

		window.clear();
		window.draw(sprite);
		window.display();
	

	}


}
