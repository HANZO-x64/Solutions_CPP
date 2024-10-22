#include <iostream>

using namespace std;

/* Указатели и массивы.*/

float main()
{
	int const SIZE = 5;
	int arr[SIZE]{4,6,9,11,13};

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "===============================" << endl;

	int* pArr = arr;

	cout << "arr\t" << arr << endl;
	cout << "pArr\t" << pArr << endl;

	cout << "===============================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArr + i) << endl;
	}

	return 0;
}