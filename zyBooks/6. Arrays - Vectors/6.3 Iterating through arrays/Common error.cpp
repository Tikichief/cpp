/*
Common error: Accesing out of range array element

A common error is to try to access an array with an index that is out of the array's index range. Ex: Trying to access highScores[8] when
highScores's valid indices are 0-7. Care should be taken whenever a user enters a number that is then used as an array index, and when 
using a loop index as an array index also, to ensure the index is within the array's valid index range. Checking whether an array index 
is in range is very important. Trying to access an array with an out-of-range index is not only a very common error, but is also one of 
the hardest errors to debug. The following animation shows what happens when a program writes to an out-of-range index using an array.

6.3.3: Writing to an out-of-range index using an array.
*/


int userWeights[3];
int userAge;

userAge = 44;

userWeights[0] = 122;
userWeights[1] = 119;
userWeights[2] = 117;
userWeights[3] = 199; // (Problematic)

// Print userAge

/*
A write to an array with an out-of-range index may simply write to a memory location of a different variable X residing next to the
array in memory. Later, when the program tries to read X, the program encounters incorrect data. For example, a program may write X with 
the number 44, but when reading X later in the program X may be 2533, with X never (intentionally) written by any program statement in 
between.
*/
