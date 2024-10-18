#include <iostream>

using namespace std;

/* Статическое и динамическо е выделение памяти */

float main()
{
	int a = 5;
	cout << "a =\t" << a << endl;
	int b = a;
	int* px = &a;
	int* px2 = &a;
	cout << "px =\t" << px << "\t*px =\t" << *px << endl;
	cout << "px2 =\t" << px2 << "\t*px2 =\t" << *px2 << endl;
	
	*px2 = 2;
	cout << "\na =\t" << a << endl;
	cout << "px =\t" << px << "\t*px =\t" << *px << endl;
	cout << "px2 =\t" << px2 << "\t*px2 =\t" << *px2 << endl;
	return 0;
}