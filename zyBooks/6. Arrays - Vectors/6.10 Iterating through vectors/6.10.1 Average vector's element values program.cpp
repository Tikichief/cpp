// 6.10.1: Computing the average of a vector's element values.
// Complete the code to compute the average of the vector's element values. The result should be 16.



#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int VALS_SIZE = 6;
   vector<int> valsVctr(VALS_SIZE);
   int i;
   int sumVal;
   int avgVal;

   valsVctr.at(0) = 30;
   valsVctr.at(1) = 20;
   valsVctr.at(2) = 20;
   valsVctr.at(3) = 15;
   valsVctr.at(4) = 5;
   valsVctr.at(5) = 10;

   sumVal = 0;
   avgVal = 0;
   /* FIXME: Write for loop to iterate through vector */

   avgVal = sumVal / VALS_SIZE;

   cout << "Avg: " << avgVal << endl;

   return 0;
}
