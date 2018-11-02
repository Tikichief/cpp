/*
Run the program, which prints the contents of the vals vector.
Modify the program's loop expression to be i <= VALS_SIZE rather than i < VALS_SIZE, and observe that the program aborts.
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int VALS_SIZE = 6;
   vector<int> myVals(VALS_SIZE);
   int i;

   myVals.at(0) = 30;
   myVals.at(1) = 20;
   myVals.at(2) = 20;
   myVals.at(3) = 15;
   myVals.at(4) = 5;
   myVals.at(5) = 10;

   for( i = 0; i < myVals.size(); ++i){
      cout << "myVals.at(" << i << ") = " << myVals.at(i) << endl;
   }

   return 0;
}
