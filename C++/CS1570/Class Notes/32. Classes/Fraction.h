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
	/*
	Usually, you never have public member variables, because having those would just destroy the
	purpose of data encapsulation, so there won't be any in this class. But it can be done.
	*/

		/* Accessor functions */
		int getNum() const; /*The const means that the method cannot modify a private variable.
								This is different from declaring const at the front. */
		int getDen() const;


		/* Mutator functions */
		void setNum(const int value);
		void setDen(const int value);

		/* Member functions */
		void getUserInput();
		void print() const;
		Fraction reciprocal() const;

	private:
		int m_num;
		int m_den;
		bool m_isWhole; //If the fraction is equal to a whole number

		bool getIsWhole() const;
		void setIsWhole(const bool value);
};

Fraction multFracs(const Fraction &lhs, const Fraction &rhs); //This is a global function, but it must be in the same header file.

#endif