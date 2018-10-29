/*
6.2.2: Arrays combined with loops

Loops and arrays

A key advantage of arrays becomes evident when used in conjunction with loops. The program below uses a loop to allow a user to enter 8 
integer values, storing those values in an array, and then printing those 8 values.
*/



#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;  // Number of elements in array
   int userVals[NUM_ELEMENTS];  // User numbers
   int i;                   // Loop index
   
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }
   
   cout << "You entered: ";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << userVals[i] << " ";
   }
   cout << endl;
   
   return 0;
}
