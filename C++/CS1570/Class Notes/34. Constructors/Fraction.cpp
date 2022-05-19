#include "Fraction.h"

using namespace std;

Fraction::Fraction(const int num, const int den)
{
	m_num = num;
	setDen(den);
}

int Fraction::getNum() const
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

Fraction Fraction::reciprocal() const
{
	Fraction reciprocal;
	reciprocal.m_num = m_den;
	reciprocal.m_den = m_num;
	return reciprocal;
}

Fraction multFracs(const Fraction &lhs, const Fraction &rhs)
{
	Fraction result;
	result.setNum(lhs.getNum() * rhs.getNum());
	result.setDen(lhs.getDen() * rhs.getDen());

	return result;
}
