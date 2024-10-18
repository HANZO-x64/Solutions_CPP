#include <iostream>

using namespace std;

/* Рекурсия */

int Fun(int a) 
{
	if (a < 1)
		return 0;

	a--;
	cout << a << endl;
	return 	Fun(a);
}

int main()
{
	setlocale(LC_ALL, "ru");
	Fun(5);
	
}