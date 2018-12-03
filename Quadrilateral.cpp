#include <iostream>
#include <cmath>
#include "Quadrilateral.h"
#include "graph1.h"

Quadrilateral::Quadrilateral()
{
	GenPoint a;
	GenPoint b;
	GenPoint c;
	GenPoint d;
	Color color;

	/*Other methods of setting parameters to 0
	
	a.setPoint(0, 0)
	setPoints(zeroSet, zeroSet, zeroSet, zeroSet
	GenPoint zeroSet(0, 0)
	
	*/

	this->color.setColor(0, 0, 0);
}

void Quadrilateral::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
	//GenPoint a
	if (a.getX() > 639)
		this->a.setPoint(639, a.getY());
	else if (a.getX() < 0)
		this->a.setPoint(0, a.getY());

	if (a.getY() > 399)
		this->a.setPoint(a.getX(), 399);
	else if (a.getY() < 0)
		this->a.setPoint(a.getX(), 0);
	else
		this->a.setPoint(a.getX(), a.getY());

	//GenPoint b
	if (b.getX() > 639)
		this->b.setPoint(639, b.getY());
	else if (b.getX() < 0)
		this->b.setPoint(0, b.getY());

	if (b.getY() > 399)
		this->b.setPoint(b.getX(), 399);
	else if (b.getY() < 0)
		this->b.setPoint(b.getX(), 0);
	else
		this->b.setPoint(b.getX(), b.getY());

	//GenPoint c
	if (c.getX() > 639)
		this->c.setPoint(639, c.getY());
	else if (c.getX() < 0)
		this->c.setPoint(0, c.getY());

	if (c.getY() > 399)
		this->c.setPoint(c.getX(), 399);
	else if (c.getY() < 0)
		this->c.setPoint(c.getX(), 0);
	else
		this->c.setPoint(c.getX(), c.getY());

	//GenPoint d
	if (d.getX() > 639)
		this->d.setPoint(639, d.getY());
	else if (d.getX() < 0)
		this->d.setPoint(0, d.getY());

	if (d.getY() > 399)
		this->d.setPoint(d.getX(), 399);
	else if (d.getY() < 0)
		this->d.setPoint(d.getX(), 0);
	else
		this->d.setPoint(d.getX(), d.getY());
}

void Quadrilateral::setColor(Color color)
{
	this->color = color;
}

double Quadrilateral::getPerimeter()
{
	double total = 0;
	//A-B
	total += sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() - b.getY(), 2.0));

	//B-C
	total += sqrt(pow(b.getX() - c.getX(), 2.0) + pow(b.getY() - c.getY(), 2.0));

	//C-D
	total += sqrt(pow(c.getX() - d.getX(), 2.0) + pow(c.getY() - d.getY(), 2.0));

	//D-A
	total += sqrt(pow(d.getX() - a.getX(), 2.0) + pow(d.getY() - a.getY(), 2.0));

	return total;
}

void Quadrilateral::print()
{
	gout << setPos(0, 400) << "-----------------------------------------------------------------------------------------------------------------------" << endg;
	gout << setPos(200, 405) << "Shape info follows for: Quadrilateral" << endg;
	gout << setPos(200, 420) << "Point a: (" << a.getX() << ", " << a.getY() << ")" << endg;
	gout << setPos(200, 435) << "Point b: (" << b.getX() << ", " << b.getY() << ")" << endg;
	gout << setPos(200, 450) << "Point c: (" << c.getX() << ", " << c.getY() << ")" << endg;
	gout << setPos(200, 465) << "Point d: (" << d.getX() << ", " << d.getY() << ")" << endg;
	gout << setPos(200, 480) << "Perimeter: " << getPerimeter() << endg;
}

void Quadrilateral::draw()
{
	int ab = 0;
	int bc = 0;
	int cd = 0;
	int da = 0;

	ab = drawLine(a.getX(), a.getY(), b.getX(), b.getY(), 1);
	::setColor(ab, color.getRed(), color.getGreen(), color.getBlue());
	bc = drawLine(b.getX(), b.getY(), c.getX(), c.getY(), 1);
	::setColor(bc, color.getRed(), color.getGreen(), color.getBlue());
	cd = drawLine(c.getX(), c.getY(), d.getX(), d.getY(), 1);
	::setColor(cd, color.getRed(), color.getGreen(), color.getBlue());
	da = drawLine(d.getX(), d.getY(), a.getX(), a.getY(), 1);
	::setColor(da, color.getRed(), color.getGreen(), color.getBlue());
}
