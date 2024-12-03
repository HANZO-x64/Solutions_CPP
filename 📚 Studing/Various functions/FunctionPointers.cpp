#include <iostream>
#include <string>

using namespace std;

/*
*	Указатели на функцию
*	
	Синтаксис: 
*	тип функции(*имя указателя)(спецификация параметров);
*/ 

string GetDataFromBD()
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

string GetDataFromLocalServer()
{
	return "Data From Local Server";
}

void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}

void main()
{
	ShowInfo(GetDataFromBD);
	ShowInfo(GetDataFromWebServer);
	ShowInfo(GetDataFromLocalServer);
}