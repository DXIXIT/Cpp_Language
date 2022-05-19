#include "Element.h"

//In order to create an implementation file, we need to use a scope resolution operator instead of using a dot notation.

float Element::getmass() const
{
	return amu;
}

int Element::getProtons() const
{
	return protons;
}