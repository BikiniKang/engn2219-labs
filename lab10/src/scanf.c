#include <stdio.h>

int main () {

    int id;
    char name[20];

    printf("Enter name: ");
    scanf("%19s", name);

    printf("Enter your identifier: ");
    scanf("%i", &id);

	printf("id = %i, name = %s \n", id, name);

    return 0;
}

