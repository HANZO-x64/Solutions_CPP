#include <iostream>

using namespace std;

class MyClass {
	public:
		int a = 5, b = 10;
		void Fun() {
			int c;
			c = a + b;
			cout << c << endl;
		}
};

int main()
{
	MyClass obj;
	obj.Fun();
	
	return 0;
}