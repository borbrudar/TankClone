#pragma once
#include <vector>
#include "Assets.h"
#include "Bullet.h"

class Player
{
public:
	Player() = default;
	Player(float x, float y)
		:
	x(x),
	y(y)
	{
		as.s1.setOrigin(as.s1.getGlobalBounds().width / 2, as.s1.getGlobalBounds().height / 2);
	}
	void inputCtrl(Event event);
	void Draw(RenderWindow &renderWindow,float x,float y);
	//Getters
	float getX();
	float getY();
	Assets as;
private:
	float x, y;
	float deg = 0.0f;
	float const speed = 5.0f;
	bool upF = false, downF = false, leftF = false, rightF = false;
	Bullet bul{x,y,as};
};