#pragma once
#include "Player.h"
#include "Level.h"

using namespace sf;

class Game
{
	//Main class for drawing and updates
public:
	static const int screenWidth = 640;
	static const int screenHeight = 480;
public:
	RenderWindow renderWindow;
	Event event;
	Level lvl;
private:
	Player player1{200.0f,100.0f};
	float thickness = 10.0f;
	float hitT = 1.0f;
public:
	//Functions
	void Go();
	void Draw();
	void Update();
};