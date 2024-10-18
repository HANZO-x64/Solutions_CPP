#include <iostream>

using namespace std;

int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
bool sum(bool a, bool b) { return a + b; }
int sum(int a, int b, int c) { return a + b + c; }

int main()
{
	cout << sum(5, 6) << endl;
	cout << sum(5.3, 6.9) << endl;
	cout << sum(0, 1) << endl;
	cout << sum(1, 5, 6) << endl;
}