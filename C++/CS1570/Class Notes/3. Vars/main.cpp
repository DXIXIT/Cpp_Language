#include <iostream>

using namespace std;

//A variable is a modifiable memory address with a name.


/* Variable declaration rules:
- Be concise and representative
- Employ camelcase or underscore. Ex: VarName or var_name
- Comments shoud be made on variables.
- Variables must start with letters or an underscore.
*/


int main()
{
	int x;
	cout << x << endl;
	cout << &x << endl; //Print the memory address of x

	x = 12;
	cout << x << endl;
	cout << &x << endl;

	return 0;
}