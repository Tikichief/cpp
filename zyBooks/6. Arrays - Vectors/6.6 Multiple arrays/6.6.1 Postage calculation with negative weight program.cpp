// zyDE 6.6.1: Postage calculation with negative weight error message.
// Improve the program by also outputting "The next higher weight is ___ with a cost of ___ cents".



#include <iostream>
using namespace std;

int main () {
   const int NUM_ELEMENTS = 14;
   // Weights in ounces
   double letterWeights[NUM_ELEMENTS] = {1.0, 2.0, 3.0, 3.5, 4.0, 5.0, 6.0,
                                         7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0};
   // Costs in cents (usps.com 2017)
   int postageCosts[NUM_ELEMENTS] = {49, 70, 91, 112, 161, 182, 203,
                                     224, 245, 266, 287, 308, 329, 350};
   double userLetterWeight;
   bool foundWeight;
   int i;
   
   // Prompt user to enter letter weight
   cout << "Enter letter weight (in ounces): ";
   cin >> userLetterWeight;
   
   // Postage costs is based on smallest letter weight greater than
   // or equal to mailing letter weight
   foundWeight = false;
   
   for (i = 0; (i < NUM_ELEMENTS) && (!foundWeight); ++i) {
      if (userLetterWeight <= letterWeights[i]) {
         foundWeight = true;
         cout << "Postage for USPS first class mail is ";
         cout << postageCosts[i] << " cents" << endl;
      }
   }
   
   if( !foundWeight ) {
      cout << "Letter is too heavy for USPS first class mail." << endl;
   }
   
   return 0;
}
