#include <stdio.h>

int sum(int *array) {
    int s = 0;

    // write the code to sum the array here

    return s;
}

int main() {
    int scores[] = {10, 20, 30, 49, 101};
    int sum_scores = sum(scores);
    printf("sum_scores = %i\n", sum_scores);
    return 0;
}
