/*
Beyond iterating N times
The three parts of a for loop may be adjusted to do more than just iterate N times. 
For example, a for loop can output various sequences. The following outputs multiples of 5 from 10 to 50. 
*/


#include <iostream>
using namespace std;

// Outputs 10 15 20 25 30 35 40 45 50

int main() {
   int i;

   for (i = 10; i <= 50; i = i + 5) {
      cout << i << " ";
   }

   cout << endl;

   return 0;
}
