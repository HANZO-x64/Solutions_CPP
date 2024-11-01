#include <iostream>
#include <conio.h>

using namespace std;

void God_goto()
{
believeGoto_switch:
	{
		int a;
		cout << "\nHello, Pepe! Enter the number already...";
		cin >> a;
		cout << "Good jobs, Pepe. LET'S START!!! ^0^" << endl;
		cout << "So your number matches...";

		switch (a)
		{
		case 1:
			cout << "Monday — You go to work, but wait, you don't have one xD\n\n" << endl;
			break;
		case 2:
			cout << "Tuesday — A great day to drink a smoothie." << endl;
			break;
		case 3:
			cout << "Wednesday — A typical day for office plankton. Pepe, but you don't work, you're not afraid of it." << endl;
			break;
		case 4:
			cout << "Thursday — the weekend is coming soon..." << endl;
			break;
		case 5:
			cout << "Friday — I take it you're on a bender this weekend?:)" << endl;
			break;
		case 6:
			cout << "Saturday — I heard there's a WH40k tournament today, I hope your nercrons are ready." << endl;
			break;
		case 7:
			cout << "Sunda — I suggest you get a good night's sleep, because tomorrow is Monday :((" << endl;
			break;
		default:
			cout << "There is no such number Pepe, so you are bad Pepe\nPepeGap >:)" << endl;
			goto stop;
			break;
		}
	} goto believeGoto_switch;

stop:
	{
		cout << "\nokey, goto stop";
		char result;
		cout << "Next (Y/N)? -.- " << endl;
		cin >> result;
		if ((result == 'Y') || (result == 'y'))
		{
			goto believeGoto_switch;
		}
	} goto stop;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	God_goto();
}