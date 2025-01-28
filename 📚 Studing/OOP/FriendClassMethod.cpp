#include <iostream>
#include <string>

using namespace std;

// Дружественный метод класса.

class Apple;
class Human;


class Human
{
public:
	// Прототип оставляется в классе
	void TakeApple(Apple& apple);
	void EatApple(Apple& apple)
	{
		// Нет доступа к apple.weight и apple.color
	}
};

class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;
	
	friend void Human::TakeApple(Apple &apple);
};


int main()
{
	Apple apple(150, "Red"); 
	Human human;
	human.TakeApple(apple);

    return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "Take apple " << "weight = " << apple.weight << ", color = " << apple.color << endl;
}
// Метод выносится если большая реализация
