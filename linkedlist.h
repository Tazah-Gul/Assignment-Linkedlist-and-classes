#include "Complex.h"

class linkedlist
{
public:
	Complex*head = NULL;
	Complex*ptr=NULL;
	void insertatstart(Complex val);
	void insertatend(Complex val);
	void deleteatanyposition(int position);
	void valueatposition(int position);
	void insertafterposition(Complex val, int position);
	void deleteatend();
	void traverse();
};