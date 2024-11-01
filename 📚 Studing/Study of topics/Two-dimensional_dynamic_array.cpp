#include <iostream>
#include <string>

using namespace std;

// Двумерный динамический массив

void main()
{
	srand(time(NULL));
	int rows = 0, cols = 0;
	cout << "Please, enter the rows: ";
	cin >> rows;
	cout << "Please, enter the columns: ";
	cin >> cols;

	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int [cols];
	}
	///////////////////////////////////////

	for (int  i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 300;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	///////////////////////////////////////
	for (int i = 0; i < rows; i++)
	{
		delete [] arr[i];
	}
	delete [] arr;
}