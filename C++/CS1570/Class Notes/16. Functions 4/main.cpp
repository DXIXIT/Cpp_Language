#include <iostream>

using namespace std;

//This function has a constant parameter.
int square(const int x)
{
	//x++; This value will not update. Will throw an error. Passing by reference will be essentially useless.
	return 0;
}

int main(void)
{
  cout << "Hello World!\n";
}