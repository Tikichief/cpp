#include "LinearEquation.h"

LinearEquation::LinearEquation(double m, double b) :slope(m), intercept(b), delta(0.0001) {}

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

bool operator== (LinearEquation L1, LinearEquation L2)
{
	if (L1.slope != L2.slope)
		return false;
	else if (L1.intercept != L2.intercept)
		return false;
	else
		return true;
}

istream & operator>> (istream & in, LinearEquation & eq)
{
	cout << "Slope: ";
	in >> eq.slope;
	in.ignore();
	cout << "Intercept: ";
	in >> eq.intercept;
	in.ignore();
	return in;
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
	for (double i = a; i <= b; i += delta)
	{
		s += evaluate(i) * delta;
	}
	return s;
}

double LinearEquation::approxDerivative(double x)
{
	double Dx = (evaluate(x + delta) - evaluate(x)) / delta;
	return Dx;
}

void LinearEquation::setslope(double i)
{
	slope = i;
}
void LinearEquation::setintercept(double j)
{
	intercept = j;
}
