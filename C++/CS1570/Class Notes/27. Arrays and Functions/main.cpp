#include <iostream>

using namespace std;

//Arrays can be used for function parameters, but not for return type.
//Arrays are always passed by reference


//Syntax for functions with arrays:
int minElement(int array[], const int size) //size MUST be included in the function parameter
{
	int min = array[0];

	for (int i = 1; i < size; i++) //Note that this starts at first index
	{
		if (array[i] < min)
			min = array[i];
	}

	return min;
}

int main(void)
{
	return 0;
}