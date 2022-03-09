#include <iostream>

using namespace std;

int main(void)
{
	//An array is a linear data structure, compared to a nonlinear one like a binary tree.

	int numarr1[50]; //Declaration of an array. Can only store 50 values.

	int numarr2[] = {2, 3, 5, 7, 11, 13, 17, 19}; //Initialization of array. Can only store 8 values.

	int numarr3[5] = {1, 2, 3};

	//Dynamic arrays are not legal. The length of an array *must* be known at compile time.

	cout << numarr1[4] << endl; //Will print a random value

	//Strings are a type of an array.

	string s1 = "This a string";

	cout << s1[2] << endl;

	numarr1[51] = 45;

	cout << numarr1[51] << endl;

	return 0;
}