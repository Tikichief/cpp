#pragma once

class LinearEquation
{
private:
	double slope, intercept;
	const double delta;
public:
	LinearEquation(double m = 1, double b = 0);
	double getslope();
	double getintercept();

	double approxIntegral(double a, double b);
	double approxDerivative(double x);
	double evaluate(double x);
	void setslope(double i);
	void setintercept(double j);
	friend LinearEquation operator+ (LinearEquation leq1, LinearEquation leq2);
	friend ostream & operator<< (ostream & os, LinearEquation leq);
	friend bool operator== (LinearEquation L1, LinearEquation L2);
	friend istream & operator>> (istream & in, LinearEquation & eq);
};
