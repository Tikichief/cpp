/*
Iterating until done with a while loop
A programmer commonly wishes to iterate through a string until something is done. 
The example below replaces all occurrences of "U.S.A." with "USA". 
Because the number of iterations is not known beforehand, a while loop is used. 
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int usaIndex;

   cout << "Enter text: ";
   getline(cin, userText);

   // At least one occurrence exists
   while (userText.find("U.S.A.") != string::npos) {
      // Get index of first instance
      usaIndex = userText.find("U.S.A.");

      // U.S.A. is 6 long
      userText.replace(usaIndex, 6, "USA");
   }

   cout << "New text: " << userText<< endl;

   return 0;
}
