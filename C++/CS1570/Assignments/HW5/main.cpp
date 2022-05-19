// Programmer: Kshitij Sharma
// MST Username: kssgy4
// Instructor Name: San Yeung
// Section: 109
// Date: 3/18/22
// File: HW5.cpp

#include <iostream>

#include "NewHomeOwner.h"

using namespace std;

int main(void)
{
	const int NEIGHBORNUMS = 6;
	const int ROUNDNUMS = 10;

	srand(327);
		
	cout << "Congratulations on finding your home sweet home!\n";

	string ownerName = "";
	cout << "May I get your name, please?\n";
	cin >> ownerName;

	string OwnerAddress = "";
	cin.ignore();
	cout << "\nCould you tell me the address of your new home?\n";
	getline(cin, OwnerAddress);

	float ownerAcres = 0.0;
	cout << "\nTime for a fresh start, eh? What's the total number of acres of your property?\n";
	cin >> ownerAcres;
	
	int ownerGarages = 0;
	cout << "\nI'll wait for that housewarming party invite. How many garages does the house have?\n";
	cin >> ownerGarages;

	NewHomeOwner newOwner = {ownerName, OwnerAddress, ownerAcres, ownerAcres, ownerGarages};
													//startAcres, endAcres
	Neighbor neighbor1;
	Neighbor neighbor2;
	Neighbor neighbor3;
	Neighbor neighbor4;
	Neighbor neighbor5;
	Neighbor neighbor6;

	Neighbor neighborhood[] = {neighbor1, neighbor2, neighbor3, neighbor4, neighbor5, neighbor6};

	int goodNeighborCount = 0;

	for (int i = 0; i < NEIGHBORNUMS; i++)
	{
		initializeNeighbor(neighborhood[i], i);
		
		if (neighborhood[i].mIsGoodNeighbor)
			goodNeighborCount++;
	}

	if (goodNeighborCount == 6)
	{
		cout << "\nHooray! There are no bad neighbors. You can now go on your merry way.\n";
		return 0;
	}

	cout << "\nSweet cookies! The neighborhood is lucky to have you, Alberto!\n";
	cout << "Looks like you have " << NEIGHBORNUMS - goodNeighborCount << " bad neighbors and " << goodNeighborCount << " good neighbors, and they can't wait to show you around.\n";

	cout << fixed;
	cout << setprecision(2);

	for (int i = 1; i <= ROUNDNUMS; i++)
	{
		int startRoundLandSize = newOwner.mEndAcres;
		int startRoundGarageSize = newOwner.mNumGarages;

		cout << "\nROUND " << i << ':';
		for (int j = 0; j < NEIGHBORNUMS; j++)
		{
			if (!neighborhood[j].mIsGoodNeighbor)
			{
				defendHomeland(newOwner, neighborhood[j]);
			}
			else
			{
				requestAssistance(newOwner, neighborhood[j]);
			}
		}

		int endRoundLandSize = newOwner.mEndAcres;
		int endRoundGarageSize = newOwner.mNumGarages;

		int landSizeChange = startRoundLandSize - endRoundLandSize;
		int garageSizeChange = startRoundGarageSize - endRoundGarageSize;

		cout << "\n\tEND OF ROUND SUMMARY:\n";

		cout << "\t\tCurrent acres of land: " << endRoundLandSize;
		cout << " Change: ";
		if (landSizeChange >= 0)
			cout << '+';
		cout << landSizeChange << '\n';

		cout << "\t\tCurrent number of garages: " << endRoundGarageSize;
		cout << " Change: ";
		if (garageSizeChange >= 0)
			cout << '+';
		cout << garageSizeChange << '\n';
	}

	cout << "\nHOME DEFENDER "<< newOwner.mName << "! Let's run through your battle summary!\n";
	cout << "\n\tHome Defender: " << newOwner.mName << '\n';
	cout << "\tHome Address: " << newOwner.mAddress << '\n';
	cout << "\tInitial acres of land owned: " << newOwner.mStartAcres << '\n';
	cout << "\tFinal acres of Land Owned: " << newOwner.mEndAcres << '\n';
	cout << "\tInitial number of garages owned: " << ownerGarages << '\n';
	cout << "\tFinal number of garages owned: " << newOwner.mNumGarages << '\n';

	for (int i = 0; i < NEIGHBORNUMS; i++)
	{
		cout << "\n\tNeighbor ID #" << neighborhood[i].mID << ":\n"; 
		cout << "\tAcres of Land Owned: " << neighborhood[i].mEndAcres << '\n';
		cout << "\tAcres of Land Stolen: " << neighborhood[i].mEndAcres - neighborhood[i].mStartAcres << '\n';
		cout << "\tInitial Number of Garages Owned: " << neighborhood[i].mStartNumGarages << '\n';
		cout << "\tFinal Number of Garages Owned: " << neighborhood[i].mEndNumGarages << '\n';
		cout << "\tLikable? ";
		if (neighborhood[i].mIsGoodNeighbor)
			cout << "GOOD!\n";
		else
			cout << "BAD!\n";

		cout << "\tStatus: ";
		if (neighborhood[i].mIsActive)
			cout << "Active\n";
		else
			cout << "Inactive\n";
	}

	cout << "\nGood bye, " << ownerName << "! The next time you buy a house, make sure that there's no bad neighbors around it.\n";

	return 0;
}