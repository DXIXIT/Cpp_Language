#ifndef FRACTION_H
#define FRACTION_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
A constructor is a function that (always) has the same name as the class
- It is called automatically when you create a class object to initialize the member vars
- Constructors have no return type
- They are always public, obviously, since they need to be called by the user
- The default constructor is always run whenever an instance of class is created, though it
  does nothing and doesn't really show up in the code.
- The default constructor will cease to exist once we write any constructor for a class
- A constructor with arguments is called a parameterized constructor.
*/

class Fraction
{
	public:
		/* Constructors */
		Fraction();
		Fraction(const int num, const int den);

		/*
		Inline functions:
		- Reduce the need for a separate function implementation (no Fraction.cpp!!!)
		- Executed much faster than regular functions during run time
		- Commonly used in constructors, but can be used for non-constr.
		*/

		/* Possible inline functions:
		// Method 1:
		Fraction(const int num, const int den)
		{
				setNum(num); setDen(den);
		}
		// Method 2 (initialization list):
		Fraction(const int num, const int den): m_num(num), m_den(den){};

		//Method 3 (mixture):
		Fraction(const int num, const int den): m_num(num)
		{
			setDen(den);
		}
		*/


		/* Accessor functions */
		int getNum() const;
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

Fraction multFracs(const Fraction &lhs, const Fraction &rhs);

#endif