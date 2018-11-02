/*
Finding the maximum value in a vector

The program below determines the maximum value in a user-entered list. If the user enters numbers 7, -9, 55, 44, 20, -400, 0, 2, then the
program will output "max: 55". The program uses the variable maxVal to store the largest value seen thus far as the program iterates 
through the vector. During each iteration, if the vector's current element value is larger than the max seen thus far, the program 
assigns maxVal with the current vector element.

Before entering the loop, maxVal must be initialized to some value because maxVal will be compared with each vector element's value. A 
logical error would be to initialize maxVal to 0, because 0 is not in fact the largest value seen so far, and would result in incorrect 
output (of 0) if the user entered all negative numbers. Instead, the program peeks at a vector element (in this case the first element, 
though any element could be used) and initializes maxVal with that element's value.
*/

// Figure 6.10.3: Iterating through a vector example: Program that finds the max item.


#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   int i;                          // Loop index
   int maxVal;                     // Computed max
   
   cout << "Enter " << NUM_VALS << " integer numbers..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
      cout << endl;
   }
   
   // Determine largest (max) number
   maxVal = userVals.at(0);        // Largest so far
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
   }
   cout << "Max: " << maxVal << endl;
   
   return 0;
}
