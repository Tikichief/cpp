/*
Simon says
"Simon Says" is a memory game where "Simon" outputs a sequence of 10 characters (R, G, B, Y) and the user must repeat the 
sequence. Create a for loop that compares the two strings starting from index 0. For each match, add one point to userScore. 
Upon a mismatch, exit the loop using a break statement. Ex: The following patterns yield a userScore of 4:

simonPattern: RRGBRYYBGY
userPattern:  RRGBBRYBGY

*/



#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;
   simonPattern = "RRGBRYYBGY";
   userPattern  = "RRGBBRYBGY";

   /* Your solution goes here  */

   cout << "userScore: " << userScore << endl;

   return 0;
}
