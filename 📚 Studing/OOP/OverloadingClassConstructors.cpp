#include <iostream>
#include <string>

using namespace std;

/*
*	Перегрузка конструкторов класса
*/

class Point
{
private:
	int x;
	int y;
public:
	// Перегурзка конструктора для int, float, double, bool.
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	Point(float valueX, float valueY)
	{
		x = valueX;
		y = valueY;
	}	
	Point(double valueX, double valueY)
	{
		x = valueX;
		y = valueY;
	}	
	Point(bool valueX, bool valueY)
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

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

int main()
{
	Point a(0.21, 1.43);
	a.Print();	

	return 0;
}