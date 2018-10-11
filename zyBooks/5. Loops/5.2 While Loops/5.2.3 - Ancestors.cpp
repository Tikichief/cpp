/*
Below is another loop example. 
The program asks the user to enter a year, 
and then outputs the approximate number of a person's ancestors who were alive for each generation leading back to that year, 
with the loop computing powers of 2 along the way.
*/


#include <iostream>
using namespace std;

int main() {
   const int YEARS_PER_GEN = 20; // Approx. years per generation
   int userYear;                 // User input
   int consYear;                 // Year being considered
   int numAnc;                   // Approx. ancestors in considered year
   
   consYear = 2020;
   numAnc = 2;

   cout << "Enter a past year (neg. for B.C.): ";
   cin >> userYear;
      
   while (consYear >= userYear) {
      cout << "Ancestors in " << consYear << ": " << numAnc << endl;
      
      numAnc = 2 * numAnc;                 // Each ancestor had two parents
      consYear = consYear - YEARS_PER_GEN; // Go back 1 generation
   }
   
   return 0;
}
