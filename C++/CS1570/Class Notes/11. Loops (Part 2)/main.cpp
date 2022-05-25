#include <iostream>

using namespace std;

//Do while loops allow for range checking.

int main(void)
{
	int i;
	for (i = 0; i < 10; i++);
	cout << i << endl;

	for (int j = 0; j < 10; cout << ++j << endl);
	//cout << j << endl; //Will throw an error, because j doesn't exist outside of the scope of the for loop.
}