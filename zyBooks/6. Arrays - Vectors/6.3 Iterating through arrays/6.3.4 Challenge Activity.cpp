/*
6.3.4: Array iteration: Sum of excess.

Array testGrades contains NUM_VALS test scores. Write a for loop that sets sumExtra to the total extra credit received. 
Full credit is 100, so anything over 100 is extra credit. 
Ex: If testGrades = {101, 83, 107, 90}, then sumExtra = 8, because 1 + 0 + 7 + 0 is 8. 
*/


#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int testGrades[NUM_VALS];
   int i;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   testGrades[0] = 101;
   testGrades[1] = 83;
   testGrades[2] = 107;
   testGrades[3] = 90;

   /* Your solution goes here  */

   cout << "sumExtra: " << sumExtra << endl;
   return 0;
}
