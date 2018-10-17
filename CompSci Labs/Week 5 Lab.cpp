/*
15.8 Ch 2 Program: Painting a wall (C++)
(1) Prompt the user to input a wall's height and width. Calculate and output the wall's area. (2 pts)
(2) Extend to also calculate and output the amount of paint in gallons needed to paint the wall. 
Assume a gallon of paint covers 350 square feet. Store this value using a const double variable. (2 pts)
(3) Extend to also calculate and output the number of 1 gallon cans needed to paint the wall. 
Hint: Use a math function to round up to the nearest gallon. (2 pts)
*/


#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{

	double wallHeight;
	double wallWidth;
	double wallArea;
	double gallonsPaint;
	double cansNeeded;

	const double wallPaint = 350;		// square feet
	const double cansPaint = 1;			// 1 gallon

	cout << "Enter wall height (feet):" << endl;
	cin >> wallHeight;
   cout << wallHeight << endl;

	cout << "Enter wall width (feet):" << endl;
	cin >> wallWidth;
	cout << wallWidth << endl;
	
	wallArea = wallHeight * wallWidth;		// Calculate and output wall area

	cout << "Wall area: " << wallArea << " square feet" << endl;  
	
	
	gallonsPaint = wallArea / wallPaint;	// Calcualtes paint need for wall
	cout << "Paint needed: " << gallonsPaint << " gallons" << endl;

	cansNeeded = ceil(gallonsPaint / cansPaint);	// Calculates cans needed to paint wall
	cout << "Cans needed: " << cansNeeded << " can(s)" << endl;

	return 0;
}
