#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 11

struct item {
	int *int_array;
	char *char_array;
};

void zero_initialize(int *array) {
	for (int i = 0; i < N; i++)
		array[i] = 1;
}

void print_array(int *array) {
	for (int i = 0; i < M; i++)
		printf("%d ", array[i]);
	printf("\n");
}


int main() {
	int *array1 = (int *) malloc(N * sizeof(int));
	int *array2 = (int *) malloc(N * sizeof(int));
	int *array3;

	zero_initialize(array1);
	zero_initialize(array2);

	print_array(array1);

	array2 = array1;

	free(array2);

	print_array(array1);

	free(array2);

	zero_initialize(array3);
		
	free(array3);

	return 0;
}
