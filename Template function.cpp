#include <iostream>

using namespace std;

template <typename T>
void printArray(T arr, int size)
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));

	int sizeFirstArr = rand() % 10, sizeTwoArr = rand() % 100;
	int* myInts = new int[sizeFirstArr];
	double* myDoubles = new double[sizeTwoArr];
	printArray(myInts, sizeFirstArr);
	printArray(myDoubles, sizeTwoArr);
	return 0;
}