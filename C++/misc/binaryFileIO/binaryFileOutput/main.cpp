#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ifstream file1("input1.dat", ifstream::binary);
	ifstream file2("input2.dat", ifstream::binary);

	if (file1 && file2)
	{
		file1.seekg(0, fcodile1.end);
		int len1 = file1.tellg();
		file1.seekg(0, file1.beg);

		file2.seekg(0, file2.end);
		int len2 = file2.tellg();
		file2.seekg(0, file2.beg);

		int lenT = len1 + len2;

		char *buffer1 = new char[len1];
		char *buffer2 = new char[len2];
		char *bufferT = new char[lenT];

		//read the data as a block:
		file1.read(buffer1, len1);
		file2.read(buffer2, len2);

		file1.close();
		file2.close();

		for (int i = 0; i < len1; i++)
			bufferT[i] = buffer1[i];

		for (int i = 0; i < len2; i++)
			bufferT[i + (len1)] = buffer2[i];

		ofstream outputfile("output.dat", ofstream::binary);
		outputfile.write(bufferT, lenT);
		outputfile.close();

		delete[] buffer1;
		delete[] buffer2;
		delete[] bufferT;
	}

	return 0;
}