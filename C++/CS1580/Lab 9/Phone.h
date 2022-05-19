#ifndef PHONE_H
#define PHONE_H

#include <fstream>
#include <iostream>

using namespace std;

struct Phone
{
	string model;
	float cpuScore;
	float gpuScore;
	float cameraScore;
	char rating;
};


//Desc: computes the rating of phone objects and sets its rating
//Pre: shown below
//Post: the function will modify the value of the rating variable
void computeRating(Phone &phone);

//Desc: reads data from file input stream and populates Phone array. A rating is also assigned to each phone.
//Pre: shown below
//Post: the smartPhones array will be modified
void processInputFile(ifstream &fin, Phone smartPhones[], const int size);

//Desc: write the Phone object to output file
//Pre: shown below
//Post: a text file will display the output
void display(ostream &fout, const Phone &phone);

#endif
