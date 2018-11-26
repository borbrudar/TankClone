#include "Level.h"
void Level::Draw(RenderWindow & renderWindow)
{
	for (int i = 0; i < 12; i++)
	{
		renderWindow.draw(rect[i]);
		//renderWindow.draw(rectL[i]);
		//renderWindow.draw(rectR[i]);
		//renderWindow.draw(rectT[i]);
		//renderWindow.draw(rectB[i]);
	}
}

// x is for width, thiccnes is y/height,off_x and off_y are where they move
// hitT is thickness for hotboxes, rotation if it's rotated for 90 deg,i for which rect you mean
void Level::setRect(float x, float thickness,float off_x,float off_y,float hitT,bool rotation,int i) 
{    

	if (rotation)
	{
		rect[i].setSize(Vector2f(x, thickness));
		rect[i].setPosition(Vector2f(off_x, off_y));
		rect[i].rotate(90.0f);

		//Collison boxes
		rectL[i].setSize(Vector2f(x, hitT));
		rectL[i].setPosition(Vector2f(off_x - thickness, off_y));
		rectL[i].rotate(90.0f);

		rectR[i].setSize(Vector2f(x, hitT));
		rectR[i].setPosition(Vector2f(off_x , off_y));
		rectR[i].rotate(90.0f);

		rectT[i].setSize(Vector2f(thickness, hitT));
		rectT[i].setPosition(Vector2f(off_x , off_y));

		rectB[i].setSize(Vector2f(thickness, hitT));
		rectB[i].setPosition(Vector2f(off_x - thickness, off_y));
	}
	if (!rotation)
	{
		rect[i].setSize(Vector2f(x, thickness));
		rect[i].setPosition(Vector2f(off_x, off_y));

		//Collison boxes
		rectL[i].setSize(Vector2f(thickness, hitT));
		rectL[i].setPosition(Vector2f(off_x , off_y));
		rectL[i].rotate(90.0f);

		rectR[i].setSize(Vector2f(thickness, hitT));
		rectR[i].setPosition(Vector2f(off_x, off_y + thickness));
		rectR[i].rotate(90.0f);

		rectT[i].setSize(Vector2f(x, thickness));
		rectT[i].setPosition(Vector2f(off_x, off_y));

		rectB[i].setSize(Vector2f(x, thickness));
		rectB[i].setPosition(Vector2f(off_x , off_y + thickness));
	}

}
