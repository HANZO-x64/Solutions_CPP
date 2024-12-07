#include <iostream>
#include <string>

using namespace std;

/*
*	Инкапсуляция get и set
* 
*	ПРАВИЛО:
*	В ООП принято, чтобы данные были отделены от методов,
*	т.е пересенны лежащие в классе, которые отвечают за свойство класа,
*	были отделены от функций этого класса.
*/

class Point
{
private:
	// Из правила выше, нельзя предоставлять прямой доступ к свойствам:
	int x = 0; 
	int y = 0; 
	// Это нарушает правила инкупсуляции.
	// Исключение, возможны, но это обычно маленькие классы, которые входят в более крупные.
	// и свойства этих маленьких классов нигде больше не будут видны, кроме больших классов.
	// Но это отдельныве примеры...

public:
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
		y = valueY*2;
	}

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point a;
	a.SetX(6);
	a.SetY(5);
	a.Print();

	int result = a.GetX();

	cout << "Result = " << result << endl;

	return 0;
}