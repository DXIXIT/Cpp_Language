#include <iostream>
//Non-standard libraries have quotations in their name.

using namespace std;

int main() 
//Only one main function can exist.
//All of the custom functions are executed here.
{
	float celc, fahr;
	//Vars with same data type can be condensed into one line.
	//Variables being defined would have whatever value that was previously held in the memory.



	cout << "\t\tWelcome to the temperature conversion program\n" << endl;
	cout << "Please enter a temperature in fahrenheit: ";
	//The '<<' is a stream insertion operator. It puts data into an output stream buffer. On the other hand '>>' is a stream extraction operator.

	//The endl command flushes the data buffer, and starts a newline.

	cin >> fahr; //If this was an int, float values would be truncated. Strings would always equal zero.
	//cin stops taking any inputs after the first space

	
	cout << fahr << endl;

	return 0;
}