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

LinearEquation operator+ (LinearEquation leq1, LinearEquation leq2)
{
	LinearEquation answer;
	answer.slope = (leq1.slope + leq2.slope) / 2;
	answer.intercept = (leq1.intercept + leq2.intercept) / 2;
	return answer;
}
ostream & operator<< (ostream & os, LinearEquation leq)
{
	cout << "y = ";
	os << leq.slope;
	cout << "x + ";
	os << leq.intercept;
	return os;
}
double LinearEquation::evaluate(double x)
{
	double y = slope * x + intercept;
	return y;
}
double LinearEquation::approxIntegral(double a, double b)
{
	double s = 0;
	for (int i = a; i <= b; ++i)
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
