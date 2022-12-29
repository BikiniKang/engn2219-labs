#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10000000

// Each 3D point (i, j, k) is an independent struct 
struct point3D {
	int i;
	int j;
	int k;
};

// array of structs
struct point3D points[LEN];

int sum_k (struct point3D *points) {
	int sum = 0;
	return sum;
	
}

int main() {
	for (int i = 0; i < LEN; i++) {
		points[i].i = 1;
		points[i].j = 1;
		points[i].k = 1;
	}
	int sum = sum_k(points);
	printf("sum of all k points is %i \n", sum);

	return 0;
}
