#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cstdlib>

//For classes, you can do function documentation at the top for better readability


/******* Function documentation *******/

//Function: int getNum() const;
//Desc: This function returns the numerator value
//Pre: None
//Post: The numerator value will be returned to the calling object

//Function: int getDen() const;
//Desc: This function returns the denominator value
//Pre: None
//Post: The denominator value will be returned to the calling object

//Function: setNum(const int value);
//Desc: This function sets the value for the numertor
//Pre: None
//Post: The numerator value of the calling object will be set to value

//Function: setDen(const int value);
//Desc: This function sets the value for the denominator
//Pre: The value cannot be zero
//Post: The denominator value of the calling object will be set to value; exit with error if value is zero.

class Fraction
{
	public:

		int getNum();
		int getDen();


		/* Mutator functions */
		void setNum(const int value);
		void setDen(const int value);

		/* Member functions */
		void getUserInput();
		void print() const;
		Fraction reciprocal() const;


		//Notice that this is now the friend function. Not really a part of the class but can access ALL of the private data.
		friend Fraction multFracs(const Fraction &lhs, const Fraction &rhs);


	private:
		int m_num;
		int m_den;
		bool m_isWhole;

		bool getIsWhole() const;
		void setIsWhole(const bool value);
};

Fraction multFracs(const Fraction &lhs, const Fraction &rhs); //Putting this here is optional, but helpful.

#endif