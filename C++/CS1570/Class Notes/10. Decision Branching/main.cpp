#include <iostream>

using namespace std;

int main()
{
  bool greet = true;

	if(greet)
		cout << "Hello" << endl;
		//Curly braces can be get rid of because this is only one statement.

	if(!greet)
	{
		cout << "Let's have a snow fight.\n";
	}
	else
	{
		cout << "Hello yall\n";
	}

	//if-else statements can be nested.
	//if-else statements can be chained using else-if.

	int x = 10;

	if (true)
	{
		int x = 22; //int x exists in the scope of the if statement
		cout << x << '\n';
	}

	cout << x << endl;
}