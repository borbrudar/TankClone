#include "Assets.h"

using namespace std;
void Assets::loadTextures()
{
	if (!t1.loadFromFile("images/tank.png"))
	cout << "Error 42- File not found " << endl;
	if (!bulT.loadFromFile("images/bullet.png"))
		cout << "Error 42- File not found " << endl;
	if (!a.loadFromFile("images/ai.png"))
		cout << "Error 42- File not found " << endl;
}

void Assets::loadSprites()
{
	s1.setTexture(t1);
	ai.setTexture(a);
	for (int i = 0; i < 5; i++)
	{
		bul[i].setTexture(bulT);
	}

}


