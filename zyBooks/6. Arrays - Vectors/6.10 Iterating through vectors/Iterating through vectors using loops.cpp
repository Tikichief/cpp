/*
Iterating through vectors using loops

Iterating through vectors using loops is commonplace and is an important programming skill to master. Because vector indices are 
numbered 0 to N - 1 rather than 1 to N, programmers commonly use this for loop structure:

6.10.1: Common for loop structure for iterating through a vector.
*/
// Iterating through myVector
for (i = 0; i < myVector.size(); ++i) {
   // Loop body accessing myVector.at(i)
}

/*
Note that index variable i is initialized to 0, and the loop expression is i < myVector.size() rather than i <= myVector.size(). 
If myVector.size() were 5, the loop's iterations would set i to 0, 1, 2, 3, and 4, for a total of 5 iterations. The benefit of the loop
structure is that each vector element is accessed as myVector.at(i) rather than the more complex myVector.at(i - 1).
*/
