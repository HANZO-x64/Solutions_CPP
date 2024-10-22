#include <iostream>

using namespace std;

/*
*	Ссылочные параметры. Передача аргументов по ссылке.
*/

void Fun(int a)
{
	a = 1;
}

// Ссылочный параметр:
void Fun2(int& aRef)
{
	aRef = 2;
}

void Fun3(int* pA)
{
	*pA = 3;
}

void main()
{
	int value = 5;
	cout << "value =\t" << value << endl;
	cout << "= = =\nFun =\t";
	Fun(value);
	cout << "value =\t" << value << endl;
	cout << "Fun2 =\t";
	Fun2(value);
	cout << "value =\t" << value << endl;
	cout << "Fun3 =\t";
	Fun3(&value);
	cout << "value =\t" << value << endl;
}