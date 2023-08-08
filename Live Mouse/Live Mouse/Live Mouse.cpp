// Live Mouse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"SFML/Graphics.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(770, 700), "Live Mouse ");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::MouseButtonPressed)
				std::cout << "Left\n";
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			std::cout << "Fire\n";

		std::cout << "HI\n";

		window.clear();
		window.display();

	}
}

/*
Sure, let's look at your provided code snippets and identify which one is using polling and which one is using an event-driven approach:

### Polling Approach:
```cpp
int main()
{
    sf::RenderWindow window(sf::VideoMode(770, 700), "Live Mouse ");

    while (window.isOpen())
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            std::cout << "Fire\n";

        window.clear();
        window.display();
    }
}
```

In this code, you're continuously checking if the left mouse button is pressed using `sf::Mouse::isButtonPressed(sf::Mouse::Left)`. This is a polling approach because you're constantly asking whether the button is pressed and then responding immediately.

### Event-Driven Approach:
```cpp
int main()
{
    sf::RenderWindow window(sf::VideoMode(770, 700), "Live Mouse ");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed)
                std::cout << "Left\n";
        }
    }
}
```

In this code, you're using an event-driven approach. You're waiting for events to occur and then reacting to them. Specifically, you're waiting for a mouse button press event (`sf::Event::MouseButtonPressed`) and then printing "Left" when that event happens.

So, to summarize:
- The first code snippet is using a **polling** approach because it continuously checks if the mouse button is pressed.
- The second code snippet is using an **event-driven** approach because it waits for mouse button press events and then responds to them.*/