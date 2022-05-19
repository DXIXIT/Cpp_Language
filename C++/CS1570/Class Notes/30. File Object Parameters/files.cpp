#include "files.h"

//Description: This function writes the original data with an additional message appended at each line.
//Pre: fin must be in an error-free state and sucessfully connected to the input file.
//Post: The new data will be written to a new output file "output.dat"
void writeToFile(ifstream &fin)
{
	int data; //For reading data.
	const string APPENDMSG = "The data is: ";
	const string OUTPUTFILE = "output.dat";
	ofstream fout(OUTPUTFILE.c_str()); /* Equivalent to:	
										  ofstream fout;
										  fout.open("output.dat"); */

	//Write to the output file
	while (fin >> data)
	{
		fout << '\t' << APPENDMSG << data << '\n';
	}

	fout.close();

	return;
}