#pragma once
#include "Level.h"
#include "Assets.h"
#include "Bullet.h"

class Player
{
public:
	Player() = default;
	Player(float x, float y,int player)
		:
	x(x),
	y(y),
	player(player)
	{
		as.s1.setOrigin(as.s1.getGlobalBounds().width / 2, as.s1.getGlobalBounds().height / 2);
		as.s1.setScale(0.75f, 0.75f);
	}
	void inputCtrl(Event event,Level &lvl); //Handles player input
	void Draw(RenderWindow &renderWindow,Level &lvl,float x,float y); //Handles drawing
	void collision(Assets &as,Level &lvl);
	//Getters
	float getX();
	float getY();
	Assets as; //Single assests objects
private:
	//x,y coords,the direction it's pointing to,movement bools
	float x, y;
	float deg = 0.0f;
	float const speed = 3.0f;
	bool upF = false, downF = false, leftF = false, rightF = false;
	Bullet bul[5] = { {x,y,as,0},{ x,y,as,1 },{ x,y,as,2 },{ x,y,as,3 },{ x,y,as,4 } };
	Clock time;
	int player;
};