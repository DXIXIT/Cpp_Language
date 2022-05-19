#include <iostream>

using namespace std;

int main()
{
	int matrix[3][5]; //Row by column. Think of a nested array with length of 3 that contains arrays length of 5.

	int counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			counter++;
			matrix[i][j] = counter;
		}
	}

	for (int i = 0; i < 3; i++) //Printing the elements row by row
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << ' ';
		}

		cout << '\n';
	}

	cout << '\n' << '\n';

	for (int i = 0; i < 5; i++) //Printing elements column by column
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[j][i] << ' ';
		}

		cout << '\n';
	}
	return 0;
}