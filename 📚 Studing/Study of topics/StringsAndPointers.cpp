#include <iostream>

using namespace std;

// Строки и указатели в с++

void foo(const char *str)
{
	cout << strlen(str) << endl;
}

void main()
{
	// EX.1
	const char* strArr[] = { "Hellow", "World", "TEST" };

	for (int i = 0; i <= 2; i++)
	{
		cout << strArr[i] << endl;
	}

	// EX.2
	const char* str = "hello";
	foo(str);

}