// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.
#include <stdio.h>
#include <string.h>
int main() {
    char st1[10];
    char st2[10];
    printf("Enter string 1:\n");
    scanf("%s", st1);
    getchar(); // clear leftover newline
    printf("Enter string 2 (character by character):\n");
    for (int i = 0; i < strlen(st1); i++) {
        scanf("%c", &st2[i]);
    }
    st2[strlen(st1)] = '\0'; // null-terminate

    if (strcmp(st1, st2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}