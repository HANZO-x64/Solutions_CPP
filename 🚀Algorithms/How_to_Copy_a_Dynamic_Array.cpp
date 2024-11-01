#include <iostream>
#include <string>

using namespace std;

// Как скопировать динамический массив С++

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

void main()
{
	srand(time(NULL));
	
	int firstSize = 0, secondSize = 0;
	cout << "Enter the first size = ";
	cin >> firstSize;
	cout << "Enter the first size = ";
	cin >> secondSize;
	int* firstArray = new int[firstSize];
	int* secondArray = new int[secondSize];

	//////////////////////////////////////////

	FillArray(firstArray, firstSize);
	FillArray(secondArray, secondSize);

	cout << "\t= = = Show array = = =" << endl;
	cout << "First Array =\t";
	ShowArray(firstArray, firstSize);
	cout << "Second Array =\t";
	ShowArray(secondArray, secondSize);

	cout << "\n======================\nchange:" << endl;

	delete [] firstArray;

	firstArray = new int[secondSize];
	for  (int i = 0; i < secondSize; i++)
	{
		firstArray[i] = secondArray[i];
	}


	cout << "\t= = = Show array = = =" << endl;
	cout << "First Array =\t";
	ShowArray(firstArray, secondSize);
	cout << "Second Array =\t";
	ShowArray(secondArray, secondSize);

	//////////////////////////////////////////
	delete[] firstArray;
	delete [] secondArray;
}