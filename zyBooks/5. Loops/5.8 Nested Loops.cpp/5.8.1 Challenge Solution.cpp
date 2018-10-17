/*
5.8.1: Nested loops: Indent text.
Print numbers 0, 1, 2, ..., userNum as shown, with each number indented by that number of spaces. 
For each printed line, print the leading spaces, then the number, and then a newline. 
Hint: Use i and j as loop variables (initialize i and j explicitly). 
Note: Avoid any other spaces like spaces after the printed number. Ex: userNum = 3 prints:

0
 1
  2
   3
   
*/


#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   i = 0;
   while (i <= userNum)
   {
      j = 0;
      while(j < i)
      {
         cout << " ";
         j++;
      }
      cout << i << endl;
      i++;
   }      

   return 0;
}
