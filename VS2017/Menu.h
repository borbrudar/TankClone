#pragma once
#include "Assets.h"

class Menu
{
public:
	Menu () {
		loadMenu();
	}
	void Draw(RenderWindow &renderWindow);
	int Update(RenderWindow & renderWindow);
	void loadMenu();
private:
	Texture m;
	Texture in;
	Sprite menu;
	Sprite inst;
	enum class menuState
	{
		Main,
		Inst
	};
	menuState menuState = menuState::Main;
};