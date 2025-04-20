// 4. Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice
#include <stdio.h>
void slice(char str[], int m, int n)
{
    int i = 0;
    while ((m + i) < n && str[m + i] != '\0')
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0'; // terminate the new sliced string
}
int main()
{
    char str[] = "Abdullah Amjad";
    slice(str, 2, 5); // Should extract "dul"
    printf("%s\n", str);
    return 0;
}