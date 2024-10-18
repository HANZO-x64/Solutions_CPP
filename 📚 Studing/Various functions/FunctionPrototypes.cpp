#include <iostream>

using namespace std;

double Multiplication(double a, double b);

int main()
{
	double result, d, e;
	cin >> d;
	cin >> e;
	result = Multiplication(d, e);
	cout << "Result = " << result << endl;


	return 0;
}

double Multiplication(double a, double b)
{
	double c = (a - b) * (a + b);
	return c;
}