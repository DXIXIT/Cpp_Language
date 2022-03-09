#include "triviafiles.h"

using namespace std;

int main(void)
{
	srand(11);

	bool win = false;
	bool lose = false;
	bool leave = false;
	char WinLoseOrLeave = ' ';

	int lifelineCounter = 0;
	bool answerIsCorrect = false;
	int lives = 3;

	string userInput;
	int userAnswer;
	bool validInput;

	int winnings = 100;

	greeting();

	int questionCounter = 1;
	while (questionCounter <= 10)
	{
		printQuestion(questionCounter);
		cin >> userInput;

		validInput = (((inputIsOnetoFour(userInput)) && (userInput.length() == 1)) || userInput == "lifeline" || userInput == "random" || userInput == "leave");

		while (!validInput)
		{
			cout << "\nyoure' a dunb idit. Enter the answer again: ";
			cin >> userInput;

			validInput = (((inputIsOnetoFour(userInput)) && (userInput.length() == 1)) || userInput == "lifeline" || userInput == "random" || userInput == "leave");
		}

		while (!inputIsOnetoFour(userInput))
		{
			if (userInput == "lifeline")
			{
				if (lifelineCounter < 3)
				{
					lifeLine(questionCounter);
					lifelineCounter++;
				}
				
				else
					cout << "\nYour friend is on a holiday break. His message was: \"lmao get rekt\"\n";
			}

			else if (userInput == "random")
			{
				answerRandomly();
			}

			else if (userInput == "leave")
			{
				leave = true;
				WinLoseOrLeave = 'N';
				break;
			}

			else
			{
				cout << "\nYou broke the program (again)...\nJason!!!!!!!!!\n";
			}

			cin >> userInput;
		}

		if (leave)
			break;
		
		userAnswer = oneDigitStrToInt(userInput);
		answerIsCorrect = isCorrect(questionCounter, userAnswer);
		winnings = updateMoney<int>(winnings, answerIsCorrect);		
		
		if (answerIsCorrect)
		{
			cout << "\nCorrect!\n";
		}

		else
		{
			lives--;
			if (lives == -1)
			{
				lose = true;
				WinLoseOrLeave = 'L';
				break;
			}
			
			else
			{
				cout << "\nIncorrect! You have " << lives << " lives remaining.\n";
			}
		}

		questionCounter++;
	}

	if (questionCounter == 11)
		WinLoseOrLeave = 'W';

	exitMessage(WinLoseOrLeave, winnings);

	return 0;
}
