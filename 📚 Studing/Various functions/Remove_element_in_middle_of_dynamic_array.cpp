#include <iostream>
using namespace std;

/*
*	Удаление элемента в середине динамического массива
*	Реализация функции: pop_gap() 
*/

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
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

void pop_gap(int*& arr, int& size, const int index)
{
	int* newArray = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		if (i == index)
			newArray[i] = arr[i+1];
		if (i < index)
			newArray[i] = arr[i];
		if (i > index)
			newArray[i] = arr[i+1];

	}
	size--;

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
	pop_gap(arr, size, 3);
	ShowArray(arr, size);


	delete[] arr;
}