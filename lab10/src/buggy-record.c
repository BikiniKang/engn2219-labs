#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
	int id;
	int marks;
};

typedef struct record rc;

void print_record(rc *r);
rc *create_record(int id, int marks);

int main() {
	
	rc *r = create_record(10, 100);
	print_record(r);
	
	return 0;
}

rc *create_record(int id, int marks) {
	rc r = {id, marks};
	print_record(&r);
	return &r;
}

void print_record(rc *r) {
	printf("printing record : \n");
	printf("\n");
	printf("id = %i \n",r->id);
	printf("marks = %i \n",r->marks);
	printf("\n");
}

