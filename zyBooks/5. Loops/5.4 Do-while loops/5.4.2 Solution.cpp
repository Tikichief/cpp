/*
5.4.2: Do-while loop to prompt user input.
Write a do-while loop that continues to prompt a user to enter a number less than 100, until the entered number is actually less than 100. 
End each prompt with a newline. Ex: For the user input 123, 395, 25, the expected output is:
Enter a number (<100): 
Enter a number (<100): 
Enter a number (<100): 
Your number < 100 is: 25
*/


#include <iostream>
using namespace std;

int main() {
   int userInput;

   do
   {
      cout << "Enter a number (<100): " << endl;
      cin >> userInput;
   }
   while (userInput > 100);
      
   cout << "Your number < 100 is: " << userInput << endl;

   system("pause");
   return 0;
}
