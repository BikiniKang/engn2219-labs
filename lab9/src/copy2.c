#include <stdio.h>

int main() {
    int c;

    // Your task is to condense the following statements into as fewer as you can

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
