#include <stdio.h>

void string_cpy(char *dst, char* src) {
    // not implemented
    return;
}

void reverse(char *dst, char* src) {
    // not implemented
    return;
}

int main() {
    char str1[6] = "HELLO";
    char str2[6];
    char str3[6];

    string_cpy(str2, str1);  // copy str1 into str2
    reverse(str3, str2);     // reverse str2 and store in str3

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    return 0;
}
