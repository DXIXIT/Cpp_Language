#ifndef FRACTION_H
#define FRACTION_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

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

using namespace std;

class Fraction
{
	public:
		/* Constructors */
		Fraction();
		Fraction(const int num, const int den);

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

		friend Fraction multFracs(const Fraction &lhs, const Fraction &rhs);
		
		//Operator overloads:
		Fraction operator * (const Fraction &rhs) const;
		Fraction &operator *= (const Fraction &rhs);
		
		friend ostream &operator << (ostream &os, const Fraction &rhs);

	private:
		int m_num;
		int m_den;
		
		bool m_isWhole; //If the fraction is equal to a whole number
		bool getIsWhole() const;
		void setIsWhole(const bool value);
};

#endif