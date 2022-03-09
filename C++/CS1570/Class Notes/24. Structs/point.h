#ifndef STRUCT_H
#define STRUCT_H

//Over here, we will be creating a struct for a point on the x-y plane.
struct Point
{
	//We wil be declaring any data types defined in this struct... 
	float m_xCoord;
	float m_yCoord;
};

//...and any function prototypes.
void printPoint(const Point);

//Let's move to the main() function in main.cpp to work with this struct.

#endif