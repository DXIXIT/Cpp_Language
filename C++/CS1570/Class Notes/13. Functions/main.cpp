#include <iostream>

using namespace std;

//A function signature list contains a return type, a function name, and a certain list of arguments.

int NewFunction(int one, int two, int three)
{
	return 0;
}
//Two functions with identical signatures will raise an error by the compiler.

int NewFunction(int one, string two, float three) //This will not raise an error.
{
	return 0;
}


/* This function will raise an error because it is identical to
int NewFunction(int one, int two, int three). It has the same function signature.

int NewFunction(int a, int b, int c)
{
	return 0;
}
*/

//A function should be created to reduce redundancy, and increase reusability.
//Every function should have a purpose that is as concise as possible.


//This is a function prototype. This is where we can declare the function. Function prototypes must have the same signature as the function implementation.
int SumTwoNums(int, int);

int main()
{
	int num1;
	cout << "Enter the first number\n";
	cin >> num1;

	int num2;
	cout << "Enter the second number\n";
	cin >> num2;

	int sum = SumTwoNums(num1, num2);

	cout << "The sum is: " << sum << endl;

	return 0; //Program exit code. Lets the OS know that the C++ program has been executed successfully.
}

int SumTwoNums(int x1, int x2)
{
	return x1 + x2;
}