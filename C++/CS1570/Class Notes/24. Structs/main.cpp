//We will now be talking about structs. They allow use to create a new data type.
//Structs are useful for representing complex objects with several attributes.

//Structs are always defined in a header file. So let's move on to point.h

#include <iostream>
#include "point.h"

using namespace std;

int main(void)
{
	Point p1; //Declaing a new point object.
	p1.m_xCoord = 6; //The dot ".", btw, is a member access operator
	p1.m_yCoord = 8;


	Point p2 = {4, 8}; //This is an initialization array. It sets values for the p2 object on the spot;
	p2 = {9, 8};
	p2 = {2};

	return 0;
}