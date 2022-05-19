#include "Neighbor.h"

void initializeNeighbor(Neighbor &neighborObj, int neighborID)
{
	neighborObj.mID = neighborID;

	float startAcres = (rand() % 32) + 19;
	neighborObj.mStartAcres = startAcres;
	neighborObj.mEndAcres = startAcres;
	
	neighborObj.mStartNumGarages = (static_cast<int>(startAcres) / 10) % 10;
	neighborObj.mEndNumGarages = neighborObj.mStartNumGarages;

	bool goodNeighbor = (rand() % 2);
	neighborObj.mIsGoodNeighbor = goodNeighbor;
	
	neighborObj.mIsActive = true;
	
	return;
}