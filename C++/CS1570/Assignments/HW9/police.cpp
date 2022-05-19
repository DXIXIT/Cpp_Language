#include "police.h"
#include "city.h"
#include "robber.h"

police::police(int setID, int y_pos, int x_pos)
{
	ID = setID;
	y_coord = y_pos;
	x_coord = x_pos;
}

void police::arrest(robber<jewel> aRobber)
{
	aRobber.setActive(false);
}

void police::move()
{
	int sample = rand() % 8;

	switch (sample)
	{
		int x_increment;
		int y_increment;
		
		case 0:
			x_increment = -1;
			y_increment = -1;
		break;

		case 1:
			y_increment = -1;
		break;

		case 2:
			x_increment = 1;
			y_increment = -1;
		break;
		
		case 3:
			x_increment = -1;
		break;
		
		case 4:
			x_increment = 1;
		break;
		
		case 5:
			x_increment = -1;
			y_increment = 1;
		break;

		case 6:
			y_increment = 1;
		break;

		case 7:
			x_increment = 1;
			y_increment = 1;
		break;

		if (0 <= (x_coord + x_increment) && (x_coord + x_increment) <= 9)
		{
			x_coord += x_increment;
		}

		if (0 <= (y_coord + y_increment) && (y_coord + y_increment) <= 9)
		{
			y_coord += y_increment;
		}
	}
	return;
}