#include "LinearEquation.h"

double LinearEquation::getm() const
{
	return m;
}
double LinearEquation::getb() const
{
	return b;
}
double LinearEquation::evaluate() const
{
	return y;
}



void LinearEquation::setm(double i)
{
	m = i;
}
void LinearEquation::setb(double j)
{
	b = j;
}
void LinearEquation::setevaluate(double k)
{
	x = k;
	y = m * x + b;
}
