// An array declaration creates multiple variables in memory, each accessible using [ ].

#include <iostream>
using namespace std;

int main() {
   int itemCounts[3];

   itemCounts[0] = 122;
   itemCounts[1] = 119;
   itemCounts[2] = 117;

   cout << itemCounts[1];

   return 0;
}
