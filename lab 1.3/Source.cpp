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
	cout << "������ ����������: " << z.Polar() << endl;
	cout << "³������ �� ������� ���������:" << z.Origin() << endl;
	cout << "��������� �� ������:" << z.equal() << endl;
	cout << "��������� �� ��������:" << z.noEqual() << endl;
	return 0;
}