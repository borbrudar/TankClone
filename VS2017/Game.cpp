#include "Game.h"

void Game::Go()
{
	renderWindow.create(VideoMode(screenWidth, screenHeight), "Tank game");
	renderWindow.setVerticalSyncEnabled(true);
	renderWindow.setFramerateLimit(60);
	//GAME LOOP
	while (renderWindow.isOpen())
	{
		Update();
		renderWindow.clear(Color::Color::White);
		Draw();
		renderWindow.display();
	}
}

void Game::Draw()
{
	player1.Draw(renderWindow, player1.getX(), player1.getY());
}

void Game::Update()
{
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

