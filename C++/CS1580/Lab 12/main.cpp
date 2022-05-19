// Programmer: Kshitij Sharma
// MST Username: kssgy4
// Instructor Name: Mukund Telukunta
// Section: 307
// Date: 4/20/22
// File: 'Lab 12'.cpp
// Purpose: Work with operator overloading

#include "Rectangle.h"

using namespace std;

int main(void)
{
	Rectangle a(50, 40);
	Rectangle b(10, 5);
	Rectangle c;
	Rectangle d;

	cout << "Initially, the values of a and b are:\n";
	cout << "Length = " << a.getLength() << ", Width = " << a.getWidth() << '\n';
	cout << "Length  = " << b.getLength() << ", Width = " << b.getWidth() << "\n\n";

	a += b;
	cout << "After performing a+=b, a is:\n";
	cout << "Length = " << a.getLength() << ", Width = " << a.getWidth() << "\n\n";
	
	c = a + b;
	cout << "After performing c=a+b, c is\n";
	cout << "Length = " << c.getLength() << ", Width = " << c.getWidth() << "\n\n";

	a-=5;
	cout << "After performing a-=5, a is:\n";
	cout << "Length = " << a.getLength() << ", Width = " << a.getWidth() << "\n\n";

	d = a - 10;
	cout << "After performing d=a-10, d is:\n";
	cout << "Length = " << d.getLength() << ", Width = " << d.getWidth() << "\n\n"; 

	return 0;
}