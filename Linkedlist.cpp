#include "linkedlist.h"

	void linkedlist :: insertatstart(Complex val)
	{
		Complex *A = new Complex;
		A->ptr = head;
		head = A;
		A->real = val.real;
		A->imag = val.imag;
	}
	void linkedlist :: insertatend(Complex val)
	{
		Complex *A = new Complex;
		Complex *temp = new Complex;
		temp = head;
		while (temp->ptr != NULL)
		{
			temp = temp->ptr;
		}
		A->real = val.real;
		A->imag = val.imag;
		A->ptr = NULL;
		temp->ptr = A;
	}
	void  linkedlist::deleteatanyposition(int position)
	{
		Complex*temp = new Complex;
		Complex*temp2 = new Complex;
		temp = head;
		temp2 = head;
		for (int i = 0; i < position - 1; i++)
		{
			temp2 = temp;
			temp = temp->ptr;
		}
		temp = temp->ptr;
		delete temp2->ptr;
		temp2->ptr = temp;
	}
	void  linkedlist::valueatposition(int position)
	{
		Complex*temp = new Complex;
		temp = head;
		for (int i = 0; i < position - 1; i++)
		{
			temp = temp->ptr;
		}
		if (temp->imag < 0)
			cout << temp->real << temp->imag << "i" << "        ";
		else
			cout << temp->real << "+" << temp->imag << "i" << "        ";
		cout << endl;
	}
	void linkedlist::insertafterposition(Complex val, int position)
	{
		Complex*A = new Complex;
		Complex*temp = new Complex;
		temp = head;
		for (int i = 0; i < position - 1; i++)
		{
			temp = temp->ptr;
		}
		A->ptr = temp->ptr;
		temp->ptr = A;
		A->real = val.real;
		A->imag = val.imag;
		temp = NULL;
	}
	void linkedlist::deleteatend()
	{
		Complex*A = new Complex;
		Complex*temp = new Complex;
		Complex*temp2 = new Complex;
		temp = head;
		temp2 = head;
		while (temp->ptr != NULL)
		{
			temp2 = temp;
			temp = temp->ptr;
		}
		delete temp;
		temp2->ptr = NULL;
	}
	void  linkedlist::traverse()
	{
		Complex*temp = new Complex;
		temp = head;
		while (temp != NULL)
		{
			if (temp->imag < 0)
				cout << temp->real << temp->imag << "i"<<"        ";
			else
				cout << temp->real << "+" << temp->imag << "i"<<"        ";
			temp = temp->ptr;
		}
		cout << endl;
		
	}

