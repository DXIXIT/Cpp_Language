#include <iostream>

using namespace std;

struct Fries
{
	bool m_salted; //m_(var_name)
	string m_potatoType;
};

struct Hamburger
{
	int m_numLettuce;
	int m_numPatties;
	int m_numCheese;
	int m_numOnions;
	Fries m_fries;
};

int main(void)
{
	Fries sweetPotatoFries = {true, "sweet potato"};
	Hamburger cheesyHamburger = {2, 6, 30, 10, sweetPotatoFries};
	//cheesyHamburger.m_fries = sweetPotatoFries

	cout << cheesyHamburger.m_numCheese << endl;
	cout << (cheesyHamburger.m_fries).m_salted << endl;

	return 0;
}