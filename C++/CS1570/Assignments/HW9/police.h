#ifndef POLICE_H
#define POLICE_H

#include "jewel.h"

template <class T>
class robber;

class police
{
private:
	int ID;
	int x_coord;
	int y_coord;
	int confiscatedWorth;
	int robbersCaught;

public:

	//Desc: constructor that initializes the position and the ID of the officer.
	//Pre: coords need to be in a valid range.
	//Post: the coordinates and the ID of the officer will be updated.
	police(int setID, int y_pos, int x_pos);

	//Desc: function that changes the status of the robber from "active" to "inactive"
	//Pre: none
	//Post: the robber will be inactive if caught by the police
	void arrest(robber<jewel> aRobber);

	//Desc: change the coords of the police officer
	//Pre: the new coords should be in a valid range
	//Post: the coords will be updated.
	void move();
};

#endif