#include <iostream>

using namespace std;

/* Указатели и массивы.*/

float main()
{
	int const SIZE = 5;
	int arr[SIZE]{4,6,9,11,13};
	
	// Тут выдаст ошибку, т.к размермер массива = 5, а мы выйдим на 10 элемент.
	cout << (arr + 10) << endl;


	return 0;
}