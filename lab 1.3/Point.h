#pragma once
#include "iostream"
using namespace std;
class Point
{
	double x, y;
public:
	void Init(double x, double y);
	double Polar();
	double Origin();
	bool equal();
	bool noEqual();
	void read();
};

