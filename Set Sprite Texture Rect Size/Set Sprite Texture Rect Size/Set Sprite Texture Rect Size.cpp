#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Img load ");

    sf::Texture texture; // texture holds the picture
    texture.setRepeated(true);


    if (!texture.loadFromFile("image.jpg"))
        std::cout << "Error: Could not load the image\n";

    sf::Sprite img(texture); // create a sprite using the loaded texture

    img.setTextureRect(sf::IntRect(0, 0, 600, 600)); // L T  W H  
    // LEft or top ma ginty pix dan ga itna agy aty gan ga , and w , h expend krny ge pix dany pr 

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
/*
img.setTextureRect(sf::IntRect(0, 0, 160, 77));: This line sets the texture rectangle for the sprite img. A texture rectangle defines the portion of the texture that should be displayed on the sprite. It takes four arguments: (left, top, width, height). In this case:

left: The x-coordinate of the top-left corner of the rectangle on the texture (starting from 0).
top: The y-coordinate of the top-left corner of the rectangle on the texture (starting from 0).
width: The width of the rectangle.
height: The height of the rectangle.*/