#pragma once

class LinearEquation
{
private:
	double x, m, b, y;
public:
	double getm() const;
	double getb() const;
	double evaluate() const;


	void setm(double i);
	void setb(double j);
	void setevaluate(double k);
};
