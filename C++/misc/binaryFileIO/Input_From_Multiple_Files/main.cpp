#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void)
{
	string filename = "";

	vector<char> tempBuffer;

	for (int filenum = 1; filenum <= 18; filenum++)
	{
		filename = "input" + to_string(filenum) + ".txt";
		cout << "The current file name is: " << filename << '\n';
		ifstream currentFile(filename.c_str(), ifstream::binary);

		if (currentFile)
		{
			currentFile.seekg(0, currentFile.end);
			int currentLen = currentFile.tellg();
			currentFile.seekg(0, currentFile.beg);

			char* buffer = new char[currentLen];

			currentFile.read(buffer, currentLen);
			currentFile.close();

			for (int i = 0; i < currentLen; i++)
				tempBuffer.push_back(buffer[i]);

			delete[] buffer;
		}
	}

	int totalLen = tempBuffer.size();

	char* totalBuffer = new char[totalLen];

	for (int i = 0; i < totalLen; i++)
	{
		totalBuffer[i] = tempBuffer[i];
	}

	ofstream outputFile;
	outputFile.open("newOutput.txt", ifstream::binary);
	outputFile.write(totalBuffer, totalLen);
	outputFile.close();
	
	tempBuffer.clear();
	delete[] totalBuffer;

	return 0;
}