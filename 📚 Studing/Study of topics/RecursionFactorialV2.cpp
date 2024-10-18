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

	cout << n << "! = " << Factorial(n) << endl;	
}