#include "point.h"

#include <iostream>

using namespace std;

void printPoint(const Point p1)
{
	cout << "x: " << p1.m_xCoord << endl;
	cout << "y: " << p1.m_yCoord << endl;
	//cout << p1 << endl; won't work since we haven't defined operator overloading for this struct.

	return;
}