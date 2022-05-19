#ifndef FILES_H
#define FILES_H

#include <iostream>
#include <fstream>

using namespace std;

//Description: This function writes the original data with an additional message appended at each line.
//Pre: fin must be in an error-free state and sucessfully connected to the input file.
//Post: The new data will be written to a new output file "output.dat"
void writeToFile(ifstream &fin); //Must be pass by reference

#endif