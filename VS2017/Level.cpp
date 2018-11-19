#include "Level.h"

void Level::Draw(RenderWindow & renderWindow)
{
	for (int i = 0; i < 12; i++)
	{
		renderWindow.draw(rect[i]);
	}
}

void Level::setRect()
{
	rect[0].setSize(Vector2f(640.0f, 10.0f));
	rect[0].setOrigin(Vector2f(0.0f, 0.0f));
	rect[0].setFillColor(wallC);

	rect[1].setSize(Vector2f(640.0f, 10.0f));
	rect[1].move(Vector2f(0.0f, 470.0f));
	rect[1].setFillColor(wallC);

	rect[2].setSize(Vector2f(480.0f, 10.0f));
	rect[2].move(Vector2f(10.0f, 0.0f));
	rect[2].setRotation(90.0f);
	rect[2].setFillColor(wallC);

	rect[3].setSize(Vector2f(480.0f, 10.0f));
	rect[3].move(Vector2f(640.0f, 0.0f));
	rect[3].setRotation(90.0f);
	rect[3].setFillColor(wallC);

	rect[4].setSize(Vector2f(100.0f, 10.0f));
	rect[4].move(Vector2f(100.0f,0.0f));
	rect[4].setRotation(90.0f);
	rect[4].setFillColor(wallC);

	rect[5].setSize(Vector2f(150.0f, 10.0f));
	rect[5].move(Vector2f(0.0f, 240.0f));
	rect[5].setFillColor(wallC);

	rect[6].setSize(Vector2f(125.0f, 10.0f));
	rect[6].move(Vector2f(175.0f, 355.0f));
	rect[6].setRotation(90.0f);
	rect[6].setFillColor(wallC);

	rect[7].setSize(Vector2f(125.0f, 10.0f));
	rect[7].move(Vector2f(175.0f, 355.0f));
	rect[7].setFillColor(wallC);

	rect[8].setSize(Vector2f(125.0f, 10.0f));
	rect[8].move(Vector2f(300.0f, 230.0f));
	rect[8].setRotation(90.0f);
	rect[8].setFillColor(wallC);

	rect[9].setSize(Vector2f(150.0f, 10.0f));
	rect[9].move(Vector2f(450.0f, 330.0f));
	rect[9].setRotation(90.0f);
	rect[9].setFillColor(wallC);

	rect[10].setSize(Vector2f(150.0f, 10.0f));
	rect[10].move(Vector2f(400.0f, 0.0f));
	rect[10].setRotation(90.0f);
	rect[10].setFillColor(wallC);

	rect[11].setSize(Vector2f(125.0f, 10.0f));
	rect[11].move(Vector2f(400.0f, 140.0f));
	rect[11].setFillColor(wallC);
}
