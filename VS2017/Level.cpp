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
	rect[1].move(Vector2f(0.0f,470.0f));
	rect[1].setFillColor(wallC);

	rect[2].setSize(Vector2f(480.0f, 10.0f));
	rect[2].move(Vector2f(10.0f, 0.0f));
	rect[2].setRotation(90.0f);
	rect[2].setFillColor(wallC);

	rect[3].setSize(Vector2f(480.0f, 10.0f));
	rect[3].move(Vector2f(640.0f, 0.0f));
	rect[3].setRotation(90.0f);
	rect[3].setFillColor(wallC);

}
