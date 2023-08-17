#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Game", sf::Style::Default ); // creating window , adding style or button 

	sf::RectangleShape player(sf::Vector2f(100, 100)); // creating rectangle 

	player.setPosition(200, 200);

	sf::Texture playertexture;  // loading a player texture 
	playertexture.loadFromFile("character3_1.png");

	player.setTexture(&playertexture); // adding texture inside player(rectange )

		while (window.isOpen())
		{
			sf::Event evnt; 
			while (window.pollEvent(evnt))
			{
				switch (evnt.type)
				{
				case  sf::Event::Closed:
						window.close();
					break;
				 
				case sf::Event::Resized:
					std::cout << " Width --> " << evnt.size.width << " Height--> " << evnt.size.height << std::endl;
				}
			
					
			}
			window.draw(player);
			window.display();
		}

	
}
/*   ** Buffer ** Frount and back **  
you're on the right track! You create your graphical elements on the back buffer using functions like window.draw(shape). Once you're done drawing everything you want to display, you use the window.display() function to show what you've drawn on the front buffer, making it visible to the user.

Here's the process broken down step by step:

Drawing Phase (Back Buffer):

You use functions like window.draw(shape) to draw your shapes, sprites, and other graphics on the back buffer.
All your drawings are made on the back buffer, which is like your working canvas.
Display Phase (Front Buffer):

After you're finished drawing everything, you call window.display().
This action swaps the content of the back buffer with the content of the front buffer.
Now, the things you drew on the back buffer are visible on the screen because the front buffer is what the user sees.*/



/*  *** sf::Texture Directly: VS sf::Sprite with a Texture: ***
* 
Using sf::Texture Directly:
cpp
Copy code
sf::Texture playertexture;
playertexture.loadFromFile("character3_1.png");
In this approach, you're creating a texture object playertexture, loading an image from a file ("character3_1.png"), and storing it in the texture. However, at this point, the image isn't directly displayed on the screen. You've just prepared the image data to be used.

Using sf::Sprite with a Texture:
cpp
Copy code
sf::Sprite player;
player.setTexture(playertexture);
Here, you're creating a sprite object named player and associating it with the playertexture you loaded earlier. The sprite is like a visual object that can be placed, rotated, and scaled on the screen. By associating the texture with the sprite, you're essentially saying that you want the sprite to display the image defined by the texture.*/