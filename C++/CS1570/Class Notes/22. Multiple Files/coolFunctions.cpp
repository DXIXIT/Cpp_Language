//This file will contain the actual implementation of the stuff defined in coolFunctions.h

//We first need to tell the compiler where the function prototypes are, and so we use the #include statment.

#include "coolFunctions.h"
//Using "<filename>" is reserved for predefined libraries.

#include <string> //Not necessary because it has been defined in "coolFunctions.h", but we'll put it in anyway to show why we don't need this.

using namespace std;

void welcome(const string &message) //Does not include the default argument because it is not needed.
{
	cout << message << endl;
}