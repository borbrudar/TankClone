#pragma once
#include "Assets.h"

class Player
{
public:
	Player() = default;
	Player(float x,float y)
	:
	x(x),
	y(y)
	{
		as.s1.setOrigin(as.s1.getGlobalBounds().width / 2, as.s1.getGlobalBounds().height / 2);
	}
	void inputCtrl(Event event);
	void shootCtrl();
	void Draw(RenderWindow &renderWindow,float x,float y);
	//Getters
	float getX();
	float getY();
private:
	float x, y, deg = 0.0f;
	float const speed = 5.0f;
	bool upF = false, downF = false, leftF = false, rightF = false;
	Assets as;
};