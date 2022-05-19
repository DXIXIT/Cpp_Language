#ifndef CARD_H
#define CARD_H

/************** Function documentation **************/

//Function: Card() constructor
//Desc: Literally does nothing
//Pre: None
//Post: Literally nothing will happen

//Function: Card(char inVal, char inSuit);
//Desc: Initializes values for the card object
//Pre: none
//Post: values for card object will be initialized

//Function: int operator + (Card enemyCard);
//Desc: Add values of two cards together.
//Pre: none
//Post: If sum is 11, both cards are destroyed. J, Q, K, and A have a value of 10;

//Function: 

class Card
{
	public:
		Card();
		Card(char inVal, char inSuit);

		int operator + (Card enemyCard);
		bool operator < (Card enemyCard);


	private:
		char value;
		char suit;
		bool destroyed;
};

#endif