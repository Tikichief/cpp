/*
6.4.2: Copy and modify array elements.

Write a loop that sets newScores to oldScores shifted once left, with element 0 copied to the end.
Ex: If oldScores = {10, 20, 30, 40}, then newScores = {20, 30, 40, 10}.

Note: These activities may test code with different test values. This activity will perform two tests, the first with a 4-element array
(newScores = {10, 20, 30, 40}), the second with a 1-element array (newScores = {199}). See "How to Use zyBooks". .

Also note: If the submitted code tries to access an invalid array element, such as newScores[9] for a 4-element array, the test may
generate strange results. Or the test may crash and report "Program end never reached", in which case the system doesn't print the test
case that caused the reported message.
*/


#include <iostream>
using namespace std;

int main() {
	const int SCORES_SIZE = 4;
	int oldScores[SCORES_SIZE];
	int newScores[SCORES_SIZE];
	int i;

	oldScores[0] = 10;
	oldScores[1] = 20;
	oldScores[2] = 30;
	oldScores[3] = 40;

	/* Your solution goes here  */
	for (i = 0; i < SCORES_SIZE; ++i)
	{
		newScores[i] = oldScores[i+1];
	}

	for (i = 0; i < SCORES_SIZE; ++i) {
		cout << newScores[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
