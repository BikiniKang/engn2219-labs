#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 5

void print_matrix(int **matrix);
int main() {
	int **array = malloc(ROWS * sizeof(int*));
	for (int i = 0; i < COLS; i++)
		array[i] = malloc(COLS * sizeof(int));

	// write code to initialize each element of the matrix as the row index * col index
	// write code to properly free memory taken up by the array
	
	print_matrix(array);
	return 0;
}

// Complete the function below to print the matrix.

void print_matrix(int **matrix){

}
