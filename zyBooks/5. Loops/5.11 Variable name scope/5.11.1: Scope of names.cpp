/*
Scope of names

A declared name is only valid within a region of code known as the name's scope. Ex: A variable userNum declared in main() is only valid 
within main(), from the declaration to main()'s end.

Most of this material declares variables at the top of main() (and if the reader has studied functions, at the top of other functions). 
However, a variable may be declared within other blocks too. A block is a brace-enclosed {...} sequence of statements, such as found with 
an if-else, for loop, or while loop. A variable name's scope extends from the declaration to the closing brace }.
*/

// 5.11.1: Variable name scope extend to the end of the declaration's block.

#include <iostream>
using namespace std;

int main() {

   // int val1  = userNum;    // ERROR
  int userNum = 2;           // Name valid to main's "}"  
  int newNum  = userNum + 1;
  int i;

   for (i = 0; i < newNum; ++i) {
     int valSquared;        // Name valid to for's "}"
     valSquared = userNum * userNum;
     cout << i << " squared: " << valSquared << endl;
  }

   // cout << "Last value: " << valSquared << endl; // ERROR

   return 0;
}
