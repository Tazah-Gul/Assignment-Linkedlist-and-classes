#include "Complex.h"

Complex Complex :: operator + (Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;

		return temp;
	}

Complex Complex :: operator - (Complex c1)
	{
		Complex temp;
		temp.real = real - c1.real;
		temp.imag = imag - c1.imag;

		return temp;
	}
Complex Complex :: operator * (Complex c2)
	{
		Complex temp;
		temp.real = real * c2.real;
		temp.imag = imag * c2.imag;

		return temp;
	}
Complex Complex :: operator / (Complex c3)
	{
		Complex temp;
		try
		{
			if (c3.real == 0 || c3.imag == 0)
			{
				throw(0);
			}
		}
			catch (int)
			{ 
				cout << "You can not divide by zero:" << endl;
			}
		
		temp.real = real / c3.real;
		temp.imag = imag / c3.imag;

		return temp;
	}


	


