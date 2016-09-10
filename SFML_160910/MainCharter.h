#pragma once

#include "FindResouce.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace std;

enum Move
{
	UP,LEFT,RIGHT,DOWN
};

class MainCharter
{
private:
	int KindOfFace;
	int x, y;
	int HP;
	bool KeyLock;
	sf::Texture * pt_main;
	sf::Sprite main;
	FindResouce find;
	string MainName;
	vector<string> file;
	void MoveCharter(Move move);
public:
	MainCharter();
	sf::Sprite PrintCharter();
	void CharterKeyInput();
	void NextFile();
	~MainCharter();
};

