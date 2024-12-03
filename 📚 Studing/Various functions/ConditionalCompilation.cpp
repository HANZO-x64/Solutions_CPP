#include <iostream>

#define DEBUG1
#define DEBUG2
#define DEBUG3
#define DEBUG4 5

using namespace std;

/*
*	Условная компиляция
*	#ifdef #else #endif #if #elif #endif #ifndef
*/ 

void main()
{
	setlocale(LC_ALL, "ru");
	/* - - Пример 1 - - */
#ifdef DEBUG1
	cout << "начало цикла" << endl;
#endif // DEBUG1 

	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}

#ifdef DEBUG1 
	cout << "конец цикла" << endl;
#endif // DEBUG1



	cout << "\n\n";
	/* - - Пример 2 - - */
#ifdef DEBUG2
	cout << "debug определен" << endl;
#else
	cout << "debug  НЕ определен" << endl;
#endif // DEBUG2



	cout << "\n\n";
		/* - - Пример 3 - - */
#ifndef DEBUG3
	cout << "debug НЕ определен" << endl;
#else
	cout << "debug определен" << endl;
#endif // DEBUG3



	cout << "\n\n";
	/* - - Пример 4 - - */
#if DEBUG4 > 5
	cout << "DEBUG > 5" << endl;
#elif DEBUG4 == 5
	cout << "DEBUG = 5" << endl;
#elif DEBUG4 < 5
	cout << "DEBUG < 5" << endl;
#else
	cout << "DEBUG не определен" << endl;
#endif

}