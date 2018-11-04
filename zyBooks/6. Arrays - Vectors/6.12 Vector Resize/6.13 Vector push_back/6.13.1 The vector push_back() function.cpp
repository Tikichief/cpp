/*
Appending items to a vector

A programmer can append a new element to the end of an existing vector using a vector's push_back. 
Ex: dailySales.push_back(521) creates a new element at the end of the vector dailySales and assigns that element with the value 521.
*/

// 6.13.1: The vector push_back() function.


#include <iostream>
#include <vector>
using namespace std;

int main() {
   unsigned int i;
   vector<int> dailySales;

   cout << "Size before: " << dailySales.size();

   dailySales.push_back(521);
   dailySales.push_back(440);
   dailySales.push_back(193);
   dailySales.push_back(317);

   cout << ", after: " << dailySales.size() << endl;
   cout << "Contents:" << endl;
   for (i = 0; i < dailySales.size(); ++i) {
      cout << " " << dailySales.at(i) << endl;
   }
 
   return 0;
}
