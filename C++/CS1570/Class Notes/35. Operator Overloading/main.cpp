#include "Fraction.h"

using namespace std;

/* Some notes:
- By default, any member variables of a class will be private by default.
- The copy constructor can only be pass by reference if you are going to create your own.
  This is because the copy constructor itself is used to copy data from one class object
  to another. If any class method is pass by value. If you are going to create a copy
  constructor that is pass by value, the code will keep on looping back to the constructor
  you have created. Because of this, the constructor has to be pass by reference to not
  let this loop happen.

- Deep copying happens only when absolutely no pointers member vars are being passed into
  the copy constructor. It's a shallow copy otherwise.

The four things that are provided to you by the compiler include:
- The default constructor (does nothing)
- The default copy constructor
- The default assignment operator overload
- The default class destructor

Some rules about operator overloading:
1. You can't create new operators
2. You can't change their functionality for primitive types
3. You can overload the following operators:
  - "::" The scope resolution
  - "?:" The ternary
  - "." The member access (dot)
  - ".*" The 'size of'
4. You can't change the number of arguments an operator takes
	(Note that operators are just functions in math and comp sci)
5. You can't change operator precedence
6. You can't have default arguments for overloaded operators

Also, if you have a member function and an additional object that your main object is
going to interact with, you only need one argument since the member function is part
of you class. However, if you are using a friend function, you need two, one for your
main class object and one for the other object.
*/



int main(void)
{
	cout << "Hello World!\n";
	return 0;
}