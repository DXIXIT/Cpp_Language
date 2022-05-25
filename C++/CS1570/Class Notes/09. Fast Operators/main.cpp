#include <iostream>

using namespace std;

/*
Fast operators are generally faster than assignment and addition.
- Post increment operator: x++
- Pre-increment operator: ++x
*/

//Difference between x++ and ++x
int main()
{
  int x = 2;
	cout << x++ << endl; /*Won't print x = 3, because cout won't update the value of x before printing. This is the reason why
						  ++x is used to print the updated value of x, if needed. */
}