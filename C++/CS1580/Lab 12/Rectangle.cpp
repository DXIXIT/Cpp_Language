#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(){}

Rectangle::Rectangle(const double length, const double width)
{
	m_length = length;
	m_width = width;
}

Rectangle &Rectangle::operator += (const Rectangle &rect)
{
	m_length += rect.m_length;
	m_width += rect.m_width;
	return *this;
}

Rectangle Rectangle::operator + (const Rectangle &rect)
{
	Rectangle newRect;
	newRect.m_length = m_length + rect.m_length;
	newRect.m_width = m_width + rect.m_width;

	return newRect;
}

Rectangle &Rectangle::operator -= (const double dec)
{
	m_length -= dec;
	m_width -= dec;
	return *this;
}

Rectangle Rectangle::operator - (const double dec)
{
	Rectangle newRect;
	newRect.m_length = m_length - dec;
	newRect.m_width = m_width - dec;

	return newRect;
}

double Rectangle::getLength()
{
	return m_length;
}

double Rectangle::getWidth()
{
	return m_width;
}