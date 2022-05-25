#include <iostream>

using namespace std;

int main(void)
{
	//The switch statement can only work with int and int-like data types.

	char var;
	cin >> var;
	switch (var)
	{
		case 'a':
			cout << 'a' << endl;
			break; //Must have, so that the switch case can be exited. Otherwise all statements below this one will be executed.
		case 'b':
			cout << 'b' << endl;
			break;
		case 'c':
			cout << 'c' << endl;
			break;
		case 'd':
			cout << 'd' << endl; //Getting rid of breaks sort of has the effect of having two if statements with no else in between.
			break;
		default:
			cout << 'e' << endl;
	}

	int x = 12;
	switch (var)
	{
		case 'a':
		{
			case 'A':
			cout << "hi" << endl;
			break;
		}

		case 'b':
			cout << x << endl;
			break;
		default:
			cout << "default" << endl;
	}
}