// Programmer: Kshitij Sharma
// MST Username: kssgy4
// Instructor Name: San Yeung
// Section: 109
// Date: 2/25/22
// File: HW3.cpp

#include <iostream>

using namespace std;

//Desc: greet the users
//Pre: none
//Post: greeting message will be printed
void greet(void); //Requirement 1

//Desc: print the game summary
//Pre: shown below
//Post: The game will print the arguments below and increment newBestieLevel by two if less than 20.
void printGameSummary(string P1Name, string P2Name, int roundNumber, int oldBestieLevel, int newBestLevel); // Requirement 2

//Desc; provide user to info about the word(le)
//Pre: tbd
//Post: the user will know if their character is valid.
void shareWordle(string P1Name, string P2Name, int roundNumber, int attemptNum, string attemptString); //Requirement 3


/*----Extra Functions----*/

//Desc: print the menu for the user
//Pre: none
//Post: if the round number is zero, the function won't print options 2, 3, and 5. Otherwise, it will.
void printMenu(void);

//Desc: interact with menu
//Pre: shown below; optionNum needs to be in the range of '1' to '5'
//Post: the switch statement will modify user variables and print user data
void menuInteract(char optionNum, string &P1Name, string &P2Name, int &oldBestieLevel, int &newBestieLevel, int roundNumber, bool &continueGame);

