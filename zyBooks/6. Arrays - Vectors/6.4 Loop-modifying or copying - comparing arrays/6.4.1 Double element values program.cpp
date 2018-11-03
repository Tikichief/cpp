// 6.4.1: Modifying an array during iteration example: Doubling element values.


#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;  // Number of elements
   int userVals[NUM_ELEMENTS];  // User values
   int i;                       // Loop index
   
   // Prompt user to input values
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: " << endl;
      cin >> userVals[i];
   }
   
   // Double each element -- FIXME write this loop
  
   // Print numbers
   cout << "New numbers: ";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << userVals[i] << " ";
   }
   
   return 0;
}
