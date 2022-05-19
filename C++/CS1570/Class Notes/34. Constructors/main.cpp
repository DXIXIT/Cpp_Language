#include "Fraction.h"

#include <iostream>

using namespace std;


int main(void)
{
	/* Fraction f(); //This is wrong. */
	Fraction a; // This is correct

	//Explicit constructor call example:
	Fraction f = Fraction(1, 2);
	f = Fraction(3, 4);

	//Copy constructor:
	Fraction g(1, 3);
	Fraction h(g); //This here uses the copy constructor. 'g' and 'h' will have the same attributes.


	return 0;
}