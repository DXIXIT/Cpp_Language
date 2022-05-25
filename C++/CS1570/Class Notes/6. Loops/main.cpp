#include <iostream>

using namespace std;

int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		cout << "This is a string" << endl; counter++;
	}
	cout << "This was the while loop.\n" << endl;

	//The do-while loop is used when the code must run at least once.
	counter = 0;
	do {
		cout << "This is another string" << endl;
		counter++;

	} while (counter < 2);
	//The statement above will enter a while loop, basically the do statement will be ignored.

	cout << "This was the do-while loop.\n";

}