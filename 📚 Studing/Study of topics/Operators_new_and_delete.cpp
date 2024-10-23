#include <iostream>

using namespace std;

// Работа с динамической памятью. Операторы выделения памяти new и delete.

void main()
{
	int* pA = new int;
	*pA = 10;
	cout << *pA << endl;
	delete pA;
	   
}