#include "point.h"
#include <iostream>
using namespace std;

Point::Point(double a, double b)
{
	Point::setPoint(a, b);
}

void Point::setPoint(double a, double b)
{
	x = a;
	y = b;
}

void Point::print() const
{
	cout << "[" << x << "," << y << "]" << endl;
}