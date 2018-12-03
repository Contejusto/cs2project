#include <iostream>
#include <cmath>
#include "GenRectangle.h"
#include "Quadrilateral.h"
#include "graph1.h"

GenRectangle::GenRectangle()
{
	//Empty calls quadrilateral constructor
}

void GenRectangle::setPoints(GenPoint ul, GenPoint lr)
{
	GenPoint b(lr.getX(), ul.getY());
	GenPoint d(ul.getX(), lr.getY());

	Quadrilateral::setPoints(ul, b, lr, d);

}

double GenRectangle::getArea()
{
	//Calculate area using distance formula
	double area = 0;
	area = (sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() - b.getY(), 2.0))) * (sqrt(pow(d.getX() - a.getX(), 2.0) + pow(d.getY() - a.getY(), 2.0)));

	return area;
}

void GenRectangle::print()
{
	Quadrilateral::print();

	gout << setPos(300, 10) << "Rectangle Information" << endg;
	gout << setPos(300, 25) << "Area: " << getArea() << endg;
}