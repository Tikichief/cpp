// Header File (TrajectoryEquation.H) -------------------------------------------#pragma once
#pragma once

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



class TrajectoryEquation
{
private:
	double velocity;
	double angle;
	const double delta;
	const double gravity;

public:
	// TODO: Add Constructor here
	TrajectoryEquation(double v, double a);

	// TODO: Add Observers here
	double getVelocity();
	double getAngle();

	// TODO: Add Mutators here
	void setVelocity(double v);
	void setAngle(double a);

	// TODO: Add Overloaded Input and Output Operators here


	// TODO: Add Helper functions here
	double evaluate(double x);
	double derivate(double x);
	double integrate(double lo, double hi);
};
