/*
Finding the maximum value in an array

Programs commonly iterate through arrays to determine some quantity about the array's items. The program below determines 
the maximum value in a user-entered list. If the user enters numbers 7, -9, 55, 44, 20, -400, 0, 2, then the program will output "max: 55".
The program uses the variable maxVal to store the largest value seen "so far" as the program iterates through the array. During each 
iteration, if the array's current element value is larger than the max seen so far, the program assigns maxVal with the array element.

Before entering the loop, maxVal must be initialized to some value because max will be compared with each array element's value. A logical 
error would be to initialize maxVal to 0, because 0 is not in fact the largest value seen so far, and would result in incorrect output 
(of 0) if the user entered all negative numbers. Instead, the program peeks at an array element (using the first element, though any 
element could have been used) and initializes maxVal to that element's value.
*/

// Figure 6.3.3: Iterating through an array example: Program that finds the max item.


#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;  // Number of elements
   int userVals[NUM_ELEMENTS];  // Array of user numbers
   int i;                       // Loop index
   int maxVal;                  // Computed max
   
   // Prompt user to populate array
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }
   
   // Determine largest (max) number
   maxVal = userVals[0];        // Largest so far
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] > maxVal) {
         maxVal = userVals[i];
      }
   }
   cout << "Max: " << maxVal << endl;
   
   return 0;
}
