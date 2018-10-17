/*
The following program outputs the amount of a savings account each year for 10 years, 
given an input initial amount and interest rate. 
A for loop iterates 10 times, such that each iteration represents one year, outputting that year's savings amount. 
*/



#include <iostream>
using namespace std;

int main() {
   double initialSavings;  // User-entered initial savings
   double interestRate;    // Interest rate
   double currSavings;     // Current savings with interest
   int i;                  // Loop variable

   cout << "Enter initial savings: ";
   cin  >> initialSavings;

   cout << "Enter interest rate: ";
   cin  >> interestRate;

   cout << endl << "Annual savings for 10 years: " << endl;

   currSavings = initialSavings;
   for (i = 0; i < 10; ++i) {
      cout << "$" << currSavings << endl;
      currSavings = currSavings + (currSavings * interestRate);
   }

   return 0;
}
