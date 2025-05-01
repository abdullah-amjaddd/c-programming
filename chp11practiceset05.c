// 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70).
// Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 7;
    int *ptr;
    // Step 1: Allocate memory for 10 integers
    ptr = (int *)malloc(10 * sizeof(int));
    // Step 2: Fill and print the first 10 values
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }
    // Step 3: Reallocate memory to hold 15 integers
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    // Step 4: Fill and print the next 5 values (from 11 to 15)
    for (int i = 10; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }
    // Step 5: Free memory
    free(ptr);
    return 0;
}