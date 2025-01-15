#include <iostream>
#include <string>

using namespace std;

/* 
*	Перегрузка математических операторов
*/

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	Point operator +(const Point& other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}

	int GetX()
	{
		return x;
	}
	void SetX(int valueX)
	{
		x = valueX;
	}
	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY * 2;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	Point f(1, 9);
	Point g(4, 12);

	Point d = f + g;

	return 0;
}