#include <iostream>

using namespace std;

class Complex
{
	public:
		void set(float real, float imaginary)
		{
			Real = real;
			Imag = imaginary;
		}

		void display() const
		{
			cout << '(' << Real << ", " << Imag << ')' << "\n\n";
		}

		Complex sum(Complex C)
		{
			Complex c3;

			c3.Real = Real + C.Real;
			c3.Imag = Imag + C.Imag;

			return c3;
		}
	
	private:
		float Real;
		float Imag;		
};

int main(void)
{
	float real;
	float imag;

	Complex c1;
	Complex c2;

	cout << "Enter the real part of the first complex number: "; cin >> real;
	cout << "Enter the imaginary part of the first complex number: "; cin >> imag;
	c1.set(real, imag);
	cout << "The first complex number is: "; c1.display();

	cout << "Enter the real part of the second complex number: "; cin >> real;
	cout << "Enter the imaginary part of the second complex number: "; cin >> imag;
	c2.set(real, imag);
	cout << "The second complex number is: "; c2.display();

	cout << "After adding the two complex numbers, the result is "; (c1.sum(c2)).display();
															// Yes, this line above is a disaster.
	return 0;
}