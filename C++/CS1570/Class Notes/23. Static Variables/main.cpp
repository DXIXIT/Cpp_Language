//We will be talking about static variables today


#include <iostream>

using namespace std;

void newFunction()
{
	//"static" is a C++ keyword.
	static int x; //The value of x doesn't reset after the function call ends.
}

int counter()
{
	static int y = 0; //This is declaration and initialization.
	//only one instance of a static variable exists. The C++ compiler will ignore further initializations for this variable.
	//The static variable can be updated using merely just initializations, however.
	y++;
	return y;
}


int main(void)
{
	for (int i = 0; i < 10; ++i)
	{
		cout << counter() << endl;
	}
	
	return 0;
}