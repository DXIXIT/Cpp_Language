#include "Phone.h"
#include <fstream>
//Desc: computes the rating of phone objects and sets its rating
//Pre: shown below
//Post: the function will modify the value of the rating variable
void computeRating(Phone &smartPhone)
{
	float total_score = 2*smartPhone.cpuScore + smartPhone.gpuScore + smartPhone.cameraScore;
	if (total_score >= 17)
		smartPhone.rating = 'A';
	else if (total_score >= 15)
		smartPhone.rating = 'B';
	else if (total_score >= 14)
		smartPhone.rating = 'C';
	else
		smartPhone.rating = 'D';
	return;
}

void processInputFile(ifstream &fin, Phone smartPhones[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		fin >> smartPhones[i].model;
		fin >> smartPhones[i].cpuScore;
		fin >> smartPhones[i].gpuScore;
		fin >> smartPhones[i].cameraScore;
	}
	return;
}

void display(ostream &fout, const Phone &smartPhone)
{
	fout << "Phone Model: " << smartPhone.model << ", CPU score: " << smartPhone.cpuScore << ", GPU score: " << smartPhone.gpuScore << ", Camera score: " << smartPhone.cameraScore << ", Phone rating: " << smartPhone.rating << '\n';
}
