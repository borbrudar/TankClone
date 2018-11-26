#pragma once
#include "Assets.h"

class Level
{
public:
	Level() {

		for (int i = 0; i < 12; i++)
		{
			rect[i].setFillColor(wallC);
			rectB[i].setFillColor(Color(50, 125, 33, 255));
			rectT[i].setFillColor(Color(50, 125, 33, 255));
			rectR[i].setFillColor(Color(50, 125, 33, 255));
			rectL[i].setFillColor(Color(50, 125, 33, 255));
		}
	}
Color wallC= Color(80, 80, 80, 255);

void Draw(RenderWindow &renderWindow);
void setRect(float x, float thickness, float off_x, float off_y, float hitT, bool rotation,int i);
RectangleShape rect[12];

RectangleShape rectL[12];
RectangleShape rectR[12];
RectangleShape rectT[12];
RectangleShape rectB[12];
};