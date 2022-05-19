#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

using namespace std;

class Element
{
	public:
		string Name; //Unusual to have public member variables, but you can do this.
		void setmass(float a);

		// Accessor functions:
		float getmass() const; /* The const means that the method cannot modify a private variable.
								  This is different from declaring const at the front.*/		
		int getProtons() const;
		int getNeutrons() const;

	private:
		float amu;
		int protons;
		int neutrons;

};

#endif