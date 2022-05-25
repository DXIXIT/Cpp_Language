#include <iostream>

using namespace std;


/* Here is a list of operators:

'=' is the assignment operator

	* Will give a warning when converting from float to int.
	* intVar = static_cast<int>(floatVar) will suppress the warning.


'+' is the addition operator
	
	* int addition with float will be promoted to a float


'-' is subtraction

'*' is multiplication

'/' is division

'%' is modulus. It only works with int data type.

*/

int main()
{
  std::cout << "Hello World!\n";

	float a = 10;
	float b = 5;

	int c = b/a;

	cout << c << endl;

}