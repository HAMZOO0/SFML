
#include <iostream>
#include"SFML/Graphics.hpp"
int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "Shape Texture");


    sf::Texture background; // texture holds the picture

    if (!background.loadFromFile("backg.jpg"))
        std::cout << "Error: Could not load the image\n";

    sf::Sprite img(background); // create a sprite using the loaded texture


    sf::CircleShape circle;
    circle.setRadius(200);
    circle.setPointCount(500);

    sf::Texture texture;
    if (!texture.loadFromFile("dow.jpg"))
    {
        std::cout << "Error Image Not Loading\n";
    }
    circle.setTexture(&texture);

    while (window.isOpen())
    {
        window.clear();
        window.draw(img);
        window.draw(circle);
        window.display();
    }
}
