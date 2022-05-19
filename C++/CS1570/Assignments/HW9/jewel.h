#ifndef JEWEL_H
#define JEWEL_H

class jewel
{
	public:
		//Desc: is a default constructor. Does nothing
		//Pre: none
		//Post: none
		jewel();

		//Desc: set the coordinates for a certain jewel
		//Pre: coords need to be within a valid range
		//Post: the coords of the jewel object will be updated.
		jewel(int y, int x);

	private:
		int x_coord;
		int y_coord;
		int value;
};

#endif