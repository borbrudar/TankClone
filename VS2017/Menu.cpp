#include "Menu.h"
#include <iostream>

void Menu::Draw(RenderWindow & renderWindow)
{
	if(menuState == menuState::Main) renderWindow.draw(menu);
	if (menuState == menuState::Inst) renderWindow.draw(inst);
}

int Menu::Update(RenderWindow & renderWindow)
{
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		if (menuState == menuState::Main)
		{
			if (Mouse::getPosition(renderWindow).x > 175 && Mouse::getPosition(renderWindow).x < 463 &&
				Mouse::getPosition(renderWindow).y > 150 && Mouse::getPosition(renderWindow).y < 233)
			{
				return 1;
			}
			if (Mouse::getPosition(renderWindow).x > 175 && Mouse::getPosition(renderWindow).x < 463 &&
				Mouse::getPosition(renderWindow).y > 257 && Mouse::getPosition(renderWindow).y < 336)
			{
				menuState = menuState::Inst;
			}
			if (Mouse::getPosition(renderWindow).x > 175 && Mouse::getPosition(renderWindow).x < 463 &&
				Mouse::getPosition(renderWindow).y > 363 && Mouse::getPosition(renderWindow).y < 443)
			{
				renderWindow.close();
			}
		}
		
		//////////////////////////////////////////////////////7
		if (menuState == menuState::Inst)
		{
			if (Mouse::getPosition(renderWindow).x > 175 && Mouse::getPosition(renderWindow).x < 446 &&
				Mouse::getPosition(renderWindow).y > 232 && Mouse::getPosition(renderWindow).y < 295)
			{
				menuState = menuState::Main;
			}
		}
	}
	
	return 0;
}

void Menu::loadMenu()
{
	if (!m.loadFromFile("images/menu.png"))
		std::cout << "Error 42 - File inaccessible " << std::endl;
	if (!in.loadFromFile("images/inst.png"))
		std::cout << "Error 42 - File inaccessible " << std::endl;

	menu.setTexture(m);
	inst.setTexture(in);
}
