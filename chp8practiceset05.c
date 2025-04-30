// 5. Write your own version of strcpy function from <string.h>
#include <stdio.h>
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add null-terminator
}
int main() {
    char str1[100]; // Make sure there's enough space
    char str2[] = "Amjad";
    my_strcpy(str1, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}