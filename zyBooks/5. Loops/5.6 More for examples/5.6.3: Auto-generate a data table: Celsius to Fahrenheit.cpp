/*
Outputting a score sheet
Programs are sometimes used to auto-generate data tables. 
The following program generates a table of Celsius and Fahrenheit temperature values, in increments of 5 C. 
The for loop counts from -10 to 40 in increments of 5, and names the loop variable currC rather than i to be more descriptive. 
*/


#include <iostream>
using namespace std;

int main() {
   int currC;
   double equivalentF;
   
   for (currC = -10; currC <= 40; currC += 5) {
      equivalentF =  (currC * 9.0 / 5.0) + 32.0;

      cout << currC << " C is ";
      cout << equivalentF << " F";
      cout << endl;
   }
   
   return 0;
}
