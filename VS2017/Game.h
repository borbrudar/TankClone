#pragma once
#include "Player.h"
#include "Level.h"
#include "Menu.h"
#include "AI.h"

using namespace sf;

class Game
{
	//Main class for drawing and updates
private:
	enum class State
	{
		Menu,
		Game
	};
public:
	static const int screenWidth = 640;
	static const int screenHeight = 480;
public:
	RenderWindow renderWindow;
	Event event;
	Level lvl;
	State state = State::Menu;
private:
	Player player1{200.0f,100.0f};
	AI ai{ 400.0f,400.0f };
	float thickness = 10.0f;
	float hitT = 1.0f;
	Menu menu;
public:
	//Functions
	void Go();
	void Draw();
	void Update();
};