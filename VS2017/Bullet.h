#pragma once
#include "Assets.h"
#include "Level.h"

class Bullet
{
public:
	Bullet() = default;
	Bullet(float x, float y, Assets &as)
		:
		bulX(x),
		bulY(y)
	{
		as.bul.setOrigin(as.bul.getGlobalBounds().width / 2, as.bul.getGlobalBounds().height / 2);
		as.bul.setScale(0.3f, 0.3f);
	}
	void moveCtrl(Event event,float deg); //Handles movement
	void Draw(RenderWindow &renderWindow, Assets &as,Level &lvl, float x,float y); //Handles drawing
	void isColliding(Assets &as,Level &lvl);
	bool fired = false;   
private:
	float bulSpeed = 5.0f; //Speed of the bullet
	float bulX, bulY, bulDeg; //x and y coord of the bullet,direction
	Clock despawn_time;
};