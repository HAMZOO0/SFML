
// ## Main Point -->   img.setPosition(sf::Vector2f(x, y)); // Set the new position
#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Movement");

    sf::Texture texture; // texture holds the picture

    if (!texture.loadFromFile("char.jpg"))
    {
        std::cout << "Error: Could not load the image\n";
        return 1; // Return an error code
    }

    sf::Sprite img(texture); // create a sprite using the loaded texture

    int x = 0, y = 0; // Initialize position

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
            {
                x += 5; // Adjust the value as needed to control the speed of movement
                y += 10;  // No need to modify y in this case
                img.setPosition(sf::Vector2f(x, y)); // Set the new position
            }
        }

        window.clear();    // Clear the window before drawing
        window.draw(img);  // Draw the sprite with the loaded image
        window.display();  // Display the contents of the window
    }

    return 0;
}
