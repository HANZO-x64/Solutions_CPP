#include <iostream>
#include <string>

using namespace std;

/*
*	Конструктор копирования
*/


class MyClass
{
private:
	int *data;
	
	// Создаем новую переменную для констора копирования:
	int Size;

public:
	MyClass(int size)
	{
		this->Size = size; // Нужно помнить какого размера массив суествует, для того чтобы потом получить данные.
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

		this->Size = other.Size; // описываем переменную Size.

		//this->data = other.data; // - это дефолтный конструктор копирования
		// из-за которого в данном примере появится ошибка.

		this->data = new int[other.Size]; // Правильное реализация данных для примера. 
		/*
		*	Теперь вместо того чтобы просто скопировать ссылку на указатель, который уже есть
		*	мы создаем новый объект размером такого же ячеек массива.
		* 
		*	Далле, т.к мы копируем объект полность, нам нужно пробежаться по объекту,
		*	который мы копируем и скопировать их все в новый объект.
		*/
		// Вот данная реализация:
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	
	~MyClass()
	{
		delete[] data;
		cout << "Вызвался диструктор " << this << endl;
	}

	// Реализация конструктора копирования:
};

void Fun(MyClass value)
{
	cout << "Вызвалась функция Fun" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(a);


	return 0;
}