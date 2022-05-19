#include "Complex.h"

using namespace std;

Complex::Complex(const int real, const int imaginary)
{
	m_real = real;
	m_imaginary = imaginary;
}

int Complex::getReal() const
{
	return m_real;
}

int Complex::getImag() const
{
	return m_imaginary;
}

Complex Complex::operator + (const Complex &rhs)
{
	int realPart = rhs.m_real + m_real;
	int imagPart = rhs.m_imaginary + m_imaginary;

	Complex newNum(realPart, imagPart);

	return newNum;
}

Complex Complex::operator - (const Complex &rhs)
{
	float realPart = rhs.m_real - m_real;
	float imagPart = rhs.m_imaginary - m_imaginary;

	Complex newNum(realPart, imagPart);

	return newNum;
}

string Complex::display() const
{
	return ("(" + to_string(m_real) + ", " + to_string(m_imaginary) + "i" + ")");
}