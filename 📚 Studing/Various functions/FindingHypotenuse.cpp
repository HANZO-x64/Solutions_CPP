#include <iostream>
#include <cmath>

using namespace std;

// Поиск гипотенузы	треугольника
double FindingHypotenuse(double a, double b)
{
	if (a == 0 || b == 0) { a = 3; b = 4; }
	double sum, hypotenuse;
	sum = pow(a, 2.0) + pow(b, 2.0);
	hypotenuse = sqrt(sum);
	return hypotenuse;
}

void main()
{
	double a, b, result;
	cin >> a;
	cin >> b;
	result = FindingHypotenuse(a, b);
	cout << "Result = " << result << endl;
	
	//return 0;
}

