#include "Player.h"
#include "Level.h"
#include <cmath>

void Player::inputCtrl(Event event,Level &lvl)
{
	if (event.type == Event::KeyPressed)
	{
		switch (event.key.code)
		{
		case Keyboard::Key::Left:
			leftF = true;
			break;
		case Keyboard::Key::Right:
			rightF = true;
			break;
		case Keyboard::Key::Up:
			upF = true;
			break;
		case Keyboard::Key::Down:
			downF = true;
			break;
		}
	}

	if (upF) as.s1.setPosition(x += (float)std::cos(deg * (3.14159 / 180.0f)) * speed, y += (float)std::sin(deg * (3.14158 / 180.0f)) * speed);
	if (downF) as.s1.setPosition(x += -(float)(std::cos(deg * (3.14159 / 180.0f)) * (speed / 2)), y += -(float)(std::sin(deg * (3.14158 / 180.0f)) * (speed / 2)));
	if (leftF) as.s1.setRotation(deg -= 4.0f);
	if (rightF) as.s1.setRotation(deg += 4.0f);

	if (event.type == Event::KeyReleased)
	{
		switch (event.key.code)
		{
		case Keyboard::Key::Left:
			leftF = false;
			break;
		case Keyboard::Key::Right:
			rightF = false;
			break;
		case Keyboard::Key::Up:
			upF = false;
			break;
		case Keyboard::Key::Down:
			downF = false;
			break;
		}
	}
	
		bul.moveCtrl(event, deg);
		collision(as, lvl);
}


void Player::Draw(RenderWindow &renderWindow, Level &lvl, float x, float y)
{
	as.s1.setPosition(Vector2f(x, y));
	bul.Draw(renderWindow, as, lvl, x, y);
	renderWindow.draw(as.s1);
}

void Player::collision(Assets & as, Level & lvl)
{
	for (int i = 0; i < 12; i++)
	{
		if (as.s1.getGlobalBounds().intersects(lvl.rectR[i].getGlobalBounds()) || as.s1.getGlobalBounds().intersects(lvl.rectL[i].getGlobalBounds()))
		{
			x -= 4.0f;
		}
		if (as.s1.getGlobalBounds().intersects(lvl.rectT[i].getGlobalBounds()) || as.s1.getGlobalBounds().intersects(lvl.rectB[i].getGlobalBounds()))
		{
			y += 5.0f;
		}
	}
}

float Player::getX()
{
	return x;
}

float Player::getY()
{
	return y;
}
