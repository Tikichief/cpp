/*
Copying an array

Copying an array is a common task. Given a second array of the same size, a loop can copy each element one-by-one. Modifications to either array do not affect the other.
*/

// Figure 6.4.2: Array copying: Converting negatives to 0 program.


#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;   // Number of elements
   int userVals[NUM_ELEMENTS];   // User numbers
   int copiedVals[NUM_ELEMENTS]; // Copied/modified user numbers
   int i;                        // Loop index
   
   // Prompt user for input values
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }
   
   // Copy userNums to copiedNums array
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      copiedVals[i] =  userVals[i];
   }
   
   // Convert negatives to 0
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (copiedVals[i] < 0) {
         copiedVals[i] = 0;
      }
   }
   
   // Print numbers
   cout << endl << "Original and new values: " << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << userVals[i] << " became " << copiedVals[i] << endl;
   }
   
   return 0;
}
