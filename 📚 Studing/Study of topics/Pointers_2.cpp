#include <iostream>

using namespace std;

// написать функцию, которую принммает 2 значения и меняет их местами.

void Swap(int *pA, int *pB)
{
	int temp = *pA;
	(*pA) = *pB;
	(*pB) = temp;
}

float main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите a... ";
	cin >> a;
	cout << "Введите b... ";
	cin >> b;
	cout << "============" << endl;
	Swap (&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}