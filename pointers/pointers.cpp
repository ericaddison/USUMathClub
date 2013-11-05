#include <iostream>

using namespace std;

class myClass
{
	public:
		myClass(int x=0, int d=0) {this->x = x; this->d = d;};
		int getX() {return x;};
		double getD() {return d;};	
	
	private:
		int x;
		double d;
};
	
int times2(int x)
{
	return 2*x;
}

int intFunction(int x, int (*f)(int))
{
	return f(x);
}

int main()
{

	// pointers to any data type can be decalred simply by adding an * to the declaration
	// note that these pointers don't point to anything, and so it is wise to initialize them to NULL
	int *pint = NULL;
	double *pdoub = NULL;
	myClass *pmc = NULL;	

	cout << "\nCreated pointers:\n" <<
			"pint points to the address:\t" << pint << endl <<
			"pdoub points to the address:\t" << pdoub << endl <<
			"pmc points to the address:\t" << pmc << endl;

/*
	// pointers can point to real data, where we get the address of a real data value by using the & operator 
	int x=10;
	double d=50;
	myClass c(x,d);

	// the & operator gives the address of the variable ... it actually acts like a function that returns a pointer to the variable, i.e. pint = getPointer(x);
	pint = &x;
	pdoub = &d;
	pmc = &c;

	cout << "\nReassigned pointers:\n" <<
			"pint points to the address:\t" << pint << endl <<
			"pdoub points to the address:\t" << pdoub << endl <<
			"pmc points to the address:\t" << pmc << endl;	

	// you can access the value stored at the address a pointer points to with the "dereferencing" operator *
	cout << "\nPointed to values\n" <<
			"pint points to the value:\t" << *pint << endl <<
			"pdoub points to the value:\t" << *pdoub << endl <<
			"pmc points to a myClass object with the int value:\t" << (*pmc).getX() << endl;		
	
	// special note about class pointers: you don't have to dereference a pointer-to-class to use it's public data and methods; you can use the -> operator instead!
	cout << "pmc points to a myClass object with the int value:\t" << pmc->getX() << endl;		
	
	// you can even make pointers to functions! this could be useful when building generic numeric algorithms that do work using a function
	// but just like how pointers to data must be specified by what type of data it is, pointer to functions must be specified by exactly what kind of function it is
	int (*pF)(int) = times2;

	cout << "\nUsing the function pointer gives a result of pF(2) = " << pF(2) << endl;

	cout << "Calling a function that takes a function pointer as an input: " << intFunction(5,pF) << endl;

	// pointers and arrays: remember arrays? they look like this
	int myArray[10] = {1,2,3,4,5,6,7,8,9,0};
	
	// here's a secret ... the variable "myArray" is really just a pointer to the beggining of the the array! That is, myArray is a pointer to the integer that lives at array position myArray[0]. Let's test it...
	cout << "\nmyArray[0] =\t" << myArray[0] << endl <<
			"*myArray =\t" << *myArray << endl;
	
	// this brings us to POINTER ARITHMETIC!
	// the reason pointers have an associated type, i.e. pointer-to-int or pointer-to-double, is because pointers need to know how much memory the thing they are pointing to takes up!
	// For that reason, you can add a number to a pointer and then it points to a new address which is some number of bytes forward of where it was, where the number of bytes depends on the type it points to. Let's try it
	cout << "\nmyArray[4] =\t" << myArray[4] << endl <<
			"*(myArray+4) = \t" << *(myArray+4) << endl;


	// so the square bracket index notation [i] is really just a convenience that hides pointer arithmetic!
	// we can even loop over an array with a pointer instead indices:
	for( int *pA = &(myArray[0]); ;pA++)
	{
		cout << "pA is pointing to the value: " << *pA << endl;
		cin.get();
	}

*/

	return 0;


}


