/*
6.3.2: Finding values in arrays.
Set numMatches to the number of elements in userValues (having NUM_VALS elements) that equal matchValue. 
Ex: If matchValue = 2 and userValues = {2, 2, 1, 2}, then numMatches = 3. (Notes)
*/


#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i;
   int matchValue;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues[0] = 2;
   userValues[1] = 2;
   userValues[2] = 1;
   userValues[3] = 2;

   matchValue = 2;
   numMatches = 0;
	for (i = 0; i < NUM_VALS; i++)
	{
		if (userValues[i] == matchValue)
		{
			numMatches++;
		}
  }
   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

   return 0;
}
