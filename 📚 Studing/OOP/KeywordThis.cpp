#include <iostream>
#include <string>

using namespace std;

/*
*	Ключевое слово this
*	this - по сути указаетль объект на самого себя,
*	т.е это знание объекта о том где он находится (адрес).
*	this снаружи нельзя использовать, только внутри класса.
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
		cout << " constructor: " << this << endl;

		//this->GetX
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
	void SetY(int y)
	{
		// Теперь будет 5, а не 0
		this->y = y;
	}

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

int main()
{
	Point a;
	a.SetY(5);
	a.Print();

	return 0;
}