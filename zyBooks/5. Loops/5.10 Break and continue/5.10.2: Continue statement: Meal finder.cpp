/*
A continue statement in a loop causes an immediate jump to the loop condition check. A continue statement can sometimes improve the 
readability of a loop. The example below extends the previous meal finder program to find meal options for which the total number of items 
purchased is evenly divisible by the number of diners. The program also outputs all possible meal options, instead of just reporting the 
first meal option found.
*/


#include <iostream>
using namespace std;

#include <stdio.h>

int main() {
   const int EMPANADA_COST = 3;
   const int TACO_COST     = 4;
   
   int userMoney;
   int numTacos;
   int numEmpanadas;
   int mealCost;
   int maxEmpanadas;
   int maxTacos;
   int numOptions;
   int numDiners;

   mealCost = 0;
   numOptions = 0;
   
   cout << "Enter money for meal: ";
   cin >> userMoney;
   
   cout << "How many people are eating: ";
   cin >> numDiners;
   
   maxEmpanadas = userMoney / EMPANADA_COST;
   maxTacos     = userMoney / TACO_COST;
   
   numOptions = 0;
   for (numTacos = 0; numTacos <= maxTacos; ++numTacos) {
      for (numEmpanadas = 0; numEmpanadas <= maxEmpanadas; ++numEmpanadas) {
         
         // Total items purchased must be equally 
         // divisible by number of diners
         if ( ((numTacos + numEmpanadas) % numDiners) != 0) {
            continue;
         }
         
         mealCost = (numEmpanadas * EMPANADA_COST) + (numTacos * TACO_COST);
         
         if (mealCost == userMoney) {
            cout << "$" << mealCost << " buys " << numEmpanadas
                 << " empanadas and " << numTacos 
                 << " tacos without change." << endl;
            numOptions = numOptions + 1;
         }
      }
   }
   
   if (numOptions == 0) {
      cout << "You cannot buy a meal without " 
           << "having change left over." << endl;
   }
   
   return 0;
}
