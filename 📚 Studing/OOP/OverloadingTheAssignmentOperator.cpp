#include <iostream>
#include <string>

using namespace std;

/*
*	Перегрузка оператора присваивания
*/


class MyClass
{
private:
	int *data;
	int Size;

public:
	MyClass(int size)
	{
		this->Size = size;
		this->data = new int[size];

		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Вызвался конструткор " << this << endl;
	}

	MyClass(const MyClass &other)
	{
		cout << "Вызвался конструктор копирования " << this << endl;

		this->Size = other.Size; 

		this->data = new int[other.Size];

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	

	MyClass & operator = (const MyClass &other)
	{
		cout << "Вызвался operator " << this << endl;
		this->Size = other.Size;
		/*
		*	На текущий момент в this уже будут хранится данные,
		*	если мы выполним MyClass(const MyClass &other) и сотрем все данные,
		*	то получим утечку памяти, в той части где выделяется массив.
		*	Поэтому необходимо в объекте, в котором хотим совершить копирование,
		*	использовать delete[].
		*/

		// реализация:
		if (this->data != nullptr)
		{
			delete[] this->data;
		}

		// Далее, также как и в функции: MyClass(const MyClass &other)
		this->data = new int[other.Size];

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
	}

	~MyClass()
	{
		delete[] data;
		cout << "Вызвался диструктор " << this << endl;
	}
};

void Fun(MyClass value)
{
	cout << "Вызвалась функция Fun" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(2);
	MyClass c(5);

	//a.operator=(b);

	c = a = b;

	return 0;
}