#include <iostream>
#include <string>

using namespace std;

/*
*	ООП: Классы и объекты
* 	Класс - это пользовательский (как программист) тип данных, 
*	в котором оможно создатьс вой тип данных, попимо стандартных: int, double, char, bool...
*/

class Point
{
public:
	int x;
	int y;
	int z;
};

int main()
{
	setlocale(LC_ALL, "ru");
	Point a;

	a.x = 1;
	a.y = 2;
	a.z = 5;

	return 0;
}