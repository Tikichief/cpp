/*
6.2.3: Printing array elements with a for loop.
Write a for loop to print all elements in courseGrades, following each element with a space (including the last). Print forwards, 
then backwards. End each loop with a newline. Ex: If courseGrades = {7, 9, 11, 10}, print:
7 9 11 10 
10 11 9 7 
Hint: Use two for loops. Second loop starts with i = NUM_VALS - 1. (Notes)
Note: These activities may test code with different test values. This activity will perform two tests, the first with a 4-element array 
(int courseGrades[4]), the second with a 2-element array (int courseGrades[2]). See "How to Use zyBooks". . 
Also note: If the submitted code tries to access an invalid array element, such as courseGrades[9] for a 4-element array, the test 
may generate strange results. Or the test may crash and report "Program end never reached", in which case the system doesn't 
print the test case that caused the reported message. 
*/


#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i;

   courseGrades[0] = 7;
   courseGrades[1] = 9;
   courseGrades[2] = 11;
   courseGrades[3] = 10;

  for (i = 0; i < NUM_VALS; i++)
	{
		cout << courseGrades[i] << " ";
	}
	
	cout << endl;
	
	for (i = NUM_VALS -1; i > -1; i--)
	{
		cout << courseGrades[i] << " ";
	}
	
	cout << endl;

   return 0;
}
