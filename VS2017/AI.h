#pragma once
#include "Assets.h"
#include "Level.h"
#include "Bullet.h"

class AI
{

public:
	AI(float x, float y)
		:
		x(x),
		y(y)
	{
		as.ai.setOrigin(as.ai.getGlobalBounds().width / 2, as.ai.getGlobalBounds().height / 2);
		as.ai.setScale(0.75f, 0.75f);
	}
void Update(Event event, Level &lvl,float pX,float pY,RenderWindow &renderWindow); //Updates AI
void Draw(RenderWindow &renderWindow); //Handles drawing
void collision(Assets &as, Level &lvl);
private:
	float x, y, deg = 0.0f;
	Bullet bul[5] = { {x,y,as,0},{ x,y,as,1},{ x,y,as,2},{ x,y,as,3},{ x,y,as,4}, };
	Clock time;
	Assets as;
};