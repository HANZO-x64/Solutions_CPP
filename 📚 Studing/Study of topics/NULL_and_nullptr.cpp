#include <iostream>
#include <string>
using namespace std;

// Работа с динамической памятью. NULL и nullptr

void main()
{
	int* pA = new int;
	*pA = 10;
	cout << *pA << endl;
	delete pA;

	/*
	* Старое решение:
	*	pA = NULL;
	*	if (pA != NULL)
	*	{
	*		cout << pA << endl;
	*	}
	*/

	// Новое:
	pA = nullptr;
	if (pA != nullptr)
	{
		cout << pA << endl;
	}
	delete pA;
}