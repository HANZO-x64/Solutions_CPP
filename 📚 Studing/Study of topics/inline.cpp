#include <iostream>
#include <math.h>

using namespace std;

// inline
inline bool sqr_root(double a, double b, double c, double& x1, double& x2)
{
	double D = b * b - a * c;
	if (D < 0) { return false; }
	else {
		x1 = -(b + sqrt(D)) / (2 * a);
		x2 = -(b - sqrt(D)) / (2 * a);
		return true;
	}
}

int main()
{
	double x1{}, x2{};
	bool res_root = sqr_root(3, 10, 5, x1, x2);

	if (res_root)
		cout << x1 << " " << x2 << endl;


	return 0;
}