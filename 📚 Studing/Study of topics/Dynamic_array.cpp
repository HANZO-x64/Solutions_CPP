#include <iostream>
#include <string>

using namespace std;

// Динамический массив

void main()
{
	srand(time(NULL));

	int size = 0;
	cout << "Please, input the array size: ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		cout << arr + i << endl;

	}

	delete [] arr;
}