#include <SFML/Graphics.hpp>
#include "FindResouce.h"
#include "MainCharter.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 800), "SFML works!");

	MainCharter charter;


	int KindOfFace = 0;



	while (window.isOpen())
	{
		sf::Event event;

		charter.CharterKeyInput();

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		window.clear();
		window.draw(charter.PrintCharter());
		window.display();
	}

	return 0;
}