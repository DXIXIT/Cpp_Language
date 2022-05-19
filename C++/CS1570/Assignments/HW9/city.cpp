#include "city.h"

using namespace std;

char city::getBlock(int y_coord, int x_coord) const
{
	return MAP[y_coord][x_coord];
}

void city::setBlock(int y_coord, int x_coord, char entity)
{
	MAP[y_coord][x_coord] = entity;
}

void city::setJewelcount(int newVal)
{
	jewelCount = newVal;
}

bool city::isOccupied(int y_coord, int x_coord)
{
	if (MAP[y_coord][x_coord] == 'J')
		return true;
	else if (MAP[y_coord][x_coord] == 'p')
		return true;
	else if (MAP[y_coord][x_coord] == 'r')
		return true;
	else if (MAP[y_coord][x_coord] == 'R')
		return true;
	else
		return false;
}