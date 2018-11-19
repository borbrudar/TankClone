#include "Game.h"

void Game::Go()
{
	renderWindow.create(VideoMode(screenWidth, screenHeight), "Tank game");
	renderWindow.setVerticalSyncEnabled(true);
	renderWindow.setFramerateLimit(60);
	Color color = Color(192, 192, 192, 255);
	Clock clock;
	//GAME LOOP
	while (renderWindow.isOpen())
	{
		if (clock.getElapsedTime().asMilliseconds() >= 20)
		{
			Update();
			renderWindow.clear(color);
			Draw();
			renderWindow.display();
			clock.restart();
		}
	}
}

void Game::Draw()
{
	lvl.Draw(renderWindow);
	player1.Draw(renderWindow,lvl, player1.getX(), player1.getY());
}

void Game::Update()
{
	//Handles events and player input
	while (renderWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case Event::Closed:
			renderWindow.close();
		}
		player1.inputCtrl(event);
	}
}

