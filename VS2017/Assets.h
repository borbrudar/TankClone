#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
class Assets
{
public:
	Assets() {
		loadTextures();
		loadSprites();
	}
public:
	Texture error;
	Texture t1;
	Sprite s1;
	Sprite s2;
public:
	void loadTextures();
	void loadSprites();
};
