#include "Bullet.h"
#include <cmath>

void Bullet::moveCtrl(Event event, float deg)
{
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
					break;
				}
			}
		}
	
}

void Bullet::Draw(RenderWindow & renderWindow,Assets &as,Level &lvl,float bulX, float bulY)
{
	//Draws based on the directon of the firing
		if (!fired)
		{
			as.bul.setPosition(Vector2f(bulX, bulY));
		}
		else if (fired)
		{
			if (!isColliding(as, lvl))
			{
				as.bul.move(Vector2f(bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
			}
			
			renderWindow.draw(as.bul);
		}
}

bool Bullet::isColliding(Assets &as, Level &lvl)
{
	if (as.bul.getGlobalBounds().intersects(lvl.rect[0].getGlobalBounds()))
		{
			as.bul.move(Vector2f(bulX = std::cos(bulDeg  * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg += 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
			return true;
		}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[1].getGlobalBounds()))
		{
			as.bul.move(Vector2f(bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg -= 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
			return true;
		}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[2].getGlobalBounds()))
		{
			as.bul.move(Vector2f(bulX = std::cos((bulDeg += 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
			return true;
		}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[3].getGlobalBounds()))
		{
			as.bul.move(Vector2f(bulX = std::cos((bulDeg -= 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
			return true;
		}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[4].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos(bulDeg  * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg += 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[5].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg -= 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[6].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos((bulDeg += 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[7].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos((bulDeg -= 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[8].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos(bulDeg  * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg += 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[9].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos(bulDeg * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin((bulDeg -= 90.0f) * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[10].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos((bulDeg += 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	if (as.bul.getGlobalBounds().intersects(lvl.rect[11].getGlobalBounds()))
	{
		as.bul.move(Vector2f(bulX = std::cos((bulDeg -= 90.0f) * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(bulDeg * (3.14159f / 160.0f)) * bulSpeed));
		return true;
	}
	return false;
};
