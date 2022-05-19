#ifndef CALCULATOR_H
#define CALCULATOR_H

template <class T>
class Calculator
{
	private:
		T left_val;
		T right_val;
	
	public:
		Calculator(T lftVal, T rhtVal);
		T Add();
		T Subtract();
};

#include "Calculator.hpp"
#endif