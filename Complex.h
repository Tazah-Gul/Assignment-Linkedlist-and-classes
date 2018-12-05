#include <iostream>
using namespace std;

class Complex
{
public:
	float real;
	float imag;
	Complex *ptr;

	Complex operator + (Complex c);
	Complex operator - (Complex c);
	Complex operator * (Complex c);
	Complex operator / (Complex c);
	void print();
};