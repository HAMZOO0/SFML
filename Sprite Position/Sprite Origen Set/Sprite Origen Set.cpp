#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 800), "Color");

	sf::Texture image;

	if (!image.loadFromFile("aa.jpg"))
		std::cout << "Error Image Not Load\n";

	sf::Sprite sprite(image);
	
	//sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x *0.5, sprite.getTexture()->getSize().y * 0.5));

	sprite.setPosition(sf::Vector2f(100, 50)); // it change the psotion of X axis and y-axis of sprite 

	while (window.isOpen())
	{


		window.clear();
		window.draw(sprite);
		window.display();


	}


}
