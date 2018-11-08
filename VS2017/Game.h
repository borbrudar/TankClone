#pragma once
#include "Player.h"
using namespace sf;

class Game
{
public:
	static const int screenWidth = 640;
	static const int screenHeight = 480;
public:
	RenderWindow renderWindow;
	Event event;
private:
	Player player1{100.0f,100.0f };
public:
	//Functions
	void Go();
	void Draw();
	void Update();

};