int main()
{
	/* Program variables */
	bool continueGame = true;
	bool beginGame = false;
	int roundNumber = 1;	

	//User variables
	char optionNum = ' '; //Will choose an option from print menu

	string P1Name = "";
	string P2Name = "";

	int oldBestieLevel = -1, newBestieLevel = oldBestieLevel;
	//Using bestieLevel instead of frienshiplevel because its more fun. Also because I'm too lazy to type "friendship."

	string P1Word = "";
	string P2Word = "";

	//The following variables will be used for checking user input.
	int  wordLen;
	bool lenIsFive;
	bool validChars;

	bool wordIsEqual;
	//Variables that will store the number of attempts
	int attemptNum;
	const int maxAttempts = 6;

	//Variables that deal with status of a certain character when player 2 is guessing
	bool char0Used;
    bool char1Used;
    bool char2Used;
    bool char3Used;
    bool char4Used;

	bool currentCharUsed;
	int numTimesScrubbed;

	//The only function outside of the loop lol
	greet();

	while (continueGame)
	{
		printMenu();

		cout << "\nPlease choose an option (1-5): ";
		cin >> optionNum;

		while (!('1' <= optionNum && optionNum <= '5'))
		{
			cout << '\n' << optionNum << " is not a valid option! Please choose again: ";
			cin >> optionNum;
		}

		menuInteract(optionNum, P1Name, P2Name, oldBestieLevel, newBestieLevel, roundNumber, continueGame);

		if (optionNum == '1' || optionNum == '2')
			beginGame = true;
		else
			beginGame = false;
		
		if (!continueGame) //Will exit loop if user selects option 5
			break;
		
		if (beginGame)
		{
			if (roundNumber == 1)
				cout << "\nLet the game begin now!\n";

			else
				cout << "Alright! Round " << roundNumber << " with " << P1Name << " and " << P2Name << "!\n";

			cout << "\nWait... " << P1Name << ", I need the key word from you (yes, you may whisper into my ears... and remember, it has to be a valid five-letter word all UPPERCASE): ";
			cin >> P1Word;

			wordLen = 0;
			lenIsFive = false;
			validChars = false;
			
			//Loop(s) to check if the user input is valid.
			do {
				
				wordLen = P1Word.length();
				lenIsFive = (wordLen == 5);

				if (!lenIsFive)
				{
					cout << "\nSeriously, " << P1Name << "? Your input word is " << wordLen << " letters long! Don't make me quit on you right now...\n";

					cout << "\nPlease enter the word again: ";
					cin >> P1Word;
				}

				else
				{
					//The loop below will check if each character in the string has characters in a certain range. As soon as it detects an invalid character, the loop terminates.
					validChars = true;
					for (int i = 0; i < wordLen; ++i)
					{
						if (!('A' <= P1Word.at(i) && P1Word.at(i) <= 'Z'))
						{
							validChars = false;
							break;
						}
					}

					if (!validChars)
					{
						cout << "\nDon't make me arrest you, " << P1Name << "! Your input word is contaminated with non-(capital)-alphabet characters...\n";

						cout << "\nPlease enter the word again: ";
						cin >> P1Word;
					}

				}

			} while(!(lenIsFive && validChars));

			cout << "\nGot it, " << P1Name << "! The key word is now securely processed and saved.\n";
			//Might want to put in some way to prevent Player 2 from seeing the word.

			cout << "\nGet ready, " << P2Name << "! It's now time to wordle with " << P1Name << "!\nYou will have a total of 6 attempts to guess the word correctly.\n";

			wordIsEqual = false;
			attemptNum = 1;

			do {
				cout << "\nThis is your attempt #" << attemptNum << ", " << P2Name << ", please enter a valid five-letter word (all UPPERCASE): ";
				cin >> P2Word;

				//The following variables are reset for player 2
				wordLen = 0;
				lenIsFive = false;
				validChars = false;

				do {
					wordLen = P2Word.length();
					lenIsFive = (wordLen == 5);

					if (!lenIsFive) //Will output if length is not 5.
					{
						cout << "\nSeriously, " << P2Name << "? Your input word is " << wordLen << " letters long! Don't make me quit on you right now..." << endl;

						cout << "\nPlease enter the word again: ";
						cin >> P2Word;
					}

					else //If the first condition turns out to be true, this branch will be executed.
					{
						//The loop below will check if each character in the string has characters in a certain range. As soon as it detects an invalid character, the loop terminates.
						validChars = true;
						for (int i = 0; i < wordLen; ++i)
						{
							if (!('A' <= P2Word.at(i) && P2Word.at(i) <= 'Z'))
							{
								validChars = false;
								break;
							}
						}

						if (!validChars)
						{
							cout << "\nDon't make me arrest you, " << P2Name << "! Your input word is contaminated with non-(capital)-alphabet characters...\n";

							cout << "\nPlease enter the word again: ";
							cin >> P2Word;
						}
					}

				} while(!(lenIsFive && validChars));

				//beeg if-() branch.
				if (P1Word != P2Word)
				{
					if (attemptNum < maxAttempts)
						cout << "\nYou entered \"" << P2Word << "\". Nice try, keep going!\n";

					else
						cout << "\nYou entered \"" << P2Word << "\".\n";	

					/* Each character in P1's word will be given a "used" status to make sure the wordle does
					not give a neutral outputFace for repeated characters in P2's word. */
					char0Used = false;
					char1Used = false;
					char2Used = false;
					char3Used = false;
					char4Used = false;

					string outputFace = "";

					string result0; //Each "result" will store each "face" that is outputted in wordle.
					string result1;
					string result2;
					string result3;
					string result4;


					for (int i = 0; i < 5; ++i) //Scrub through P2's word
					{
						//Scrub through P1's word; 'j' will start at 'i' instead and then loop back around.
						numTimesScrubbed = 0;
						int j = i;
						while (numTimesScrubbed < 5)
						{
							if (j == 5)
							{
								j = 0;
							}

							switch (j)
							{
								case 0: currentCharUsed = char0Used; break;
								case 1: currentCharUsed = char1Used; break;
								case 2: currentCharUsed = char2Used; break;
								case 3: currentCharUsed = char3Used; break;
								case 4: currentCharUsed = char4Used; break;
							}

							if (P2Word.at(i) == P1Word.at(j) && !currentCharUsed)
							{
								switch (j)
								{
									case 0: char0Used = true; break;
									case 1: char1Used = true; break;
									case 2: char2Used = true; break;
									case 3: char3Used = true; break;
									case 4: char4Used = true; break;
								}

								if (i == j)
								{
									outputFace = ": ^o^\n"; //the "outputFace" will be output at the end
									outputFace = P2Word.at(i) + outputFace;
								}

								else
								{
									outputFace = ": ^-^\n";
									outputFace =  P2Word.at(i) + outputFace;
								}

								break;
							}

							numTimesScrubbed++; j++;
						}

						if (numTimesScrubbed == 5)
						{
							outputFace = ": @.@\n";
							outputFace = P2Word.at(i) + outputFace;
						}

						switch (i)
						{
							case 0: result0 = outputFace; break;
							case 1: result1 = outputFace; break;
							case 2: result2 = outputFace; break;
							case 3: result3 = outputFace; break;
							case 4: result4 = outputFace; break;
						}
					}

					cout << result0;
					cout << result1;
					cout << result2;
					cout << result3;
					cout << result4;
				}

				else
				{
					break;
				}

			attemptNum += 1;

			} while (attemptNum < maxAttempts + 1);

			if (attemptNum == 7)
			{
				cout << "\nThe word(le) was " << P1Word << ". You lose!" << endl;
			}

			else
			{
				cout << "\nYou entered \"" << P2Word << "\". Congratulations, \"" << P2Word << "\" it is!" << endl;
			}

			cout << "\nRound " << roundNumber << " Summary\n";
			cout << "\tPlayer 1: " << P1Name << '\n';
			cout << "\tPlayer 2: " << P2Name << '\n';

			if (oldBestieLevel < 20)
				newBestieLevel += 2;
			
			newBestieLevel += attemptNum;

			if (newBestieLevel > 100)
				newBestieLevel = 100;


			cout << "\tFriendship level: " << oldBestieLevel << " -> " << newBestieLevel << "\n\n";

			roundNumber++;
		}
	}
	
	return 0;
}


