#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Img load ");

    sf::Texture texture; // texture holds the picture

    if (!texture.loadFromFile("image.jpg"))
        std::cout << "Error: Could not load the image\n";

    sf::Sprite img(texture); // create a sprite using the loaded texture

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();    // Clear the window before drawing
        window.draw(img);  // Draw the sprite with the loaded image
        window.display();  // Display the contents of the window
    }

    return 0;
}
