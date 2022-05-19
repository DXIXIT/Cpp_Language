#include <iostream>
#include <fstream> //Library for file IO. Means "file stream"

using namespace std;

int main(void)
{
	// "<<" is the insertion operator. Pushes thing on the right into the thing on the left.
	// ">>" is the extraction operator. Pulls stuff from thing on the right and puts into thing on the left.

	ifstream readThisFile;
	/*
	This variable is of the ifstream class. "ifstream" is short for input file stream. This means that the file object
	"readThisFile" will be used as an input. It can't be modified. This means that the "<<" insertion operator
	overloading does not exist for this ifstream object.
	*/

	ofstream writeThisFile;
	/*
	This variable is of the ofstream class. Of course "ofstream" is short for output file stream. This file cannot be read,
	meaning that the ">>" extraction operator overloading does not exist for this object. We will use this variable in the
	next example code file. For now, the focus is just to extract data from input file.
	*/



	/*
	There are two main ways of getting data from a file:
	- Using an EOF marker
	- Utilizing the state of the file stream objects
	*/

	const string INPUTFILE = "input.dat";
	int data;


	//Here is an example code using EOF marker:
	readThisFile.open(INPUTFILE.c_str()); //open is a member function of the ifstream class.
	//Alternatively the constructor readThisFile(INPUTFILE.c_str()) also can be used.

	/* A few things to note here:
	- (Obviously) the file name needs to exist
	- The open() function can only take a C-string as a file name. This means you can alternatively
	  use char INPUTFILE[] = "input.dat";
	*/
	do
	{
		readThisFile >> data;
		cout << data << '\n';
	} while (data != -1); //Read data from file, and output it while data != 1;

	readThisFile.close(); //Always close the file stream object.



	//Here is an example using the state of the file object:
	readThisFile.open(INPUTFILE.c_str());

	while (readThisFile >> data) //Will evaluate to false if there is no data
	{
		cout << '\t' << data << '\n';
	}

	readThisFile.close();


	// The following code will test the user input to check if the file exists.	
	string userFile = ""; //Can also be a C-string
	do
	{
		cout << "Enter the file name (no spaces): ";
		cin >> userFile; //If using a C-string, you must either or getline() (need to specify char arr length) or use scanf(). 
		
		readThisFile.clear(); /* This is to ensure if the internal connection fail bit has been reset for this variable.
								if it is not reset, the code will always throw an error despite having the right file name
								because the internal variable was not reset. */
		
		readThisFile.open(userFile.c_str());

	} while (!readThisFile); //Continue to prompt file name if file name is bad or connection fails.

	while (readThisFile >> data)
	{
		cout << '\t' << data << endl;
	}

	readThisFile.close();
	
	return 0;
}