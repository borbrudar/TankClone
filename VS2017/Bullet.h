#pragma once
#include "Assets.h"
#include "Game.h"

class Bullet 
{
public:
	Bullet(float x, float y)
		:
		x(x),
		y(y)
	{

	}
	void Draw(RenderWindow &renderWindow,Assets &as);
public:
	float x, y;
};