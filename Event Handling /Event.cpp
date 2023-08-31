// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Event");

	while (window.isOpen())
	{
		sf::Event event;

			while (window.pollEvent(event)) // event store the what event happed by keyabord or other parihpler 
		{
				if (event.type == sf::Event::Closed) // Check if the event is a window close event
				{
					window.close(); // Close the window when the user clicks the close button
				}
		}

		window.clear();
		window.display();
	}

}
/*Event handling in SFML is the process of detecting and responding to various user interactions
or system events that occur during the execution of your application. These events can include 
user input from the keyboard, mouse, or other input devices, as well as window-related events like resizing or closing the window.
*/

/*
sf refers to the SFML namespace. SFML uses namespaces to organize its classes and functions. 
The sf namespace contains all the classes and functions provided by SFML. By using sf::, you are specifying that the class 
or function you are referring to belongs to the SFML library.

RenderWindow is an SFML class. It represents the main window of the application 
where you can draw graphical elements and interact with the user. It provides functionalities to manage the window, handle events,
and display graphics.

window is the name of the object created from the sf::RenderWindow class. It is an instance of the RenderWindow class. 
This object is used to interact with and control the main window of the application throughout the rest of the code.
You can draw graphics on the window, handle events, and more by using this window object.





*/
