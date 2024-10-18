#include <iostream>

using namespace std;

float main()
{
	srand(time(NULL));

	const int SIZE = 23;
	float arr[SIZE];
	
	float a;

	for (int i = 0; i < SIZE; )
	{
		a = rand() % 2000;
		//if (a >= 1000) {
			arr[i] = a;
			i++;
		//}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}