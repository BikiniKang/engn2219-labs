# Set the C compiler to `gcc` (GNU Compiler Collection)
CC=gcc

# Settings to use for the compilation
CFLAGS=-Wall -Wconversion -g

all: record buggy-record linkedlist aos soa scanf

record: src/record.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

buggy-record: src/buggy-record.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

linkedlist: src/linkedlist.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

aos: src/aos.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

soa: src/soa.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

scanf: src/scanf.c
	"$(CC)" $(CFLAGS) -o $@ src/$@.c

.PHONY: clean
clean:
	rm record buggy-record linkedlist aos soa scanf 2>/dev/null || true
