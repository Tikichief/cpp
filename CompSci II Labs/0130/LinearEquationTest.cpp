#include "LinearEquation.h"
#include <iostream>
using namespace std;

int main()
{
	LinearEquation a, b(10, 5);
	LinearEquation c(5, 10), d, e;

	cout << "Linear Equation: y = " << b.getslope() << "x" << " + " << b.getintercept() << endl;

	cout << "f(5) = " << b.evaluate(5) << endl;
	cout << "f'(5) = " << b.approxDerivative(5) << endl;

	cout << "Approximate integral of: y = " << b.getslope() << "x" << " + " << b.getintercept() << " from [0,5] is " << b.approxIntegral(0, 5) << endl;

	cout << "(y = " << b.getslope() << "x" << " + " << b.getintercept() << ")" << " + "
		<< "(y = " << c.getslope() << "x" << " + " << c.getintercept() << ")" << " / 2 " << endl;
	cout << (c + b) << endl;

	if (a == d)
		cout << "LinearEquation a is the same equation as LinearEquation d" << endl;
	else
		cout << "LinearEquation a is different equation from LinearEquation d" << endl;

	cin >> e;
	cout << "y = " << e.getslope() << "x" << " + " << e.getintercept() << endl;

	system("pause");
	return 0;
}
