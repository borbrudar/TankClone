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
	Texture bul1;
	Sprite bul;
	Sprite s1;
public:
	void loadTextures();
	void loadSprites();
};
