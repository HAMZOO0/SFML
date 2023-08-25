#include"SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 500), "Font and Text");

	sf::Font font;	//font store the font which we get from file 

	if (!font.loadFromFile("Lato-Black.ttf"))
		std::cout << "Font not loaded\n";

	//	To draw text, you will be using the sf::Text class.

	sf::Text text; 
	text.setFont(font);
	// here we create text obj and give it to font to display 
	
	text.setString("Hi this is my First program in which i am using font ");
	//set the string to display

	// set the character size
		text.setCharacterSize(24); // in pixels, not points!


		// set the color
		text.setFillColor(sf::Color::Cyan);

		text.setStyle(sf::Text::Bold | sf::Text::Underlined);

		while (window.isOpen())
		{
			window.clear();
			window.draw(text);
			window.display();
		}
}
