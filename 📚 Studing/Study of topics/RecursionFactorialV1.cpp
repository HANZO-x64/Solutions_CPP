#include <iostream>

using namespace std;

/* Рекурсия Факториал */
/* N! = N * (N - 1)! */

int Factorial(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * Factorial(N - 1 );
}

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	
	cout << "Факториал N = ";
	cin >> n;

	// Для примера:
	// n = 4 => 4! = 1*2*3*4 = 24
	// n = 5 => 5! = 1*2*3*4*5 = 120
	// n = 6 => 6! = 1*2*3*4*5*6 = 720
	cout << n << "! = " << Factorial(n) << endl;	
}