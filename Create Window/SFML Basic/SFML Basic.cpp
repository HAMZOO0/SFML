// SFML Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 700), "__*Working*__ ");
	
	while (window.isOpen())
	{
		window.clear();

		window.display();
	}
}

/*
while (window.isOpen()) : This is like a loop that keeps running as long as the window is open.It continuously checks if the window is still open before performing the actions inside the loop.

window.clear(); : This line clears the window, meaning it erases everything that was previously drawn on it.It's like having a blank canvas to draw on again.

window.display(); : This line displays the window after clearing it.It's like showing your drawing on the canvas for everyone to see.
*/