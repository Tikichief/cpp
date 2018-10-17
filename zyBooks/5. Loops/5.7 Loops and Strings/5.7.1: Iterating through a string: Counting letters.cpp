/*
Iterating through a string with a for loop
A programmer commonly iterates through a string, examining each character. 
The following example counts the number of letters in a string, not counting digits, symbols, etc. 
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputWord;
   int numLetters;
   int i;

   cout << "Enter a word: ";
   cin  >> inputWord;

   numLetters = 0;
   for (i = 0; i < inputWord.length(); ++i) {
      if (isalpha(inputWord.at(i))) {
         numLetters += 1;
      }
   }

   cout << "Number of letters: " << numLetters << endl;

   return 0;
}
