#include <cstdlib>

template <class T>
int robber<T>::totalWorth = 0;

template <class T>
robber<T>::robber(){}

template <class T>
void robber<T>::setActive(bool active)
{
	isActive = active;
}

template <class T>
robber<T>::robber(int newID, int y_pos, int x_pos, bool active, bool greedy)
{
	ID = newID;
	y_coord = y_pos;
	x_coord = x_pos;
	isActive = active;
	isGreedy = greedy;
}

template <class T>
void robber<T>::pickUpLoot(int index, T item)
{
	bag[index] = item;
}

template <class T>
void robber<T>::move()
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