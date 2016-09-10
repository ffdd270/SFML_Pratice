#include "MainCharter.h"


MainCharter::MainCharter()
{
	MainName = "Ani (*).png";
	file = find.Find(MainName);
	pt_main = new sf::Texture[file.size()];
	for (int i = 0; i < file.size(); i++)
	{
		if (!pt_main[i].loadFromFile(file[i]))
		{
			printf("LoadFormFile Error, Is File is OK?");
		}
	}
	KindOfFace = 0;
	x = 0;
	y = 0;
}

MainCharter::~MainCharter()
{
	delete[] pt_main;
}

sf::Sprite MainCharter::PrintCharter()
{
	main.setTexture(pt_main[KindOfFace]);
	main.setScale(0.2f, 0.2f);
	main.setPosition(x, y);
	return main;
}

void MainCharter::NextFile()
{
	if (KindOfFace < file.size() - 1)
		KindOfFace++;
	else
		KindOfFace = 0;
}

void MainCharter::MoveCharter(Move move)
{
	switch (move)
	{
	case UP:
		y--;
		break;
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
}

void MainCharter::CharterKeyInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		MoveCharter(LEFT);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		MoveCharter(RIGHT);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		MoveCharter(DOWN);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		MoveCharter(UP);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		NextFile();
	}
}
