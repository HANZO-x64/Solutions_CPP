#include <iostream>
using namespace std;

template <typename T1, typename T2> T2 sum(T1 a, T2 b)
{
    return a + b;
}


int main()
{
    cout << sum(10, 5.2) << endl;

    return 0;
}