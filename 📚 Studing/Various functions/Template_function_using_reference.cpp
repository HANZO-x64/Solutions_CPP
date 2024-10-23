#include <iostream>

using namespace std;

// T &aRef, T &bRef
template <typename T1, typename T2> 
void Swap(T1 &aRef, T2 &bRef)
{
	T1 bufer;
	bufer = aRef;
	aRef = bRef;
	bRef = bufer;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	
	float a = 10.10;
	double b = -10.101010;
	cout << "a =\t" << a << endl;
	cout << "b =\t" << b << endl;

	cout << "\n= = = = = = = = =" << endl;
	Swap(a, b);
	cout << "Результат a = " << a << endl;
	cout << "Результат b = " << b << endl;

}