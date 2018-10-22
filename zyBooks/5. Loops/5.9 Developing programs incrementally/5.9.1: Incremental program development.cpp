// The first program version simply prints each string element, to ensure the loop iterates properly.


#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   int i;             // Current element in phone number string
   
   cout << "Enter phone number: ";
   cin >> phoneStr;
   
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      cout << "Element " << i << " is: " << phoneStr.at(i) << endl;
   }
   
   return 0;
}
