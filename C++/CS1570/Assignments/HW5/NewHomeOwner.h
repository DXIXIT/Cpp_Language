#ifndef NEWHOMEOWNER_H
#define NEWHOMEOWNER_H

#include "Neighbor.h"

using namespace std;

struct NewHomeOwner
{
	string mName;
	string mAddress;
	float mStartAcres;
	float mEndAcres;
	int mNumGarages;
};

/*Desc: Function is called when the new homeowner meets good neighbor
//Pre: Shown below
//Post:
- 80% chance that neighbor will donate garage if homeowner has less garages than them
- 30% chance that neighbor will donate garage if homeowner has equal or more garages than them
*/ 
void requestAssistance(NewHomeOwner &theNewHomeowner, Neighbor &aGoodNeighbor);

/*Desc: function is called when homeowner enounters a bad neighbor.
//Pre: Shown below
//Post:
- 53% chance that bad neighbor will some acres of land if owner garages are less than bad neighbor
	- The amount of land stolen will be the difference in number of garages owned
	- 46% chance that neighbor will create new garage after stealing land
- 0% chance if garage numbers are equal
- If an even random number is generated between 1 and 80
	- 73% chance half of the land stolen from the neighbor passed into the function will be reclaimed
	- 23% chance ALL of the land will be reclaimed
	- given this neighbor has stolen land yet
	- Goes inactive if ALL stolen land is reclaimed
*/
void defendHomeland(NewHomeOwner &theNewHomeOwner, Neighbor &aBadNeighbor);

#endif