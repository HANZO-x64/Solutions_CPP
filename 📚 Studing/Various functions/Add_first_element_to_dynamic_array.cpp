#include <iostream>
using namespace std;

/*
*	Добавление первого элемента в динамический массив
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

void push_back(int *&arr, int &size, const int value)
{
	int* newArray = new int[size + 1];
	newArray[0] = value;

	for (int i = 1; i < size + 1; i++)
		newArray[i] = arr[i - 1];

	delete[] arr;
	arr = newArray;
	size++;
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
	push_back(arr, size, 111);
	ShowArray(arr, size);


	delete[] arr;
}