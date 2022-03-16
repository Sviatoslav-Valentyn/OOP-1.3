#include "Point.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point z;
	z.read();
	cout << "Полярні координати: " << z.Polar() << endl;
	cout << "Відстань до початку координат:" << z.Origin() << endl;
	cout << "Порівняння на рівність:" << z.equal() << endl;
	cout << "Порівняння на нерівність:" << z.noEqual() << endl;
	return 0;
}