//#include <iostream>

//using namespace std;


//A template function replaces a specific type with a generic type in a code
template <typename T> //This line must be created before every template; more types can be added using "template <typename T, U>"
void Swap(T &val1, T &val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
    return;
}

//Without a function template you would have to create a Swap() function for all different types that exist in C++.

//The data type of T isn't determined until data is passed into the code.

int main()
{
	int a = 10;
	int b = 7;
	Swap(a, b);

	return 0;
}