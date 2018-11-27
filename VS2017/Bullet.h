#pragma once
#include "Assets.h"
#include "Level.h"

class Bullet
{
public:
	Bullet() = default;
	Bullet(float x, float y, Assets &as,int i)
		:
		bulX(x),
		bulY(y)
	{
		as.bul[i].setOrigin(as.bul[i].getGlobalBounds().width / 2, as.bul[i].getGlobalBounds().height / 2);
		as.bul[i].setScale(0.3f, 0.3f);
	}
	void moveCtrl(Event event,float deg,Clock &cl,int player); //Handles movement
	void Draw(RenderWindow &renderWindow, Assets &as,Level &lvl, float x,float y,int i); //Handles drawing
	void isColliding(Assets &as,Level &lvl,int y);
	bool fired = false;   
private:
	float bulSpeed = 5.0f; //Speed of the bullet
	float bulX, bulY, bulDeg; //x and y coord of the bullet,direction
	Clock despawn_time;
};