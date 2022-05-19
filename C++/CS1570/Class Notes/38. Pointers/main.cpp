#include <iostream>

using namespace std;

class State
{
	State(string name)
	{
		m_name = name;
	}

	public:
		//String getname() const {return m_name;}
		string getName() const //Equivalent to the function above
		{
			return (*this).m_name; //"this" is a reserved pointer variable. Must use parentheses
		}

	private:
		string m_name;
};

int main(void)
{
	
	//A pointer is a data type that stores the memory address of another variable.
	//The address of operator is the '&' symbol.

	int x = 10;

	cout << x << '\n'; //Prints out the variable value
	cout << &x << '\n'; //Prints out the memory address of the variable.

	int* p1 = NULL;
	p1 = nullptr;
	//The two statements above are equivalent. They store no address.

	p1 = &x; //The int* p1 will store the address of x.

	cout << p1 << '\n'; //We say p1 is "pointing" to 'int x'

	//double pointer:
	int** p2 = &p1;
	cout << p2 << '\n';

	/*
	The value of a variable can be modified without knowing its type simply using pointers. This is
	the main power behind them. Over here, we dereference the int pointer to modify value of x.
	*/
	*p1 = 5;

	cout << x << "\n\n";

	int intArr[] = {5, 2, 7};


	for (int i = 0; i < 3; ++i)
	{
		if ((*(intArr + i)) == (intArr[i]))
			cout << "EPIc!!!!!!\n";
	}

	//*(intArr + i) = intArr[i]

	return 0;
}