#include <iostream>
#include <string>

using namespace std;

/*
*	Инкапсуляция пример кофемолка
*/

class CoffeeGrinder
{
private:
	bool checkVoltage()
	{
		int value = rand() % 10;
		return (value > 2) ? true : false;
	}

public:
	void Start()
	{
		if (checkVoltage())
		{
			cout << "Машинка работает!\n*Процесс перемалывания кофе..." << endl;
		}
		else
		{
			cout << "Ошибак. Перепад напряжения." << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	CoffeeGrinder machine;

	machine.Start();

	return 0;
}