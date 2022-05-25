//We will be creating multiple files today.

//Using multiple files is useful for extremely large projects.

//Only the main file should end with a .cpp. This only contains the main function. Everything else is given a .h as an extension.

//Running the command fg++ *.cpp "name of executable" in the linux terminal will change the name of the a.out to "name of executable"

#include "coolFunctions.h" //This header file is now included. Should be included first.
//No <iostream> needed because it was already defined in coolFunctions.h
//However, <iostream> will be needed if it is not defined in the header file, even if it is defined in coolfunctions.cpp file. The scope of header files is universal.


int main()
{
	cout << "Hello World!" << endl;
}