/*
6.10.5: Printing vector elements separated by commas.

Write a for loop to print all NUM_VALS elements of vector hourlyTemp. Separate elements with a comma and space. 
Ex: If hourlyTemp = {90, 92, 94, 95}, print:

90, 92, 94, 95

Your code's output should end with the last element, without a subsequent comma, space, or newline. 
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> hourlyTemp(NUM_VALS);
   int i;

   hourlyTemp.at(0) = 90;
   hourlyTemp.at(1) = 92;
   hourlyTemp.at(2) = 94;
   hourlyTemp.at(3) = 95;

   /* Your solution goes here  */
	for (i = 0; i < hourlyTemp.size(); i++)
	{
		if (hourlyTemp.at(i) == hourlyTemp.at(NUM_VALS - 1))
		{
			cout << hourlyTemp.at(i);
		}
		else 
		cout << hourlyTemp.at(i) << ", ";
	}
  
   cout << endl;

   return 0;
}
