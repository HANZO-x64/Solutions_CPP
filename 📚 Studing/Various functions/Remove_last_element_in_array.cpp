#include <iostream>
using namespace std;

/*
*	Удаление последнего элементв в массиве
*	Реализация функции: pop_back()
*/

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void pop_back(int *&arr, int &size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
		newArray[i] = arr[i];

	delete[] arr;
	arr = newArray;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int size = 6;
	int* arr = new int[size];
	
	cout << "Было:" << endl;
	FillArray(arr, size);
	ShowArray(arr, size);

	cout << "Стало:" << endl;
	pop_back(arr, size);
	ShowArray(arr, size);


	delete[] arr;
}