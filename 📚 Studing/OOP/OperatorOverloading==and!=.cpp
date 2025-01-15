#include <iostream>
#include <string>

using namespace std;

/* 
*	Перегрузка оператора == и !=
*/

class Point
{
private:
	int x;
	int y;
public:

	bool operator ==(const Point & other)
	{
		/*
		if (this->x == other.x && this->y == other.y)
		{
			cout << "true" << endl;
			return true;
		}
		else
		{
			cout << "false" << endl;
			return false;
		}
		*/
		// Можно короче:
		return this->x == other.x && this->y == other.y; 
	}

	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
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

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point f(1, 9);
	Point g(1, 9);

	//bool result = f == g;
	bool result = f != g;

	return 0;
}