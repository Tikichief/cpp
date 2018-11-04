/*
A programmer can initialize a two-dimensional array's elements during declaration using nested braces, as below. 
Multiple lines make the rows and columns more visible. 
Construct 6.5.1: Initializing a two-dimensional array during declaration.
*/


// Initializing a 2D array
int numVals[2][3] = { {22, 44, 66}, {97, 98, 99} };

// Use multiple lines to make rows more visible
int numVals[2][3] = {
   {22, 44, 66}, // Row 0
   {97, 98, 99}  // Row 1
};


/*
Arrays of three or more dimensions can also be declared, as in int myArray[2][3][5], which declares a total of 2*3*5 or 30 elements. 
Note the rapid growth in size -- an array declared as int myArray[100][100][5][3] would have 100*100*5*3 or 150,000 elements. 
A programmer should make sure not to unnecessarily occupy available memory with a large array. 
*/
