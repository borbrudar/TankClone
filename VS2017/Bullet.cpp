#include "Bullet.h"
#include <cmath>

void Bullet::moveCtrl(Event event)
{
	if (event.type == Event::KeyPressed)
	{
		switch (event.key.code)
		{
			case Keyboard::Key::Space:
			fired = true;
			break;
		}
	}
}

void Bullet::Draw(RenderWindow & renderWindow,Assets &as ,float bulX, float bulY,float deg)
{
	if (!fired)
	{
		as.bul.setPosition(Vector2f(bulX, bulY));
	}
	else if (fired)
	{
		as.bul.move(Vector2f(bulX = std::cos(deg * (3.14159f / 180.0f)) * bulSpeed, bulY = std::sin(deg * (3.14159f / 160.0f)) * bulSpeed));
	}
	

	renderWindow.draw(as.bul);
	
}
