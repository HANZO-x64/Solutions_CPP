#include <iostream>

using namespace std;

/* 
*	Передача аргументов по указателю 
*	Как вернуть два и более значения из функции
*/

void Fun(int *pA, int *pB, int *pC)
{
	(*pA)++;
	(*pB) = 100;
	(*pC) = -20;
}

float main()
{
	int a = 0, b = 0, c = 0;

	cout << "a =\t" << a << endl;
	cout << "b =\t" << b << endl;
	cout << "c =\t" << c << endl;
	cout << "======================" << endl;

	Fun(&a, &b, &c);

	cout << "a = \t" << a << endl; 
	cout << "b = \t" << b << endl;
	cout << "c = \t" << c << endl;


	return 0;
}