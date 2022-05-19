#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
	private:
		int m_real;
		int m_imaginary;
	public:
		Complex(const int real = 0, const int imaginary = 0);
		
		int getReal() const;
		int getImag() const;

		Complex operator + (const Complex &rhs);
		Complex operator - (const Complex &rhs);
		
		string display() const;

};
#endif