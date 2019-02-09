#include "LinearEquation.h"
#include <iostream>
using namespace std;

int main()
{
	LinearEquation a, b(10, 5);


	cout << "y = " << a.getslope() << "x" << " + " << a.getintercept() << endl;
	cout << "y = " << b.getslope() << "x" << " + " << b.getintercept() << endl;
	cout << a.evaluate(5) << endl;
	cout << b.evaluate(10) << endl;
	
	cout << a.approxIntegral(0, 15) << endl;


	system("pause");
	return 0;
}
