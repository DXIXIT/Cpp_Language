#include "triviafiles.h"

void greeting()
{
	cout << "\nWelcome to Are you Smarter than a Comp Sci! Read to play?\n";
}

void printQuestion(int questionNumber)
{
	cout << "\nQuestion " << questionNumber << ": ";
	switch(questionNumber)
	{
		case 1:
			cout << "Which of these is not a numeric data type?\n";
			cout << "1 - integer\n";
			cout << "2 - double\n";
			cout << "3 - boolean (pronounced boo-lean)\n";
			cout << "4 - float\n\n";
		break;

		case 2:
			cout << "\nWhich of the following is a reserved C++ keyword?\n";
			cout << "1 - buddy\n";
			cout << "2 - friend\n";
			cout << "3 - pal\n";
			cout << "4 - homeslice\n\n";
		break;

		case 3:
			cout << "What does the & symbol mean in C++?\n";
			cout << "1 - address of\n";
			cout << "2 - and\n";
			cout << "3 - not\n";
			cout << "4 - value of\n\n";
		break;

		case 4:
			cout << "\nYou do not need to document your functions in CS1570\n";
			cout << "1 - true\n";
			cout << "2 - false\n";
			cout << "3 - sometimes\n";
			cout << "4 - I don't know (I have been living under a rock)\n\n";
		break;

		case 5:
			cout << "\nWhat is “OOP”?\n";
			cout << "1 - Only Once Programming";
			cout << "2 - Object Oriented Programming\n";
			cout << "3 - What I say when I stub my toe\n";
			cout << "4 - Ope, oh peanuts.\n\n";
		break;

		case 6:
			cout << "\nHow many significant digits can a float have?\n";
			cout << "1 - 9\n";
			cout << "2 - 8\n";
			cout << "3 - 7\n";
			cout << "4 - 6\n\n";
		break;
		
		case 7:
			cout << "\nIf C is 3, then C++ is:\n";
			cout << "1 - An object oriented programming language\n";
			cout << "2 - 4\n";
			cout << "3 - Amazing\n";
			cout << "4 - All of the above\n\n";
		break;

		case 8:
			cout << "\nWhat is the maximum value of a signed integer in C++?\n";
			cout << "1 - 81\n";
			cout << "2 - 2147483647\n";
			cout << "3 - 11\n";
			cout << "4 - Negative 12\n\n";
		break;

		case 9:
			cout << "\nWhat does == do in C++?\n";
			cout << "1 - Sets the left variable equal to the right value\n";
			cout << "2 - Checks the validity of a data type in C++\n";
			cout << "3 - Checks if 2 values are equal to each other\n";
			cout << "4 - All of the above\n\n";
		break;

		case 10:
			cout << "\nCan you lose money in this game show?\n";
			cout << "1 - Yes\n";
			cout << "2 - No\n";
			cout << "3 - Don't pick this one\n";
			cout << "4 - Don't pick this one either\n\n";
		break;

	}
}

bool isCorrect(int questionNumber, int userAnswer)
{
	switch(questionNumber)
	{
		case 1: return (3 == userAnswer); 
		case 2: return (2 == userAnswer);
		case 3: return (1 == userAnswer);
		case 4: return (2 == userAnswer);
		case 5: return (2 == userAnswer);
		case 6: return (4 == userAnswer);
		case 7: return (4 == userAnswer);
		case 8: return (2 == userAnswer);
		case 9: return (3 == userAnswer);
		case 10: return (1 == userAnswer);
	}
	return false;
}

void lifeLine(int questionNumber)
{
	int sampleNum = (rand() % 100) + 1;
	int answer;
	if (sampleNum <= 80)
	{
		switch(questionNumber)
		{
			case 1: answer = 3; break;
			case 2: answer = 2; break;
			case 3: answer = 1; break;
			case 4: answer = 2; break;
			case 5: answer = 2; break;
			case 6: answer = 4; break;
			case 7: answer = 4; break;
			case 8: answer = 2; break;
			case 9: answer = 3; break;
			case 10: answer = 1; break;
		}		
	}
	else
	{
		answer = (rand() % 4) + 1;
	}

	cout << "\nYour friend said the answer is " << answer << ". What is your answer?\n";

}

void answerRandomly()
{
	int randomNum = (rand() % 4) + 1;
	cout << "\nYou thought of the number " << randomNum << " what is your answer?\n\n";
	//Note to self: The rand() function will be re-seeded upon call to main()
}

void leave(int winnings)
{
	cout << "You walked out with $" << winnings << "\n\n";
}

void exitMessage(char winLoseOrLeave, int winnings)
{
	switch (winLoseOrLeave)
	{
		case 'W': cout << "\nCongratulations! You won " << winnings << " dollars! Thanks for playing!\n\n"; break;
		case 'L': cout << "\nYou lost, and walked away with $0\n\n"; break;
		case 'N': leave(winnings); break;
		//'N' is for neither. Stupid, but I still wanted to use switch cases.
	}
}

/*----Extra functions----*/

int oneDigitStrToInt(string strNum)
{
	return strNum.at(0) - 48;
}

bool inputIsOnetoFour(string userInput)
{
	for (int i = 0; i < 4; i++)
	{
		if (userInput.at(0) == questionAnswers.at(i))
			return true;
	}
	return false;
}
