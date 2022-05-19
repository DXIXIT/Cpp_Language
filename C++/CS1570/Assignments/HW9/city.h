#ifndef CITY_H
#define CITY_H

#include <iostream>

const int MAX_DIMENSIONS = 10;

class city
{
	public:
		//Desc: get the value at a certain coordinate
		//Pre: the values need to be within a valid range to prevent segfaults
		//Post: whatever is stored inside the array will be returned
		char getBlock(int y_coord, int x_coord) const;

		//Desc: modify the value in the city map
		//Pre: the values need to be within a certain range.
		//Post: the value of the coordinate will be modified.
		void setBlock(int y_coord, int x_coord, char entity);

		//Desc: get the current jewel count in the city
		//Pre: none
		//Post: the value of the number of jewels will be returned
		int getJewelCount() const;

		//Desc: modify the jewel count value
		//Pre: value needs to be less than 47
		//Post: the jewel count will be modified
		void setJewelcount(int newVal);

		//Desc: Used for finding if the current coord is occupied.
		//Pre: coords need to be within a valid range
		//Post: if occupied, true will be returned, otherwise false.
		bool isOccupied(int y_coord, int x_coord);

	private:
		char MAP[MAX_DIMENSIONS][MAX_DIMENSIONS];
		int jewelCount;
};

#endif