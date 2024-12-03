#include iostream

using namespace std;


	Тернарный оператор
 

void main()
{
	setlocale(LC_ALL, ru);

	int a = 5, b = 4;
	int result = a++;  Унарный 
	result = a + b;  Бинарный
	
	 аналогично тернарный оператор, но упрощает if-else

	cout  Введите число ;
	int c;
	cin  c;
	
	 Обычно
	cout  nC oбычный if ;
	if (c  10)
	{
		cout  c  10  endl;
	}
	else if (c  10)
	{
		cout  c  10  endl;
	}
	else
	{
		cout  c = 10  endl;
	}

	 с оператором
	cout  nC тернарным оператором  ;
	(c  10)  (cout  c  10  endl)  (c  10)  (cout  c  10  endl)  (cout  c = 10  endl);  Тернарный

}