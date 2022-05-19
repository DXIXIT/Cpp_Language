#include <iostream>

using namespace std;

/*
We will learn how to read string data in the following three ways from a user input:
- char by char (read each character individually)
- word by word (read each word without spaces)
- line by line (read the entire line including whitespaces)

*/

int main(void)
{
	//Example of reading word by word
	string userIn = "";
	cin >> userIn;
	cout << userIn << '\n';
	//Using cin as an input stream data type (istream)
	//cin implements a word by word reading "mode"
	//Space is a delimiting character. In other words, stops reading after '\n'
	
	
	//Reading line by line
	/*
	Syntax:
		getline(iStream_object, string_object, delimiting_character)
	*/

	userIn = "";
	getline(cin, userIn, '\n'); /*Delimiting character is '\n'.
								Will stop reading as soon as it is read.*/
	//getline(fin, userIn, '\n') can also work; fin is an ifstream object.	

	/*
	Rules for the getline() function:
	- Basically it will take any trailing whitespaces as input.
	- So you should clear the input buffer before calling it.
	*/

	int a = 0;
	cin >> a;

	char b = '\0';
	cin >> b;

	cout << "The number is: " << a << '\n';
	cout << "The character is: " << b << '\n';

	string statement = "";
	getline(cin, statement, '\n');
	cout << "The string is: " << statement << '\n';
	/*
	If you have spaces left in the queue of the input buffer, getline will not ignore them.
	Because of this, getline() acts a lot like scanf() when it treat spaces in the input buffer.
	Input stream must be cleared to make it usable.
	*/

	//Input stream is cleared using this function:
	cin.ignore(100, '\n'); //Clear input stream.
	/* A few notes:
	- This function is used before using getline.	
	- I hate you
	- This function will ignore up to 100 characters or up to newline, whichever comes first.
	*/
	

	return 0;
}