/*
Week 11 Lab 1
People's weights (Vectors) (C++)
(1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in a vector of doubles. 
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

(2) Also output the total weight, by summing the vector's elements. (5 pt)
*/



#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<double> weight(5);
	int i, j;
	double total;

	// Loop for user to enter weight
	for (i = 0, j = 1; i < weight.size(); i++, j++)
	{
		cout << "Enter weight " << j << ":" << endl << endl;
		cin >> weight.at(i);
		cout << endl;
	}

	// Displays what user entered.
	cout << "You entered: ";
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

	cout << "\n\nThe total weight is: " << total << endl << endl;

	system("pause");
	return 0;
}
