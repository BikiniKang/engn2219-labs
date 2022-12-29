#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
	int id;
	char name[10];
	struct record *next;
};

typedef struct record new_record;

void print_record(new_record *r);
void print_records(new_record *r);
void insert(new_record *head, new_record *item);

int main() {

	new_record head1 = {10, "shoaib", NULL};
	new_record jack = {17, "jack", NULL};
	new_record alian = {11, "alian", NULL};

	insert(&head1, &jack);
	insert(&head1, &alian);

	//delete_record(&r1, 14, "alian");

	//print_record(&r1);
	print_records(&head1);

	new_record mahre = {23, "mahreen", NULL};
	new_record rakhs = {22, "rakhshanda", &mahre};
	new_record head2 = {21, "akram", &rakhs};
	print_records(&head2);

	return 0;
}

void print_record(new_record *r) {
	printf("id = %i \n",r->id);
	printf("name = %s \n",r->name);
}

void delete_record(new_record *head, int id, char *name) {
	
}

void insert(new_record *head, new_record *item) {
}

void print_records(new_record *r) {
	while (1) {
		print_record(r);
		if (r->next != NULL) r = r->next;
		else break;
	}
}
