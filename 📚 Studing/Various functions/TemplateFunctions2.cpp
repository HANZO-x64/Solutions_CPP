#include <iostream>
using namespace std;

template <typename T1, typename T2> void sum(T1 a, T2 b)
{ 
    cout << a << endl;
    cout << b << endl;
    
}


int main()
{
    setlocale(LC_ALL, "ru");
    sum(2.5, "Шаблон");
    return 0;
}