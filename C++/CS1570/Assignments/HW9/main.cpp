// Programmer: Kshitij Sharma
// MST Username: kssgy4
// Instructor Name: San Yeung
// Section: 109
// Date: 5/4/22
// File: HW9.cpp

#include "robber.h"
#include "city.h"
#include "jewel.h"
#include "police.h"

#include <iostream>

const int MAXJEWELS = 47;
const int MAXROBBERS = 4;

using namespace std;

int main(void)
{
	srand(85);

	city newCity;

	//Initializing the 2d array
	for (int i = 0; i < MAX_DIMENSIONS; i++)
	{
		for (int j = 0; j < MAX_DIMENSIONS; j++)
		{
			newCity.setBlock(i, j, '-');
		}
	}

	newCity.setJewelcount(47);

	//Placing all the jewels
	jewel EpicJewels[MAXJEWELS];
	int jewelsScattered = 0;
	int jewelIndex = 0;
	while (jewelsScattered < MAXJEWELS)
	{
		int x_pos = random() % 10;
		int y_pos = random() % 10;

		if (!(newCity.isOccupied(y_pos, x_pos)))
		{
			newCity.setBlock(y_pos, x_pos, 'J');
			EpicJewels[jewelIndex] = jewel(y_pos, x_pos);
			jewelIndex++;
			jewelsScattered++;
		}
	}

	//Placing all the robbers
	robber<jewel> robberList[MAXROBBERS];
	int robbersPlaced = 0;
	int robberIndex = 0;
	while (robbersPlaced < MAXROBBERS)
	{
		int x_pos = random() % 10;
		int y_pos = random() % 10;
		if (!(newCity.isOccupied(y_pos, x_pos)))
		{
			newCity.setBlock(y_pos, x_pos, 'r');
			robberList[robberIndex] = robber<jewel>(robberIndex + 1, y_pos, x_pos, true, ((robberIndex % 2) == 0));
			robberIndex++;
			robbersPlaced++;
		}
	}

	//Placing the one police officer
	int x_pos = random() % 10;
	int y_pos = random() % 10;

	while (!(newCity.isOccupied(y_pos, x_pos)))
	{
		x_pos = random() % 10;
		y_pos = random() % 10;
	}
	police newOfficer(1, y_pos, x_pos);
	newCity.setBlock(y_pos, x_pos, 'p');

	//Printing the initial city grid
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << newCity.getBlock(i, j) << ' ';
		}
		cout << '\n';
	}

	return 0;
}