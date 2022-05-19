#include <iostream>

using namespace std;

void initArray(int arr[], const int LEN)
{
	for (int i = 0; i < LEN; i++)
	{
		arr[i] = ((rand() % 901) + 100);
	}

	return;
}

void printMinMax(int arr[], int len)
{
	int min = 100000;

	int max = -1;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		
		if (arr[i] > max)
			max = arr[i];
	}

	cout << "The minimum value in this array is: " << min << '\n';
	cout << "The maximum value in this array is: " << max << '\n';

	return;
}

int main()
{
	const int SIZE = 10;

	int numarr[SIZE];

	initArray(numarr, SIZE);

	printMinMax(numarr, SIZE);

	return 0;
}