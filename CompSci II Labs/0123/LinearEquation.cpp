#include "LinearEquation.h"

LinearEquation::LinearEquation(double m, double b) :slope(m), intercept(b) {} 

double LinearEquation::getslope()
{
	return slope;
}
double LinearEquation::getintercept()
{
	return intercept;
}


double LinearEquation::evaluate(double x)
{
	double y = slope * x + intercept;
	return y;
}
double LinearEquation::approxIntegral(double a, double b)
{
	double s = 0;
	for(int i = a; i <= b; ++i)
		{
			s += evaluate(i);
		}
	return s;
}

void LinearEquation::setslope(double i)
{
	slope = i;
}
void LinearEquation::setintercept(double j)
{
	intercept = j;
}
