#pragma once
#include "Assets.h"

class Level
{
public:
	Level() {
		setRect();
	}
Color wallC= Color(80, 80, 80, 255);
void Draw(RenderWindow &renderWindow);
void setRect();
RectangleShape rect[12];
};