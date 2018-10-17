/*
Pennies for Pay
Write a program that calculates how much a person would earn over a period of time if his or her salary 
is one penny the first day and two pennies the second day, and continues to double each day. 
The program should ask the user for the number of days. The output should be displayed in a dollar amount, not the number of pennies.   
Input Validation: Do not accept a number less than 1 for the number of days worked.
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	int days;
	double penny = 0.01;

	cout << "Enter the number of days work.\n";
	cin >> days;
	cout << "\n";

	// Input Validation
	while (days < 1 || days > 31)
	{
		cout << "Invalid input. Please enter a number greater than 1 for days worked." << endl;
		cin >> days;
	}
	
	cout << "Days\t\tMoney Earned Per Day\n";
	cout << "--------------------------------------\n";
	
	// Calculates days work in pennies
	for (int i = 1; i <= days; ++i)
	{
		cout << i << "\t\t" << penny << "\n";
		penny = penny * 2.00;
	}

	
	// Prints Totals
	cout << setprecision(2) << fixed << showpoint;
	cout << "--------------------------------------\n";
	cout << "Total in penny(s): $" << penny << endl;
	cout << "\n";

	system("pause");
	return 0;
}
