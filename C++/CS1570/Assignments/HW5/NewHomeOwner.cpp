#include "NewHomeOwner.h"

using namespace std;

void requestAssistance(NewHomeOwner &theNewHomeowner, Neighbor &aGoodNeighbor)
{
	cout << "\n\tGood neighbor ID #"<< aGoodNeighbor.mID <<" has 2 garages, and you have 2 garages.\n";

	int sampleNum = 0;
	if (theNewHomeowner.mNumGarages >= aGoodNeighbor.mEndNumGarages)
	{
		sampleNum = random() % 100;
		if (sampleNum < 30)
		{
			cout << "\tExcuse me... do you need an extra garage? The good neighbor's got one for you!\n";
			theNewHomeowner.mNumGarages++;
			aGoodNeighbor.mEndNumGarages--;
			cout << "\tYou have " << theNewHomeowner.mNumGarages << " garages now.\n";
		}
		else
			cout << "\tGarages? The good neighbor doesn't have any extra available.\n";
	}
	else
	{
		sampleNum = random() % 100;
		if (sampleNum < 80)
		{
			cout << "\tExcuse me... do you need an extra garage? The good neighbor's got one for you!\n";
			theNewHomeowner.mNumGarages++;
			aGoodNeighbor.mEndNumGarages--;
			cout << "\tYou have " << theNewHomeowner.mNumGarages << " garages now.\n";
		}
		else
			cout << "\tGarages? The good neighbor doesn't have any extra available.\n";
	}
	return;
}

void defendHomeland(NewHomeOwner &theNewHomeowner, Neighbor &aBadNeighbor)
{
	int sampleNum = 0;

	cout << "\n\tBad neighbor ID #" << aBadNeighbor.mID << " has " << aBadNeighbor.mEndNumGarages << " garages, and you have " << theNewHomeowner.mNumGarages << " garages.\n";

	if (aBadNeighbor.mIsActive)
	{
		if (theNewHomeowner.mNumGarages < aBadNeighbor.mEndNumGarages)
		{
			sampleNum = random() % 100;
			if (sampleNum < 53)
			{
				int garageDiff = aBadNeighbor.mEndNumGarages - theNewHomeowner.mNumGarages;

				cout << "\tThe bad neighbor's garages look better than yours! So hand over " << garageDiff << " acres of land to your neighbor.\n";

				theNewHomeowner.mEndAcres-=garageDiff;
				aBadNeighbor.mEndAcres+=garageDiff;

				cout << "\tYou have " << theNewHomeowner.mEndAcres << " acres of land now.\n";

				sampleNum = random() % 100;
				if (sampleNum < 46)
				{
					cout << "\tAnd guess what? The bad neighbor managed to build a new garage just now!\n";
					aBadNeighbor.mEndNumGarages++;
				}
			}

			else
				cout << "\tThe bad neighbor has no idea what's going on, so you are safe. Run!\n";
		}

		//Bad neighbors who haven't stolen land before are 1) active and 2) Have their current land same as their original land.
		else if (aBadNeighbor.mEndAcres > aBadNeighbor.mStartAcres)
		{
			sampleNum = (random() % 2);
			//Having a random number between 1 and 80 inclusive is basically the same as this expression.
			/* If it were to be 1 and 79 inclusive, however, things would be different.
			I wonder if the writers for this assignment intended this instead... */

			if (sampleNum == 0)
			{
				sampleNum = random() % 100;
				if (sampleNum < 73)
				{
					cout << "\tYou are in luck! You got back half of the stolen land from this bad neighbor.\n";

					theNewHomeowner.mEndAcres += ((aBadNeighbor.mEndAcres - aBadNeighbor.mStartAcres) / 2);

					cout << '\t' << ((aBadNeighbor.mEndAcres - aBadNeighbor.mStartAcres) / 2) << " acre(s) of land reclaimed!\n";

					aBadNeighbor.mEndAcres -= (aBadNeighbor.mEndAcres - aBadNeighbor.mStartAcres) / 2;

					if (aBadNeighbor.mEndAcres == aBadNeighbor.mStartAcres)
						aBadNeighbor.mIsActive = false;
				}
				else
				{
					theNewHomeowner.mEndAcres += (aBadNeighbor.mEndAcres - aBadNeighbor.mStartAcres);

					cout << "\tYou are super lucky! You got back ALL of the stolen land from this bad neighbor.\n";
					cout << (aBadNeighbor.mEndAcres - aBadNeighbor.mStartAcres) << " acre(s) of land reclaimed!\n";
					aBadNeighbor.mEndAcres = aBadNeighbor.mStartAcres;
					aBadNeighbor.mIsActive = false;
				}
			}
			else
				cout << "\tYou are safe, run!\n";
		}
		else
			cout << "\tYou are safe, run!\n";
	}
	else
		cout << "\tThe bad neighbor doesn't like you now... your bravery has scared them away.\n";

	return;
}