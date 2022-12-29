#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
	int id;
	char name[10];
	struct record *next;
};

typedef struct record new_record;

new_record *head = NULL;

void print_records();
void print_record(new_record *r);
void insert(int id, char *name);
void delete(int id, char *name);

int main() {

	int id;
	char name[10];

	printf("Enter 1 to add another student to the list, 2 to delete a student from the list, and -1 to quit:\n");

	int take_new_student = 0;

	while (1) {
		scanf("%i",&take_new_student);
		if(take_new_student == 1) {
			scanf("%i",&id);
			scanf("%s",name);
			insert(id, name);
		}
		if(take_new_student == 2) {
			scanf("%i",&id);
			scanf("%s",name);
			delete(id, name);
		}
		if(take_new_student == -1)
			break;
	}

	print_records(head);

	return 0;
}

void delete(int id, char *name) {
}

void insert(int id, char *name) {
}

void print_record(new_record *r) {
	printf("id = %i \n",r->id);
	printf("name = %s \n",r->name);
}

void print_records() {
	new_record *n = head;
	while (n != NULL) {
		print_record(n);
		n = n->next;
	}
}

