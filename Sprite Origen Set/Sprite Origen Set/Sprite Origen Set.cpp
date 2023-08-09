#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Color");

	sf::Texture image;

	if (!image.loadFromFile("aa.jpg"))
		std::cout << "Error Image Not Load\n";

	sf::Sprite sprite(image);
	
	sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x *0.5, sprite.getTexture()->getSize().y * 0.5));

	while (window.isOpen())
	{


		window.clear();
		window.draw(sprite);
		window.display();


	}


}
