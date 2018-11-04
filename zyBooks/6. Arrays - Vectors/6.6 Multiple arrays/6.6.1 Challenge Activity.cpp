/*
6.6.1 Multiple arrays.

Subtract each element in origList with the corresponding value in offsetAmount. Print each difference followed by a space.
Ex: If origList = {4, 5, 10, 12} and offsetAmount = {2, 4, 7, 3}, print:

2 1 3 9 
*/


#include <iostream>
#include <string.h>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int origList[NUM_VALS];
   int offsetAmount[NUM_VALS];
   int i;

   origList[0] = 20;
   origList[1] = 30;
   origList[2] = 40;
   origList[3] = 50;

   offsetAmount[0] = 2;
   offsetAmount[1] = 3;
   offsetAmount[2] = 6;
   offsetAmount[3] = 5;

   /* Your solution goes here */
  for (int i = 0; i<NUM_VALS; i++)
     {
     cout << origList[i] + offsetAmount[i] << " ";
     }
     
   cout << endl;

   return 0;
}
// -----------------------------------------------------------------------------------------------------------------------------------
/*
For any element in keysList with a value smaller than 50, print the corresponding value in itemsList, followed by a space.
Ex: If keysList = {32, 105, 101, 35} and itemsList = {10, 20, 30, 40}, print:

10 40 
*/


#include <iostream>
#include <string.h>
using namespace std;

   int main () {
   const int SIZE_LIST = 4;
   int keysList[SIZE_LIST];
   int itemsList[SIZE_LIST];
   int i;

   keysList[0] = 13;
   keysList[1] = 47;
   keysList[2] = 71;
   keysList[3] = 59;

   itemsList[0] = 12;
   itemsList[1] = 36;
   itemsList[2] = 72;
   itemsList[3] = 54;

   /* Your solution goes here */
  for (int i =0 ; i<SIZE_LIST; i++ )
  {
  if (keysList[i] > 50)
    {
      cout << itemsList[i] <<" ";
    }  
  }
   cout << endl;

   return 0;
}


