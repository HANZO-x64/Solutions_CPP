#include <iostream>
#include <string>
using namespace std;

/*
*	Строки в с++
*	Строковый массив с++
*	Терминальный ноль \0
*	Функция strlen()
*/

void main()
{
	setlocale(LC_ALL, "Russian");

	char string[] = {'F', 'U', 'N', '!', '\0'};

	cout << "Сообщение в массиве char: " << string << endl;
	cout << "Длина массива: " << strlen(string) << ". Используя функцию strlen()." << endl;

}