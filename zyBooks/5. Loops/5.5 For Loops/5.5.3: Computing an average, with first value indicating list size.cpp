/*
The example below computes the average of an input list of integer values. 
The first input indicates the number of values in the subsequent list. 
That number controls how many times the subsequent for loop iterates. 
*/


#include <iostream>
using namespace std;

// Outputs average of list of integers
// First value indicates list size
// Ex: 4  10 1 6 3  yields (10 + 1 + 6 + 3) / 4, or 5

int main() {
   int currValue;
   int valuesSum;
   int numValues;
   int i;

   cin >> numValues; // Gets number of values in list

   valuesSum = 0;

   for (i = 0; i < numValues; ++i) {
          cin >> currValue; // Gets next value in list
          valuesSum += currValue;
   }

   cout << "Average: " << (valuesSum / numValues) << endl;

   return 0;
}
