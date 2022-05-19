#include "jewel.h"

jewel::jewel(){}

jewel::jewel(int y, int x)
{
	x_coord = x;
	y_coord = y;
	value = x + y;
}