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


void Player::Draw(RenderWindow &renderWindow,Level &lvl,float x,float y)
{
	as.s1.setPosition(Vector2f(x, y));
	bul.Draw(renderWindow, as,lvl, x, y);
	renderWindow.draw(as.s1);
}

void Player::collision(Assets & as, Level & lvl)
{

	if (as.s1.getGlobalBounds().intersects(lvl.rect[0].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[1].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[2].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[3].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[4].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[5].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[6].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[7].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[8].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[9].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[10].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
	}
	if (as.s1.getGlobalBounds().intersects(lvl.rect[11].getGlobalBounds()))
	{
		x -= 2;
		y -= 2;
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
