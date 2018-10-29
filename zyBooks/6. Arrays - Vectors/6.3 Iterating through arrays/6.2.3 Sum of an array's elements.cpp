/*
Determining a quantity about an array's items

Iterating through an array for various purposes is an important programming skill to master. The program below computes the sum of an 
array's element values. For computing the sum, the program initializes a variable sum to 0, then simply adds the current iteration's array 
element value to that sum.
*/

// 6.3.2: Iterating through an array example: Program that computes the sum of an array's elements.

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8; // Number of elements
   int userVals[NUM_ELEMENTS]; // User numbers
   int i;                      // Loop index
   int sumVal;                 // For computing sum
   
   // Prompt user to populate array
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }
   
   // Determine sum
   sumVal = 0;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      sumVal = sumVal + userVals[i];
   }
   
   cout << "Sum: " << sumVal << endl;
   
   return 0;
}
