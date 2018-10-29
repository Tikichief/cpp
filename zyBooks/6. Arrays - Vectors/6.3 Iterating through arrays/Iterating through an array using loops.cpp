/*
Iterating through an array using loops
Iterating through arrays using loops is commonplace and is an important programming skill to master.

Because array indices are numbered 0 to N - 1 rather than 1 to N, programmers commonly use this for loop structure:

Common for loop structure for iterating through an array.
*/

// Iterating through myArray
for (i = 0; i < numElements; ++i) {
   // Loop body accessing myArray[i]
}

/*
Note that index variable i is initialized to 0, and the loop expression is i < N rather than i <= N. If N were 5, the loop's iterations 
would set i to 0, 1, 2, 3, and 4, for a total of 5 iterations. The benefit of the loop structure is that each array element is accessed 
as myArray[i] rather than the more complex myArray[i - 1].
*/
