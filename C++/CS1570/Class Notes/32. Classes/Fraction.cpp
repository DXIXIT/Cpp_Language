#include "Fraction.h"

using namespace std;

int Fraction::getNum() const /* Over here, the scope resolution operator is being used to create
								an implementation for the function prototype. */
{
	return m_num;
}

int Fraction::getDen() const
{
	return m_den;
}

void Fraction::setNum(const int value)
{
	m_num = value;
	return;
}

void Fraction::setDen(const int value)
{
	if (value != 0)
		m_den = value;
	else
	{
		cout << "In member function setDen():\n"
			 << "Attempting to set the denominator to be zero.\n"
			 << "Program will not exit.\n";
		exit(5);
	}
	return;
}

void Fraction::print() const
{
	cout << m_num << "/" << m_den;
	return;
}

void Fraction::getUserInput()
{
	int numInput; //Numerator input
	int denInput; //denominator input

	cout << "Enter the numerator: ";
	cin >> numInput;
	setNum(numInput);

	do
	{
		cout << "Enter the denominator (cannot be zero): ";
		cin >> denInput;
	} while (denInput == 0);

	setDen(denInput);

	return;
}

Fraction Fraction::reciprocal() const /* This function creates a new fraction object within this
										function that is local to this function, and then returns it. */
{
	Fraction reciprocal;
	reciprocal.m_num = m_den;
	reciprocal.m_den = m_num;
	return reciprocal;
}

//Notice in the following function no scope resolution operator is needed because it doesn't belong to any class.
Fraction multFracs(const Fraction &lhs, const Fraction &rhs)
{
	Fraction result;
	result.setNum(lhs.getNum() * rhs.getNum());
	result.setDen(lhs.getDen() * rhs.getDen());

	/*
	A few things to note here:
	- Notice that getNum and getDen are const functions.
	  This enables them to be used inside a function that takes const objects as parameters.
	- If we were to remove the const qualifier after the getNum() function (try it), it wouldn't run as shown above.
	- We will change this by making multFracs a "friend" function (next set of notes).
	*/

	return result;
}