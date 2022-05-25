#include <iostream>

using namespace std;

char* operator ""_as_cstring(const char* lit, unsigned long len)
{
	char* rv = new char[len];
	for (unsigned long i = 0; i < len; i++)
	{
		rv[i] = lit[i];
	}

	return rv;
}

int main(void)
{
	char* jeff = "whabat"_as_cstring;
	char* john = "Hello"_as_cstring;
	cout << (john > jeff);
	cout << '\n';
	
	return 0;
}