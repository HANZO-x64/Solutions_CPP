#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{	
	setlocale(LC_ALL, "Russian");

	float result = 0, a, b, c;
	
	cout << "Метод бисекции" << endl;
	a = 4; b = 5;
	for (int i = 0; i < 12; ++i) 
	{
		cout << "Шаг " << i << endl; 
		cout << "[" << a << " ; " << b <<"]:" << endl; // Интервал

		// Находим с
		c = (a + b) / 2;
		cout << "c = " << fixed << setprecision(10) << c << endl;

		// Проверяем на +
		result = (2 * log10(c)) - (c / 2) + 1;
		cout << "(2 * log10(" << c << ")) - (" << c <<" / 2) + 1  => Результат: " << result << endl;

		// присваеваем b = c
		b = c;
		cout << "b = c = " << fixed << setprecision(10) << c << endl;

		// Повоторяем но уже как интервал [a ; b(c)]
		cout << "[" << a << " ; " << b << "]:" << endl;
		c = (a + b) / 2;
		cout << "c = " << c << endl;

		// Проверяем на +
		result = (2 * log10(c)) - (c / 2) + 1;
		cout << "(2 * log10(" << c << ")) - (" << c << " / 2) + 1  => Результат: " << result << endl;

		// Присваеваем a = c
		a = c;
		cout << "a = c = " << c << endl;

		cout << "\n——————————————————————————" << endl;
	}

	return 0;
}
