#include <iostream>
#include <string>

using namespace std;

// Дружественный метод класса.
class MyClass
{
public:
	void PrintMessage();
}; 

// 1 Способо
void MyClass::PrintMessage()
{
	cout << "Message" << endl;
}

int main()
{
	MyClass a;
	a.PrintMessage();

    return 0;
}
