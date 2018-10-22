/*
The second program version outputs any number elements, outputing '?' for non-number elements. A FIXME comment is commonly used 
to indicate program parts to be fixed or added, as above. Some editor tools automatically highlight the FIXME comment to attract the 
programmer's attention.
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
      if ((currChar >= '0') && (currChar <= '9')) {
         cout << currChar; // Print element as is
      }
      // FIXME: Add else-if branches for letters and hyphen
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
