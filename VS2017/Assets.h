#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
class Assets
{
	//loads all the textures and sprites in one object
public:
	Assets() {
		loadTextures();
		loadSprites();
	}
private:
	Texture error;
	Texture t1;
	Texture bulT;
	Texture side1;
public:
	Sprite s1;
	Sprite s2;
	Sprite bul[5];
public:
	void loadTextures();
	void loadSprites();
};
