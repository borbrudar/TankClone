#include "AI.h"
#include <cmath>

void AI::Update(Event event, Level & lvl,float pX,float pY,RenderWindow &renderWindow)
{
	x = as.ai.getPosition().x;
	y = as.ai.getPosition().y;
	//---------------------------------------------------
	for (int i = 0; i < 5; i++)
	{
		
			float r = x - pX;
			float off_y = y - pY;
			float l = pY - y;

			deg = (l / 2) / r;
			std::tan(deg * (180.0f / 3.14159f));
			as.ai.setRotation(deg);

			if (!bul[i].fired)
			{
			if (x > pX && y < pY) bul[i].aiCtrl(renderWindow, as, lvl, r, off_y, i, deg);
			if (x < pX && y < pY) bul[i].aiCtrl(renderWindow, as, lvl, r, off_y, i, 90.0f + (90.0f - deg));
			if (x < pX && y > pY) bul[i].aiCtrl(renderWindow, as, lvl, r, off_y, i, 180.0f + deg);
			if (x > pX && y > pY) bul[i].aiCtrl(renderWindow, as, lvl, r, off_y, i, 270.0f + (90.0f - deg));
		}
			bul[i].fired = true;
	}
	//---------------------------------------------------
	for (int i = 0; i < 5; i++)
	{
		if (time.getElapsedTime().asMilliseconds() >= 50.0f)
		{
			bul[i].moveCtrl(event, deg, time);
		}
	}
	collision(as, lvl);
}

void AI::Draw(RenderWindow & renderWindow)
{
	as.ai.setPosition(Vector2f(x, y));
	renderWindow.draw(as.ai);
}

void AI::collision(Assets & as, Level & lvl)
{
	for (int i = 0; i < 12; i++)
	{
		if (as.ai.getGlobalBounds().intersects(lvl.rectL[i].getGlobalBounds()))
		{
			x -= 4.0f;
		}
		if (as.ai.getGlobalBounds().intersects(lvl.rectR[i].getGlobalBounds()))
		{
			x += 4.0f;
		}
		if (as.ai.getGlobalBounds().intersects(lvl.rectT[i].getGlobalBounds()))
		{
			y -= 5.0f;
		}
		if (as.ai.getGlobalBounds().intersects(lvl.rectB[i].getGlobalBounds()))
		{
			y += 5.0f;
		}
	}
}
