#include <iostream>
#include <string>

using namespace std;

/*
*	ООП: Классы и объекты 2
*/

class Human
{
public:
	bool isLife = 1;
	int heart = 10;
	string firstName = "\0";
	string secondName = "\0";
	int age = 0;
	double height = 0;
	double weight = 0;
	string status = "Null\0";
};

int main()
{
	setlocale(LC_ALL, "ru");
	Human FirstHuman;
	Human SecondHuman;

	FirstHuman.age = 21;
	FirstHuman.firstName = "Jora";
	FirstHuman.secondName = "Polyanskiy";
	FirstHuman.heart = 7;
	FirstHuman.height = 179.8;
	FirstHuman.weight = 72.4;
	FirstHuman.status = "Dolbaeb";

	SecondHuman.firstName = "Anonim";

	cout << "Фамили и Имя: " << FirstHuman.secondName << " " << FirstHuman.firstName << "." << endl;
	cout << "Возраст: " << FirstHuman.age << "." << endl;
	cout << "Уровень здоровья: " << FirstHuman.heart << "." << endl;
	cout << "Рост: " << FirstHuman.height << "." << endl;
	cout << "Вес: " << FirstHuman.weight << "." << endl;
	cout << "Статус: " << FirstHuman.status << "." << endl;
	
	cout << "_________________" << endl;

	cout << "Фамили и Имя: " << SecondHuman.secondName << " " << SecondHuman.firstName << "." << endl;
	cout << "Возраст: " << SecondHuman.age << "." << endl;
	cout << "Уровень здоровья: " << SecondHuman.heart << "." << endl;
	cout << "Рост: " << SecondHuman.height << "." << endl;
	cout << "Вес: " << SecondHuman.weight << "." << endl;
	cout << "Статус: " << SecondHuman.status << "." << endl;


	return 0;
}