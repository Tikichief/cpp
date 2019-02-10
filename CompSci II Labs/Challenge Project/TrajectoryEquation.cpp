// Implementation File (TrajectoryEquation.CPP) ---------------------------------
#include "Header.h"

// TODO: Add Constructor here
TrajectoryEquation::TrajectoryEquation(double v, double a) :velocity(v), angle(a), delta(0.0001), gravity(9.80){}


// TODO: Add Observers here
double TrajectoryEquation::getVelocity()
{ return velocity; }
double TrajectoryEquation::getAngle()
{ return angle; }


// TODO: Add Mutators here
void TrajectoryEquation::setVelocity(double v)
{ velocity = v; }
void TrajectoryEquation::setAngle(double a)
{ angle = a; }



// TODO: Add Overloaded Input and Output Operators here



// TODO: Add Helper functions here
double TrajectoryEquation::evaluate(double x)
{
	double theta = angle * 3.14159 / 180; // Radians
	double Fx = x * tan(theta) - (gravity * pow(x, 2)) / (2 * pow(velocity, 2) * pow(cos(theta), 2));
	return Fx;
}


double TrajectoryEquation::derivate(double x)
{
	double Dx = 0;
	Dx = (evaluate(x + delta) - evaluate(x)) / delta;
	return Dx;
}

double TrajectoryEquation::integrate(double lo, double hi)
{
	double S = 0;
	for (double x = lo; x <= hi; x += delta)
	{
		S += evaluate(x) * delta;
	}
	return S;
}

