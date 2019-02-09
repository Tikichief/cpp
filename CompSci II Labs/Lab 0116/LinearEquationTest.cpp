#include "LinearEquation.h"
#include <iostream>
using namespace std;

int main()
{
	LinearEquation a;
	a.setm(2);
	a.setb(3);
	a.setevaluate(5);

	cout << "y = " << a.getm() << "x" << " + " << a.getb() << endl;
	cout << a.evaluate() << endl;

	system("pause");
	return 0;
}
