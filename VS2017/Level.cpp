#include "Level.h"
void Level::Draw(RenderWindow & renderWindow)
{
	for (int i = 0; i < 12; i++)
	{
		renderWindow.draw(rect[i]);
		//renderWindow.draw(rectL[i]);
		//renderWindow.draw(rectR[i]);
		//renderWindow.draw(rectT[i]);
		//renderWindow.draw(rectB[i]);
	}
}

void Level::setRect()
{
	//sets all the rectangles
	{
		//Rect0
		{
			rect[0].setSize(Vector2f(640.0f, 10.0f));
			rect[0].setOrigin(Vector2f(0.0f, 0.0f));

			//Collison
			rectL[0].setSize(Vector2f(1.0f, 10.0f));
			rectL[0].move(Vector2f(0.0f, 0.0f));
			rectL[0].rotate(90.0f);

			rectR[0].setSize(Vector2f(1.0f, 10.0f));
			rectR[0].move(Vector2f(479.0f, 0.0f));
			rectR[0].rotate(90.0f);

			rectT[0].setSize(Vector2f(640.0f, 1.0f));
			rectT[0].move(Vector2f(0.0f, 0.0f));

			rectB[0].setSize(Vector2f(640.0f, 1.0f));
			rectB[0].move(Vector2f(0.0f, 10.0f));
		}
		//Rect1
		{
			rect[1].setSize(Vector2f(640.0f, 10.0f));
			rect[1].move(Vector2f(0.0f, 470.0f));

			//Collison
			rectL[1].setSize(Vector2f(1.0f, 10.0f));
			rectL[1].move(Vector2f(0.0f, 0.0f));

			rectR[1].setSize(Vector2f(1.0f, 10.0f));
			rectR[1].move(Vector2f(0.0f, 0.0f));

			rectT[1].setSize(Vector2f(640.0f, 1.0f));
			rectT[1].move(Vector2f(0.0f, 470.0f));

			rectB[1].setSize(Vector2f(640.0f, 1.0f));
			rectB[1].move(Vector2f(0.0f, 480.0f));
		}
		//Rect2
		{
			rect[2].setSize(Vector2f(480.0f, 10.0f));
			rect[2].move(Vector2f(10.0f, 0.0f));
			rect[2].setRotation(90.0f);

			//Collison
			rectL[2].setSize(Vector2f(1.0f, 480.0f));
			rectL[2].move(Vector2f(0.0f, 0.0f));

			rectR[2].setSize(Vector2f(1.0f, 480.0f));
			rectR[2].move(Vector2f(10.0f, 0.0f));

			rectT[2].setSize(Vector2f(10.0f, 1.0f));
			rectT[2].move(Vector2f(0.0f, 0.0f));

			rectB[2].setSize(Vector2f(10.0f, 1.0f));
			rectB[2].move(Vector2f(0.0f, 479.0f));
		}
		//Rect3
		{
			rect[3].setSize(Vector2f(480.0f, 10.0f));
			rect[3].move(Vector2f(640.0f, 0.0f));
			rect[3].setRotation(90.0f);


			//Collison
			rectL[3].setSize(Vector2f(480.0f, 1.0f));
			rectL[3].move(Vector2f(630.0f, 0.0f));
			rectL[3].rotate(90.0f);

			rectR[3].setSize(Vector2f(480.0f, 1.0f));
			rectR[3].move(Vector2f(640.0f, 10.0f));
			rectR[3].rotate(90.0f);

			rectT[3].setSize(Vector2f(10.0f, 1.0f));
			rectT[3].move(Vector2f(470.0f, 0.0f));

			rectB[3].setSize(Vector2f(10.0f, 1.0f));
			rectB[3].move(Vector2f(470.0f, 479.0f));
		}
		//Rect4
		{
			rect[4].setSize(Vector2f(100.0f, 10.0f));
			rect[4].move(Vector2f(100.0f, 0.0f));
			rect[4].setRotation(90.0f);

			//Collison
			rectL[4].setSize(Vector2f(100.0f, 1.0f));
			rectL[4].move(Vector2f(90.0f, 0.0f));
			rectL[4].rotate(90.0f);

			rectR[4].setSize(Vector2f(100.0f, 1.0f));
			rectR[4].move(Vector2f(100.0f, 0.0f));
			rectR[4].rotate(90.0f);

			rectT[4].setSize(Vector2f(10.0f, 1.0f));
			rectT[4].move(Vector2f(100.0f, 0.0f));

			rectB[4].setSize(Vector2f(10.0f, 1.0f));
			rectB[4].move(Vector2f(90.0f, 100.0f));
		}
		//Rect5
		{
			rect[5].setSize(Vector2f(150.0f, 10.0f));
			rect[5].move(Vector2f(0.0f, 240.0f));

			//Collison
			rectL[5].setSize(Vector2f(10.0f, 1.0f));
			rectL[5].move(Vector2f(0.0f, 240.0f));
			rectL[5].rotate(90.0f);

			rectR[5].setSize(Vector2f(10.0f, 1.0f));
			rectR[5].move(Vector2f(0.0f, 250.0f));
			rectR[5].rotate(90.0f);

			rectT[5].setSize(Vector2f(150.0f, 1.0f));
			rectT[5].move(Vector2f(0.0f, 240.0f));

			rectB[5].setSize(Vector2f(150.0f, 1.0f));
			rectB[5].move(Vector2f(0.0f, 250.0f));
		}
		//Rect6
		{
		rect[6].setSize(Vector2f(125.0f, 10.0f));
		rect[6].move(Vector2f(175.0f, 355.0f));
		rect[6].setRotation(90.0f);

		//Collison
		rectL[6].setSize(Vector2f(125.0f, 1.0f));
		rectL[6].move(Vector2f(165.0f, 355.0f));
		rectL[6].rotate(90.0f);
			  
		rectR[6].setSize(Vector2f(125.0f, 1.0f));
		rectR[6].move(Vector2f(175.0f, 355.0f));
		rectR[6].rotate(90.0f);
			 
		rectT[6].setSize(Vector2f(10.0f, 1.0f));
		rectT[6].move(Vector2f(175.0f, 355.0f));
			  
		rectB[6].setSize(Vector2f(10.0f, 1.0f));
		rectB[6].move(Vector2f(175.0f, 355.0f));
		}
		//Rect7
		{
			rect[7].setSize(Vector2f(125.0f, 10.0f));
			rect[7].move(Vector2f(175.0f, 355.0f));

			//Collison
			rectL[7].setSize(Vector2f(1.0f, 10.0f));
			rectL[7].move(Vector2f(175.0f, 355.0f));
			rectL[7].rotate(90.0f);
				  
			rectR[7].setSize(Vector2f(1.0f, 10.0f));
			rectR[7].move(Vector2f(300.0f, 355.0f));
			rectR[7].rotate(90.0f);
				  
			rectT[7].setSize(Vector2f(125.0f, 1.0f));
			rectT[7].move(Vector2f(175.0f, 355.0f));
				  
			rectB[7].setSize(Vector2f(125.0f, 1.0f));
			rectB[7].move(Vector2f(175.0f, 365.0f));
		}
		//Rect8
		{
			rect[8].setSize(Vector2f(125.0f, 10.0f));
			rect[8].move(Vector2f(300.0f, 230.0f));
			rect[8].setRotation(90.0f);

			//Collison
			rectL[8].setSize(Vector2f(125.0f, 1.0f));
			rectL[8].move(Vector2f(290.0f, 230.0f));
			rectL[8].rotate(90.0f);
				  
			rectR[8].setSize(Vector2f(125.0f, 1.0f));
			rectR[8].move(Vector2f(300.0f, 230.0f));
			rectR[8].rotate(90.0f);
				  
			rectT[8].setSize(Vector2f(1.0f, 10.0f));
			rectT[8].move(Vector2f(300.0f, 230.0f));
				  
			rectB[8].setSize(Vector2f(1.0f, 10.0f));
			rectB[8].move(Vector2f(300.0f, 255.0f));
		}
		//Rect9
		{
			rect[9].setSize(Vector2f(150.0f, 10.0f));
			rect[9].move(Vector2f(450.0f, 330.0f));
			rect[9].setRotation(90.0f);

			//Collison
			rectL[9].setSize(Vector2f(150.0f, 1.0f));
			rectL[9].move(Vector2f(440.0f, 330.0f));
			rectL[9].rotate(90.0f);
				  
			rectR[9].setSize(Vector2f(150.0f, 1.0f));
			rectR[9].move(Vector2f(450.0f, 330.0f));
			rectR[9].rotate(90.0f);
				  
			rectT[9].setSize(Vector2f(10.0f, 1.0f));
			rectT[9].move(Vector2f(440.0f, 330.0f));
				  
			rectB[9].setSize(Vector2f(10.0f, 1.0f));
			rectB[9].move(Vector2f(440.0f, 470.0f));
		}
		//Rect10
		{
			rect[10].setSize(Vector2f(150.0f, 10.0f));
			rect[10].move(Vector2f(400.0f, 0.0f));
			rect[10].setRotation(90.0f);

			//Collison
			rectL[10].setSize(Vector2f(150.0f, 1.0f));
			rectL[10].move(Vector2f(390.0f, 0.0f));
			rectL[10].rotate(90.0f);
				  
			rectR[10].setSize(Vector2f(150.0f, 1.0f));
			rectR[10].move(Vector2f(400.0f, 0.0f));
			rectR[10].rotate(90.0f);
				  
			rectT[10].setSize(Vector2f(10.0f, 1.0f));
			rectT[10].move(Vector2f(390.0f, 0.0f));
				  
			rectB[10].setSize(Vector2f(10.0f, 1.0f));
			rectB[10].move(Vector2f(390.0f, 150.0f));
		}
		//Rect11
		{
			rect[11].setSize(Vector2f(125.0f, 10.0f));
			rect[11].move(Vector2f(400.0f, 140.0f));

			//Collison
			rectL[11].setSize(Vector2f(10.0f, 1.0f));
			rectL[11].move(Vector2f(400.0f, 140.0f));
			rectL[11].rotate(90.0f);
				   
			rectR[11].setSize(Vector2f(10.0f, 1.0f));
			rectR[11].move(Vector2f(525.0f, 140.0f));
			rectR[11].rotate(90.0f);
				   
			rectT[11].setSize(Vector2f(125.0f, 1.0f));
			rectT[11].move(Vector2f(400.0f, 140.0f));
				   
			rectB[11].setSize(Vector2f(125.0f, 1.0f));
			rectB[11].move(Vector2f(400.0f, 150.0f));
		}

	for (int i = 0; i < 12; i++)
	{
		rect[i].setFillColor(wallC);
		rectB[i].setFillColor(Color(50, 125, 33, 255));
		rectT[i].setFillColor(Color(50, 125, 33, 255));
		rectR[i].setFillColor(Color(50, 125, 33, 255));
		rectL[i].setFillColor(Color(50, 125, 33, 255));
	}
}


}
