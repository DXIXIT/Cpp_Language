#include "files.h"

using namespace std;

//Here we will use functions to interact with files.

int main(void)
{
	const int MAXFILENAMELEN = 20;

	ifstream fin; //Input file object
	char inputFile[MAXFILENAMELEN]; //Name of the input file (given by the user)

	do
	{
		cout << "Enter input file name (no space): ";
		cin.getline(inputFile, 20);
		fin.clear();//Reset internal error state flags
		fin.open(inputFile); //Can use inputFile.c_str() if needed

	} while (!fin);

	//Write to output file (implementation in separate file)
	writeToFile(fin);
	
	fin.close(); //Close the file object

	cout << "Data successfully written.\n";



	/*
	Extra notes:

	Instead of writing the following code to extract data from a file:
		while (fin >> data)
		{
			fout << '\t' << APPENDMSG << data << '\n';
		}
	
	You can also write this:
		fin >> data;
		while (!in.eof())
		{
			cout << data;
			in>>data;
		}
	*/

	return 0;
}