#include "Game.h"

void Game::Go()
{
	renderWindow.create(VideoMode(screenWidth, screenHeight), "Tank game");
	renderWindow.setVerticalSyncEnabled(true);
	renderWindow.setFramerateLimit(60);
	Color color = Color(192, 192, 192, 255);

	//setRect
	lvl.setRect(640.0f, thickness, 0.0f, 0.0f, hitT, false, 0);
	lvl.setRect(640.0f, thickness, 0.0f, 470.0f, hitT, false, 1);
	lvl.setRect(480.0f, thickness, 10.0f, 0.0f, hitT, true, 2);
	lvl.setRect(480.0f, thickness, 640.0f, 0.0f, hitT, true, 3);
	lvl.setRect(100.0f, thickness, 100.0f, 0.0f, hitT, true, 4);
	lvl.setRect(150.0f, thickness, 0.0f, 240.0f, hitT, false, 5);
	lvl.setRect(125.0f, thickness, 175.0f, 355.0f, hitT, true, 6);
	lvl.setRect(125.0f, thickness, 175.0f, 355.0f, hitT, false, 7);
	lvl.setRect(125.0f, thickness, 300.0f, 230.0f, hitT, true, 8);
	lvl.setRect(150.0f, thickness, 450.0f, 330.0f, hitT, true, 9);
	lvl.setRect(150.0f, thickness, 400.0f, 0.0f, hitT, true, 10);
	lvl.setRect(125.0f, thickness, 400.0f, 140.0f, hitT, false, 11);
	
	//GAME LOOP
	while (renderWindow.isOpen())
	{
		Update();
		renderWindow.clear(color);
		Draw();
		renderWindow.display();
	}
}

void Game::Draw()
{
	if (state == State::Game)
	{
		player1.Draw(renderWindow, lvl, player1.getX(), player1.getY());
		lvl.Draw(renderWindow);
		ai.Draw(renderWindow);
		if (Keyboard::isKeyPressed(Keyboard::T))
		{
			state = State::Menu;
		}
	}
	if (state == State::Menu)   menu.Draw(renderWindow);
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


		if (state == State::Game) 
		{
		player1.inputCtrl(event, lvl);
		ai.Update(event, lvl, player1.getX(), player1.getY(), renderWindow);
		}
		if (state == State::Menu)
		{
			if (menu.Update(renderWindow) == 1) state = State::Game;
		
		}
	}
}

