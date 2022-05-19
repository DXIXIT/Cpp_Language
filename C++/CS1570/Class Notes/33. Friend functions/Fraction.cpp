#include "Fraction.h"

using namespace std;

int Fraction::getNum()
{
	return m_num;
}

int Fraction::getDen()
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

Fraction Fraction::reciprocal() const
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
	result.setNum(lhs.m_num * rhs.m_num); //Notice how we don't use functions now. Check the header file.
	result.setDen(lhs.m_den * rhs.m_den);

	/*
	So, let's jump back into what was happening here.
	- The only way to access the member variables of the class is to use getter functions.
	  However, they don't work well if the const qualifiers are not compatible.
	- So, we have created this a friend function to escalate its priveleges to access
	  private variables, and directly access variables without having to use getter and setter functions
	  and their tedious incompatibilities.
	- However, friend functions must be used carefully. They are a security risk.

	*/

	return result;
}