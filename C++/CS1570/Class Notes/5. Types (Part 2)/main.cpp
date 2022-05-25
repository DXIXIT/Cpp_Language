#include <iostream>
#include <string>

using namespace std;

int main()
{
	//There also exists a character data type.
	char x = 'a';
	char y = '\n';
	char z = '\123';

  cout << z << endl;


	string a; //Value will always print null instead of a random value.
	cout << a << endl;

	//cin will stop taking in string after the first value. getline() is used instead.


	//Another type that exists is boolean. Even though it uses only one bit, we still give it two bytes.

	bool True = true; //int value of 1.
	bool False = false; //int value of 0.

	//Anything that is not zero will be true.
	cout << False << endl;

	bool AnyVal = 77;
	cout << AnyVal << endl; //Will print 1.


	//Constants
	const float PI = 3.14159; //Will store an unchanging value
	/* PI++; Will throw an error. */
}