void greet(void) //Requirement 1
{
	cout << "Welcome to wordle for friends!\n≤^.^≥\n";
	return;
}

void printGameSummary(string P1Name, string P2Name, int roundNumber, int oldBestieLevel, int newBestieLevel) // Requirement 2
{
	cout << "\nGame Summary\n";
	cout << "\tPlayer 1: " << P1Name << "\n";
	cout << "\tPlayer 2: " << P2Name << "\n";
	cout << "\tNumber of rounds played: " << roundNumber << "\n";
	cout << "\tInitial friendship level: " << oldBestieLevel << "\n";
	cout << "\tCurrent friendship level: " << newBestieLevel << "\n\n";
}

void printMenu()
{
	cout << "\nThe Wordle's Menu\n";
	cout << "-----------------\n";
	cout << "1. Start a new game (with new players)\n";
	cout << "2. Start a new round (with existing players)\n";
	cout << "3. Print game summary (of existing players)\n";
	cout << "4. Share result (of last round)\n";
	cout << "5. Exit the game (are you sure?)\n";
	return;
}

void menuInteract(char optionNum, string &P1Name, string &P2Name, int &oldBestieLevel, int &newBestieLevel, int roundNumber, bool &continueGame)
{
	bool stayInSwitch = true;
	while (stayInSwitch) //Thought of using recursion, but thought risked losing points. While loop works ig.
	{
		switch (optionNum)
		{
			//The main purpose of case 1 is to change values of user variables.
			case '1':
			{
				cout << "\nPlayer 1, please enter your name: ";
				cin >> P1Name;
				cout << "Welcome, " << P1Name << "!\n";
			
				cout << "\nNow, Player 2, please enter your name: ";
				cin >> P2Name;
				cout << "Welcome, " << P2Name << "!\n";

				cout << '\n' << P1Name << ", please rate the friendship level you have with " << P2Name << " (enter an integer value in [0, 100]): ";
				cin >> oldBestieLevel;

				//Input-checking loop (putting in chars will break the program)
				while (!(0 <= oldBestieLevel && oldBestieLevel <= 100))
				{
					cout << "\nCan't you read, " << P1Name << "? The friendship level you input is invalid!\n";

					cout << "\nPlease enter the friendship level again (an integer value in [0, 100]): ";
					cin >> oldBestieLevel;
				}

				newBestieLevel = oldBestieLevel;

				/* End of friendship checking. The game will now start.*/
				cout << "\nHooray, that's an admirable friendship between you two!\n";
				stayInSwitch = false;
				
				break;
			}

			case '2':
			{
				if (P1Name.length() == 0 || P2Name.length() == 0) //Will force user to pick another option
				{
					cout << "\nSorry, no existing player info found. Please start a new game and choose again: ";
					cin >> optionNum;
					
					while (!('1' <= optionNum && optionNum <= '5'))
					{
						cout << '\n' << optionNum << " is not a valid option! Please choose again: ";
						cin >> optionNum;
					}

				}
				else
					stayInSwitch = false;
				
				break;
			}

			case '3':
			{
				if (P1Name.length() == 0)
				{
					cout << "\nSorry, no round records found. Please choose again: ";
					cin >> optionNum;
					
					while (!('1' <= optionNum && optionNum <= '5'))
					{
						cout << '\n' << optionNum << " is not a valid option! Please choose again: ";
						cin >> optionNum;
					}
				}

				else
				{
					printGameSummary(P1Name, P2Name, roundNumber, oldBestieLevel, newBestieLevel);
					stayInSwitch = false;
				}

				break;
			}

			case '4':
			{
				if (P1Name.length() == 0) 
				{
					cout << "Sorry, no round records found. Please choose again: ";
					cin >> optionNum;
					
					while (!('1' <= optionNum && optionNum <= '5'))
					{
						cout << '\n' << optionNum << " is not a valid option! Please choose again: ";
						cin >> optionNum;
					}
				}

				else
				{
					cout << "Uhhhh sharewordle() doesn't exist because implementing it became too tedious.\n";
					cout << "So, please have a perfect mimicry of how wordle gives info to the user instead.\n";
					break;
				}

				break;
			}

			case '5':
			{
				cout << "\nOK, good bye! See you soon, Wordle Worlde!\n";
				cout << "\nRemember, a real friend is one who always Wordles with you when the rest of the world won't!\n";
				stayInSwitch = false;
				continueGame = false;
				break;
			}

			default: cout << "You somehow managed to bypass all input checking filters.\nWelcome to your personal hell.\n\n"; break;
		}
	}
}