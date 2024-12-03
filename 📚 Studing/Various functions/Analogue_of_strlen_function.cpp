#include <iostream>

using namespace std;

// аналог функции strline

int strBill(const char *str)
{
	int score = 0;

	while (str[score] != '\0')
	{
		score++;
	}

	return score;
}

void main()
{
	char str[] = {'M', 'A', 'G', 'I', 'C', ' ', 'T', 'E', 'X', 'T', '\0'};
	cout << strBill(str) << endl;

}