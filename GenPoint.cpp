#include <iostream>
#include "graph1.h"
#include "GenPoint.h"

GenPoint::GenPoint()
{
	x = 0;
	y = 0;
}

GenPoint::GenPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}
void GenPoint::setPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}
int GenPoint::getX()
{
	return x;
}
int GenPoint::getY()
{
	return y;
}