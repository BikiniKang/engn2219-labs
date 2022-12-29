#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10000000

// struct of arrays
// all i points are stored in a single contiguous array
// all j points are stored in a single contiguous array
// all k points are stored in a single contiguous array

struct pointarray3D {
	int i[LEN];
	int j[LEN];
	int k[LEN];
};

struct pointarray3D points;

int sum_k (struct pointarray3D *points) {
	int sum = 0;
	return sum;
}

int main() {
	for (int idx = 0; idx < LEN; idx++) {
		points.i[idx] = 1;
		points.j[idx] = 1;
		points.k[idx] = 1;
	}
	int sum = sum_k(&points);
	printf("sum of all k points is %i \n", sum);

	return 0;
}
