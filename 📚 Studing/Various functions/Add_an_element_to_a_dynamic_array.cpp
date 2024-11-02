#include <iostream>
using namespace std;

/*
*	Добавить элемент в массив
*	Реализация функции: push_back()
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

void push_back(int *&arr, int &size, const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;

	delete[] arr;
	arr = newArray;
}

void main()
{
	srand(time(NULL));
	int size = 5;
	int* arr = new int[size];
	
	FillArray(arr, size);
	ShowArray(arr, size);

	push_back(arr, size, 10);
	ShowArray(arr, size);

	delete[] arr;
}