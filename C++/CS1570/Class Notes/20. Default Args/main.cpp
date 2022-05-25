#include <iostream>

//Functions can have default arguments in C++

float average(const float num1, const float num2 = 3, const float num3); //Default arguments are only set in function prototypes.

//Pass by reference cannot have default arguments since the function will directly be working with the variable.

int main()
{  
	std::cout << "Hello World!\n";
}

float average(const float num1, const float num2, const float num3)
{
	return ((num1 + num2 + num3)/ 3);
}

//Function overloading: same function name with different parameters. Different function signatures.

int newFunc(...)
{
	
}