/*
6.4.4: Modify an array's elements.

Double any element's value that is less than minValue. Ex: If minValue = 10, then dataPoints = {2, 12, 9, 20} becomes {4, 12, 18, 20}.
*/


#include <iostream>
using namespace std;

int main() {
   const int NUM_POINTS = 4;
   int dataPoints[NUM_POINTS];
   int minValue;
   int i;

   dataPoints[0] = 2;
   dataPoints[1] = 12;
   dataPoints[2] = 9;
   dataPoints[3] = 20;

   minValue = 10;

   /* Your solution goes here  */

   for (i = 0; i < NUM_POINTS; ++i) {
      cout << dataPoints[i] << " " ;
   }
   cout << endl;

   return 0;
}
