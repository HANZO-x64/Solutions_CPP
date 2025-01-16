#include <iostream>
#include <string>

using namespace std;

/* 
*	Перегрузка инкремента и декремента
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

	// Преф
	Point& operator ++()
	{
		this->x++;
		this->y += 1;

		return *this;
	}
	Point& operator --()
	{
		this->x--;
		this->y--;

		return *this;
	}
	// Пост
	Point& operator ++(int value)
	{
		Point temp(*this);

		this->x++;
		this->y++;

		return temp;
	}
	Point& operator --(int value)
	{
		Point temp(*this);

		this->x--;
		this->y--;

		return temp;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point f(1, 2);

	Point b = f++;

	return 0;
}