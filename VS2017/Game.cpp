#include "Game.h"

void Game::Go()
{
	renderWindow.create(VideoMode(screenWidth, screenHeight), "Tank game");
	//GAME LOOP
	Clock clock;
	while (renderWindow.isOpen())
	{
		int curTime = clock.restart().asSeconds();
		int fps = 1.0 / curTime;
		Update();
		renderWindow.clear();
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

