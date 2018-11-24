#include "Assets.h"

using namespace std;
void Assets::loadTextures()
{
	if (!t1.loadFromFile("images/tank.png"))
	cout << "Error 42- File not found " << endl;
	if (!bulT.loadFromFile("images/bullet.png"))
		cout << "Error 42- File not found " << endl;
}

void Assets::loadSprites()
{
	s1.setTexture(t1);
	bul.setTexture(bulT);
}


