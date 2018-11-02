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
      cout << "Value: " << endl;
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
