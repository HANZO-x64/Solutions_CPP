#include <iostream>
#include <string>

using namespace std;

/*
*	Модификаторы доступа
*/

class Point
{
public: // Доступна всегда.
	int x = 0; 

protected: // Доступно только при наследовании.
	int y = 0;

private: // Не доступно ни где, кроме внутри класс и др.фун.
	int z = 0;
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point a;

	return 0;
}