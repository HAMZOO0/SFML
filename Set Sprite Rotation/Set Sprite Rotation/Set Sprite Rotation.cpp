#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Img load ");

    sf::Texture texture; // texture holds the picture
    texture.setRepeated(true);

    if (!texture.loadFromFile("roki.jpg"))
        std::cout << "Error: Could not load the image\n";

    sf::Sprite img(texture); // create a sprite using the loaded texture

 
    sf::Vector2u textureSize = texture.getSize(); // texture.getSize() return the actual  dimention of sprite 

    img.setOrigin(textureSize.x / 2.0f, textureSize.y / 2.0f);

    img.setPosition(window.getSize().x / 2.0f, window.getSize().y / 2.0f); // Center the sprite in the window

 //   img.rotate(90); // Rotate the sprite by 90 degrees

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
