#include <iostream>

using namespace std;

// Таблица символов ASCII

void main()
{
	setlocale(LC_ALL, "ru"); // в таблице, после 127 строчки идет ру алфавит

	// Вывод таблицы ASCII в консоль.
	for (int i = 0; i < 255; i++)
	{
		cout << "code = " << i << "\t" << "char = " << char(i) << endl;
	}
}