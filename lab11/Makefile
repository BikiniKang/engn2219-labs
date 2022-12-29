# Set the C compiler to `gcc` (GNU Compiler Collection)
CC=gcc

# Settings to use for the compilation
CFLAGS=-Wall -Wconversion -g

all: 2-dim-array bug-galore item-array linked-list static-array

2-dim-array: src/2-dim-array.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

bug-galore: src/bug-galore.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

item-array: src/item-array.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

linked-list: src/linked-list.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

static-array: src/static-array.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c


.PHONY: clean
clean:
	rm 2-dim-array bug-galore item-array linked-list static-array 2>/dev/null || true
