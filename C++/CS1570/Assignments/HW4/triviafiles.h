#ifndef TRIVIAFILES_H
#define TRIVIAFIlES_H

#include <iostream>
#include <cstdlib>

using namespace std;

const string questionAnswers = "1234";


//Desc: the function greets the user
//Pre: none
//Post: the greeting message will be printed on the terminal
void greeting();

//Desc: Print a single multiple choice question
//Pre: shown below; questionNumber should be in order from 1-10
//Post: the question is printed on the terminal
void printQuestion(int questionNumber);

//Desc: Determines if the userAnswer is correct for a given question
//Pre: shown below; printQuestion and isCorrect should have the same questionNumber passed
//Post: the function will return if the question answer was correct
bool isCorrect(int questionNumber, int userAnswer = 3);

//Desc: Gives an answer for question passed into function with 80% of being right
//Pre: shown below; same requirements for questionNumber apply as previously shown
//Post: the "answer" to the question will be printed in the terminal
void lifeLine(int questionNumber);

//Desc: Generates random value between 1 and 4
//Pre: none
//Post: The random value will be printed on the terminal
void answerRandomly();

//Desc: Allows the user to leave with current winnings; ends game
//Pre: none
//Post: the game will end
void leave();

//Desc: Prints an exit message along with winnings; prints if players wins, loses, or leaves the game
//Pre: The winLostOrLeave paramter should hold the info if the user won, lost, or left
//Post: the user will see a farewell message and the program will terminate
void exitMessage(char winLoseOrLeave, int winnings);

//Desc: Multiply current pool of money by two if correct, otherwise subtract 100
//Pre: currentMoney must be ANY numeric data type
//Post: the iterated value of the currentMoney variable will be returned
template <typename T>
T updateMoney(T currentMoney, bool isCorrect)
{
	if (isCorrect)
		return currentMoney *= 2;
	
	else
		return currentMoney -= 100;
}

/*----Extra Functions----*/

//Desc: Convert a string containing one digit into an int number
//Pre: strNum HAS to be single digit
//Post: Function will return the int version of the given string
int oneDigitStrToInt(string strNum);

//Desc: Check if a user input is in const string questionAnswers
//Pre: shown below
//Post: the function will return a bool whether or not the userInput is from 1 to 4
bool inputIsOnetoFour(string userInput);

#endif