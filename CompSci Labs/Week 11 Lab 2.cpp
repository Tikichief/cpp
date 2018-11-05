/*
Kareem Gourdine
5 Nov 2018

Week 11 Lab 1

People's weights (Vectors) (C++)
(1)		Prompt the user to enter five numbers, being five people's weights. Store the numbers in a vector of doubles.
		Output the vector's numbers on one line, each number followed by one space. (5 pts)
		Output should look like this
		Enter weight 1:
		236.0
		Enter weight 2:
		89.5
		Enter weight 3:
		142.0
		Enter weight 4:
		166.3
		Enter weight 5:
		93.0
		You entered: 236 89.5 142 166.3 93

(2)		Also output the total weight, by summing the vector's elements. (5 pt)
------------------------------------------------------------------------------------------------------------------
Week 11 Lab 2

(3)		Also output the average of the vector's elements. (5pt)

(4)		Also output the max vector element. (4 pts)  ( take help from Zybooks 6.10.3 )
*/



#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;


int main()
{
	vector<double> weight(5);
	int i, j;
	double total;
	double avg;
	double max;


	// Loop for user to enter weight
	for (i = 0, j = 1; i < weight.size(); i++, j++)
	{
		cout << "Enter weight " << j << ":" << endl;
		cin >> weight.at(i);
	}

	// Displays what user entered.
	cout << "\nYou entered: ";
	for (i = 0; i < weight.size(); i++)
	{
		cout << weight.at(i);
		cout << " ";
	}

	// Calculates the total weight
	total = 0.0;
	for (i = 0; i < weight.size(); i++)
	{
		total = total + weight.at(i);
	}

	// Calulates average weight
	avg = (total / weight.size());

	// Computes Max weight
	max = weight.at(0);
	for (i = 0; i < weight.size(); ++i)
	{
		if (weight.at(i) > max)
			max = weight.at(i);
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nThe total weight is: " << total << endl << endl;
	avg = (total / weight.size());
	cout << "The average weight is: " << avg << endl << endl;
	cout << "The max weight is: " << max << endl << endl;

	system("pause");
	return 0;
}
