#include <iostream>
#include <string>

using namespace std;

// Перегрузка оператора индексированиея []
class TestClass
{
public:
	int& operator [](int index)
	{
		return arr[index];
	}

private:
	int arr[5]{0,1,2,3,4};
};
W
int main()
{
	TestClass a;

	cout << a[0] << endl;
	a[0] = 100;
	cout << a[0] << endl;

	return 0;
}