/*
5.4.1: Basic do-while loop with user input.
Complete the do-while loop to output 0 to countLimit using printVal. Assume the user will only input a positive number. 
For example, if countLimit is 5 the output will be

0 1 2 3 4 5 
*/


#include <iostream>
using namespace std;

int main() {
   int countLimit;
   int printVal;

   // Get user input
   cin >> countLimit;

   printVal = 0;
   do {
      cout << printVal << " ";
      printVal = printVal + 1;
   } while (countLimit-- );
   cout << endl;

   system("pause");
   return 0;
}
