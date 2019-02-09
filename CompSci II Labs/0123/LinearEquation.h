#pragma once

class LinearEquation
{
private:
	double slope, intercept;
public:
	LinearEquation(double m = 1, double b = 0);
	double getslope();
	double getintercept();
	
	double approxIntegral(double a, double b);
	double evaluate(double x);
	void setslope(double i);
	void setintercept(double j);

};
