#include <iostream>
#include <string>

using namespace std;

/*
*	Метод класса
*	Функции класса
*/

class Human
{
public:
	int age = 0;
	int weight = 0;
	string name = "NoName\0";

	void Pring()
	{
		cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight;
	}

};
int main()
{
	setlocale(LC_ALL, "ru");

	Human firstHuman;
	Human secondHuman;

	firstHuman.age = 30;
	firstHuman.weight = 170;
	firstHuman.name = "Alex";

	secondHuman.age = 27;
	secondHuman.weight = 181;
	secondHuman.name = "Max";

	firstHuman.Pring();
	cout << "\n--------------" << endl;
	secondHuman.Pring();

	return 0;
}