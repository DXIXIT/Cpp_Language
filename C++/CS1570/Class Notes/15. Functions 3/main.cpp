#include <iostream>
#include <math.h>

using namespace std;

//Is C++ programming language by Stroustrup an official documentation?
//How does calling by reference using pointers compare to calling by reference using static variables?

//A pass by value means that objects are copied into the function
//A pass by reference means that the original values will be modified.

void modifyValue(int num) //Pass by value
{
	num += 3;
}

void modifyValue2(int* pnum) //Pass by reference
{
	*pnum += 2;
}

void modifyValue3(int &pnum) //Pass by reference
{
	pnum += 2;
}

//Multiple parameters can be pass by reference or value.

int main()
{
	int int1 = 2;
	int int2 = 15;
	int int3 = 8;

	modifyValue(int1); //Doesn't modify
	modifyValue2(&int2); //Modifies
	modifyValue3(int3); //Modifies

	cout << int1 << endl;
	cout << int2 << endl;
	cout << int3 << endl;

  return 0;
}