#include <stdio.h>
#include <stdlib.h>

#define N_INTS 10
#define N_CHARS 20

struct item {
	int *int_array;
	char *char_array;
};

typedef struct item item_t;

item_t *item_array;

int main() {

	int num_elements = 0;

	printf("Enter the number of elements: \n");
	scanf("%i",&num_elements);

	item_array = (item_t *) malloc(num_elements * sizeof(item_t));
	
	for (int i = 0; i < num_elements; i++) {
		item_array[i].int_array = malloc(N_INTS  * sizeof(int));
		item_array[i].char_array = malloc(N_CHARS * sizeof(char));
	}

	// add code to find the size of item_array and print it

	// add code to properly free all the memory allocated by the code above


	return 0;
}
