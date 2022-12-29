#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
	int id;
	char name[10];
};

typedef struct record new_record;

void print_record(new_record *r);

int equal(new_record *r1, new_record *r2);
int equal_with_copy(new_record r1, new_record r2);

int main() {

	new_record r1 = {17, "jack"};
	new_record r2 = {16, "angus"};
	new_record r3 = {11, "anson"};

	print_record(&r1);
	r2.id = 17;
	print_record(&r2);
	strcpy(r3.name, "jon");
	print_record(&r3);

	printf("%i \n", equal(&r1, &r2));
	printf("%i \n", equal_with_copy(r1, r2));

	return 0;
}

int equal(new_record *r1, new_record *r2) {
	return 0;
}

int equal_with_copy(new_record r1, new_record r2) {
	return 0;
}

void print_record(new_record *r) {
	printf("printing record : \n");
	printf("\n");
	printf("id = %i \n",r->id);
	printf("name = %s \n",r->name);
	printf("\n");
}

