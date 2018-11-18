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
private:
	Texture error;
	Texture t1;
	Texture bulT;
public:
	Sprite s1;
	Sprite s2;
	Sprite bul;
public:
	void loadTextures();
	void loadSprites();
};
