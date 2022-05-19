// Programmer: Kshitij Sharma
// MST Username: kssgy4
// Instructor Name: Mukund Telukunta
// Section: 307
// Date: 4/27/22
// File: 'Lab 13'.cpp
// Purpose: Work with template classes

#include "Complex.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

int main(void)
{
	float a = 30.3;
	float b = 20.7;
	Calculator<float> calcFloat(a, b);
	cout << "********** Floating point calculator **********" << '\n';
	cout << "Two numbers are: " << a << ", " << b << '\n';
	cout << "Float addition result: " << calcFloat.Add() << '\n';
	cout << "Float subtraction result: " << calcFloat.Subtract() << "\n\n";

	int c = 100;
	int d = 30;
	Calculator<int> calcInt(c, d);
	cout << "********** Integer calculator **********" << '\n';
	cout << "Two numbers are: " << a << ", " << b << '\n';
	cout << "Integer addition result: " << calcInt.Add() << '\n';
	cout << "Integer subtraction result: " << calcInt.Subtract() << "\n\n";

	Complex e(2, 4);
	Complex f(1, 2);
	Calculator<Complex> calcComplex(e, f);
	cout << "********** Complex number calculator **********" << '\n';
	cout << "Two numbers are: " << e.display() << ", " << f.display() << '\n';
	cout << "Complex number addition result: " << (calcComplex.Add()).display() << '\n';
	cout << "Complex number subtraction result: " << (calcComplex.Subtract()).display() << "\n\n";
	
	return 0;
}