#ifndef NEIGHBOR_H
#define NEIGHBOR_H

#include <iostream>
#include <iomanip>

struct Neighbor
{
	int mID;
	float mStartAcres;
	float mEndAcres;
	int mStartNumGarages;
	int mEndNumGarages;
	bool mIsGoodNeighbor;
	bool mIsActive;
};

/*Desc: Initialize the attributes of a neighbor with random values.
//Pre:
- Each neighbor must have a unique ID starting from zero.
- startAcres will be a random number from 19-50 (incl.)
- numGarages is equal to static_cast<int>(startAcres) / 10
- There is a 50/50 chance if a neighbor is good.
- Good neighbors are ALWAYS active
//Post: The neighbor object will be initialized.
*/
void initializeNeighbor(Neighbor &neighborObj, int neighborID);

#endif