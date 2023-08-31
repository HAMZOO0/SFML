#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Img load ");

    sf::Texture texture; // texture holds the picture
    texture.setRepeated(true);


    if (!texture.loadFromFile("char.jpg"))
        std::cout << "Error: Could not load the image\n";

    sf::Sprite img(texture); // create a sprite using the loaded texture

    img.setScale(5, 6); // this is use for zoom on x axis and y axis 5 zoon in x-axis and 6 in y-axis

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
