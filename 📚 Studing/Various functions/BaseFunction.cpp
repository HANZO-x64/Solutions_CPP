#include <iostream>

using namespace std;

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int result, b, e;
	cin >> b;
	cin >> e;
	result = Sum(b, e);
	cout << "Result = " << result << endl;
	return 0;
}