// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.
#include <stdio.h>
#include <string.h>
int main()
{
    char st1[10];
    char st2[10];
    printf("Enter the string1:\n");
    scanf("%s", st1);
    // Consume the leftover newline character
    getchar();
    printf("Enter the string2 character by character:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &st2[i]);
        if (st2[i] == '\n')
        { // stop if user presses Enter early
            st2[i] = '\0';
            break;
        }
    }
    // Ensure null-termination in case Enter wasn't pressed
    st2[9] = '\0';

    if (strcmp(st1, st2) == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}