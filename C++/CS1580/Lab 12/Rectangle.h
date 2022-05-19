#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle
{
	public:
		Rectangle();
		Rectangle(const double length, const double width);
		Rectangle &operator += (const Rectangle &rect);
		Rectangle operator + (const Rectangle &rect);
		Rectangle &operator -= (const double dec);
		Rectangle operator - (const double dec);

		double getLength();
		double getWidth();

	private:
		double m_length;
		double m_width;
};

#endif