#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


double f(double c) 
{
    return 2 * log10(c) - (c / 2) + 1;
}

double derivative(const double c, const double h = 0.0001)
{
    return (f(c + h) - f(c)) / h;
}

double methodNewtons(double x, const int size)
{
    for (int i = 0; i < size; i++)
    {
        // Считаем по формуле Ньютона: Xn-1 = x - (f(x) / f'(x))
        double derivF = derivative(x);
        double baseF = (2 * log10(x)) - (x / 2) + 1;
        cout << "Шаг #" << i << endl;
        double resultMethod = x - (baseF / derivF);
        cout << "Результат = " << resultMethod << endl;
        
        // Проверка |x2-x1|
        double comparisonResult = x - resultMethod;
        if (comparisonResult < 0)
        {
            cout << "число " << comparisonResult << "< 0" << endl;
            return 1;
        }
        cout << "считаем погрешность |x2-x1| = |" << x << "-" << resultMethod << "| = " << fixed << setprecision(12) << comparisonResult;
        cout << "\n------------------------" << endl;

        x = resultMethod;
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size;
    double x;
    cout << "Введите значение интервала [x1 ; x2]\nx2 = ";
    cin >> x;
    if (x <= 0)
    {
        cout << "Значение x1 должно быть больше 0." << endl;
        return 1;
    }
    cout << "Размер массива для проверки = ";
    cin >> size;
    cout << "\n=======================\nРЕШЕНИЕ:" << endl;
    methodNewtons(x, size);

    return 0;
}
