//Christian Delaune
//10 Assignment - C++ Pointers

// Tells who library to use
#include <iostream>

// Shortens code
using namespace std;


// allows the passing of variables
void swapNoPtr(int x, int y);
void swapWithPtr(int* x, int* y);
int* returnPtr(int x);

//main function
int main()
{
    //variables
	int num1 = 5;
	char char1 = 'a';

	int* ptrNum1 = &num1;
	char* ptrChar1 = &char1;
    
    //what the computer states
	cout << "Location: " << ptrNum1 << "\tData: " << (*ptrNum1) << endl;

	(*ptrNum1) = 15;

	cout << "Location: " << ptrNum1 << "\tData: " << (*ptrNum1) << endl;

	int x = 5, y = 10;
	cout << "x = " << x << "\ty = " << y << endl;
	swapNoPtr(x, y);
	cout << "x = " << x << "\ty = " << y << endl;

	cout << "x = " << x << "\ty = " << y << endl;
	swapWithPtr(&x, &y);
	cout << "x = " << x << "\ty = " << y << endl;

	cout << "The address of num1 is " << returnPtr(num1) << endl;
	return 0;
}

void swapNoPtr(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swapWithPtr(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int* returnPtr(int x)
{
	return &x;
}