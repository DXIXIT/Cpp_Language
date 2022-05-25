#include <iostream>

using namespace std;

//It is very likely that a programmer will be dealing with variables that have a lot of importance. It is easier to have sensitive details like credit card numbers and SSNs to be updated. In the case that they are updated, it will be harder to find which funtion has corrupted these sensitive details.

int SSN; /*Don't do this!*/

int main()
{
  std::cout << "Hello World!\n";
} 