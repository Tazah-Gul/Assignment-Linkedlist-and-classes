
#include "linkedlist.h"

int main()
{
	Complex c1, c2, c3;
	c1.real = 4;
	c1.imag = 5;
	c2.real = 3;
	c2.imag = -3;
	c3.real = 4;
	c3.imag = 3;
	int position = 4,position2=2;//position2 is for value at position and insert after position
	linkedlist l1;

	Complex sum = c1 + c2;
	l1.insertatstart(sum);
	l1.traverse();
	Complex Difference = c1 - c3;
	l1.insertatend(Difference);
	l1.traverse();
	Complex Product = c2 * c3;
	l1.insertatend(Product);
	l1.traverse();
	Complex Divide = c1 / c3;
	l1.insertatend(Divide);
	l1.traverse();
	l1.deleteatanyposition(position);
	l1.traverse();
	l1.deleteatend();
	l1.traverse();
	system("pause");
	return 0;
}