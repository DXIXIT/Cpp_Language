#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
	ifstream inputfile("newtext.txt", ifstream::binary);

	if (inputfile)
	{
		inputfile.seekg(0, inputfile.end);
		int bytesToWrite = inputfile.tellg();
		inputfile.seekg(0, inputfile.beg);

		int splitSize = 200;

		char *buffer;

		int filecount = 1;

		while (!inputfile.eof() && bytesToWrite > 0)
		{
			if (bytesToWrite < splitSize)
				splitSize = bytesToWrite;

			buffer = new char[splitSize];
			inputfile.read(buffer, splitSize);
			string fibytesToWriteame = "output" + to_string(filecount) + ".txt";
			ofstream outputfile(fibytesToWriteame.c_str(), ofstream::binary);

			if (!outputfile)
				cout << "Error in creating a file.\n";
			else
				cout << "File created successfully\n";

			outputfile.write(buffer, splitSize);
			outputfile.close();
			bytesToWrite -= splitSize;
			filecount++;
			delete[] buffer;
		}
		//read data as a block:
		
		/*
		inputfile.read(buffer1, bytesToWrite/2);
		inputfile.read(buffer2, bytesToWrite/2);

		inputfile.close();

		ofstream outputfile1("output1.dat", ofstream::binary);
		outputfile1.write(buffer1, bytesToWrite/2);
		outputfile1.close();

		ofstream outputfile2("output2.dat", ofstream::binary);
		outputfile2.write(buffer2, bytesToWrite/2);
		outputfile2.close();

		delete[] buffer1;
		delete[] buffer2;
		*/
	}

	return 0;
}