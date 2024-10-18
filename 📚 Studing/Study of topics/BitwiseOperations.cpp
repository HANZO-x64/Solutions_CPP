#include <iostream>

using namespace std;

int main()
{
	int a = 5 | 3, // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)
		b = 5 & 3, // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)
		c = 5 ^ 3, // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)
		d = ~5,    // result will be -6 (1111 1010)
		e = 5 << 1;// result will be 10 (0000 0101 << 1 = 0000 1010)

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;


	return 0;
}