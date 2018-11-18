#pragma once
#include "Assets.h"

class Bullet 
{
public:
	Bullet() = default;
	Bullet(float x, float y,Assets &as)
		:
		bulX(x),
		bulY(y)
	{
		as.bul.setOrigin(as.bul.getGlobalBounds().width / 2, as.bul.getGlobalBounds().height / 2);
		as.bul.setScale(0.5f,0.5f);
	}
	void moveCtrl(Event event);
	void Draw(RenderWindow &renderWindow, Assets &as, float bulX,float bulY,float deg);
	bool fired = false;
private:
	float bulSpeed = 2.0f;
	float bulX, bulY;
};