#include <iostream>
#include <string>

using namespace std;

// Конкатенация строк

void main()
{
	setlocale(LC_ALL, "ru");

	string str1 = "Иванов", str2 = "Иван", str3 = "Иванович", result;

	result = "Фамилия:\t" + str1 + "\nИмя:\t\t" + str2 + "\nОтчество:\t" + str3;

	cout << result << endl;
}