#include "Bullet.h"
#include <cmath>

void Bullet::moveCtrl(Event event, float deg,Clock &time)
{
		bulDeg = deg;
		//Sets fired to true if Space bar is pressed
		if (!fired)
		{
			if (event.type == Event::KeyReleased)
			{
				switch (event.key.code)
				{
				case Keyboard::Key::Space:
					fired = true;
					bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed;
					bulY = std::sin(bulDeg * (3.14159f / 180.0f)) * bulSpeed;
					time.restart();
					despawn_time.restart();
					break;
				}
			}
			despawn_time.restart();
		}
}

void Bullet::aiCtrl(RenderWindow & renderWindow, Assets &as, Level &lvl, float x, float y, int i,float deg)
{
	deg = bulDeg;
	if (fired)
	{
		isColliding(as, lvl, i);
		as.bul[i].move(Vector2f(x,y));
		renderWindow.draw(as.bul[i]);
		if (despawn_time.getElapsedTime().asSeconds() >= 10.0f)
		{
			fired = false;
		}
	}
}

void Bullet::Draw(RenderWindow & renderWindow,Assets &as,Level &lvl,float x,float y,int i)
{
	//Draws based on the directon of the firing
		if (!fired)
		{
			as.bul[i].setPosition(Vector2f(x, y));
		}
		else if (fired)
		{
			isColliding(as, lvl,i);
			as.bul[i].move(Vector2f(bulX, bulY));
			renderWindow.draw(as.bul[i]);
			if (despawn_time.getElapsedTime().asSeconds() >= 10.0f)
			{
				fired = false;
			}
		}
}

void Bullet::isColliding(Assets &as, Level &lvl,int y)
{
	for (int i = 0; i < 12; i++)
	{
		if (as.bul[y].getGlobalBounds().intersects(lvl.rectR[i].getGlobalBounds()) || as.bul[y].getGlobalBounds().intersects(lvl.rectL[i].getGlobalBounds()))
		{
			bulX = -bulX;
		}
		if (as.bul[y].getGlobalBounds().intersects(lvl.rectT[i].getGlobalBounds()) || as.bul[y].getGlobalBounds().intersects(lvl.rectB[i].getGlobalBounds()))
		{
			bulY = -bulY;
		}
	}
}

