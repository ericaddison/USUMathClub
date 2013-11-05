#include <iostream>

using namespace std;

int funcy(int &x)
{
	return x++;
}

int funcyBad(int x)
{
	return x++;
}

void funcySafe(const int &x)
{
	//x++;		// this will generate a compiler error
}

class theClass
{
	public:
		theClass(int &x) : ref(x) {};
		int &ref;
};


int main()
{

	// a reference is like a pointer, but not as tricky!
	// a reference is like an alias, or a nickname for a variable
	// you create a reference with the & operator (but different than & from pointer stuff!)
	int x=10;
	int &rX = x;

	// now rX is a reference for x. It's like a pointer in that it still accesses the same value as x, but now there's no funny address business, and we can just use rX like a normal old variable;

	cout << "\nThe value of x  is: " << x << endl <<
			"The value of rX is: " << rX << endl;

	// change one to see the change in the other
	rX = 25;
	cout << "\nChanged rX..\n" <<
			"The value of x  is: " << x << endl <<
			"The value of rX is: " << rX << endl;
/*
	// using a reference to alter the value of an input argument
	cout << "\ntest test: x = " << x << endl;
	funcy(x);
	cout <<	"Called funcy(x): x = " << x << endl;
	funcyBad(x);
	cout <<	"Called funcyBad(x): x = " << x << endl;

	// passing by reference is a more efficient way to pass argument to functions because the program does not have to make a copy of the object, which is particularly nice for large objects (like a 1,000,000 x 1,000,000 matrix). But what if you want to protect the variable from editing? use the const keyword:
	funcySafe(x);
	cout <<	"Called funcySafe(x): x = " << x << endl;
	

	// we can even set a reference in a class to refer to some outside variable:
	theClass C(x);
	cout << "\nObject C has data value: ref = " << C.ref << endl;
	x=100;
	cout << "Changed x! Now C has: ref = " << C.ref << endl;
	C.ref = -10;
	cout << "Changed C.ref! Now x has: x = " << x << endl;


*/	

return 0;
}
