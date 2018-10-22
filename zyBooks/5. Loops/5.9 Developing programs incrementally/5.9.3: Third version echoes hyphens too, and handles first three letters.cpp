/*
The third version completes the else-if branch for the letters A-C (lowercase and uppercase), per a standard phone keypad. The program 
also modifies the if branch to echo a hyphen in addition to numbers.
*/



#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   int i;             // Current element in phone number string
   char currChar;     // Current char in phone number string
   
   cout << "Enter phone number: ";
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
               ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      // FIXME: Add remaining else-if branches
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
