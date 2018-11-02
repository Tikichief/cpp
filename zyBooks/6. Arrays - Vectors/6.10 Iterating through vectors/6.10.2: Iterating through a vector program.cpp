/*
Determining a quantity about a vector's items

Iterating through a vector for various purposes is an important programming skill to master. Programs commonly iterate through vectors to
determine some quantity about the vector's items. The example below computes the sum of a vector's element values.
*/

// Figure 6.10.2: Iterating through a vector example: Program that finds the sum of a vector's elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_ELEMENTS); // User values
   int i;                              // Loop index
   int sumVal;                         // For computing sum
   
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
      cout << endl;
   }
   
   // Determine sum
   sumVal = 0;
   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
   }
   cout << "Sum: " << sumVal << endl;
   
   return 0;
}
