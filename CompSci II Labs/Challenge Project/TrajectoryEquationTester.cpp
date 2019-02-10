// Main Tester Program (TrajectoryEquationTester.CPP) ------------------------------
#include "Header.h"

int main()
{
	// TODO: Add Functional testing here
	TrajectoryEquation eq(45, 66.4);

	cout << "Given a Trajectory Equation(velocity = 45, angle = 66.4)," << endl;
	cout << "F(150) = " << eq.evaluate(150) << endl;
	cout << "F'(75) = " << eq.derivate(75) << endl;
	cout << "S(50,99) = " << eq.integrate(50, 99) << endl;


	// TODO: Add Input and Output testing here
	TrajectoryEquation Baseball(45.0,66.4);
	cout << endl;
	cout << "F(150.0) = " << Baseball.evaluate(150) << endl;
	cout << endl;

	// TODO: Add Extra Credit code here
	//TrajectoryEquation ec;

	system("pause");
	return 0;
}
