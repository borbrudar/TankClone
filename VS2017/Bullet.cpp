#include "Bullet.h"
#include <cmath>

void Bullet::moveCtrl(Event event, float deg)
{
	bulDeg = deg;
	//Sets fired to true if Space bar is pressed
		if (!fired)
		{
			if (event.type == Event::KeyPressed)
			{
				switch (event.key.code)
				{
				case Keyboard::Key::Space:
					fired = true;
					bulDeg = deg;
					bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed;
					bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed;
					break;
				}
			}
			despawn_time.restart();
		}
}

void Bullet::Draw(RenderWindow & renderWindow,Assets &as,Level &lvl,float x,float y)
{
	//Draws based on the directon of the firing
		if (!fired)
		{
			as.bul.setPosition(Vector2f(x, y));
		}
		else if (fired)
		{
			isColliding(as, lvl);
			as.bul.move(Vector2f(bulX, bulY));
			renderWindow.draw(as.bul);
			if (despawn_time.getElapsedTime().asSeconds() >= 10.0f)
			{
				fired = false;
			}
		}
}

void Bullet::isColliding(Assets &as, Level &lvl)
{
	for (int i = 0; i < 12; i++)
	{
		if (as.bul.getGlobalBounds().intersects(lvl.rectR[i].getGlobalBounds()) || as.bul.getGlobalBounds().intersects(lvl.rectL[i].getGlobalBounds()))
		{
			bulX = -bulX;
		}
		if (as.bul.getGlobalBounds().intersects(lvl.rectT[i].getGlobalBounds()) || as.bul.getGlobalBounds().intersects(lvl.rectB[i].getGlobalBounds()))
		{
			bulY = -bulY;
		}
	}
}

