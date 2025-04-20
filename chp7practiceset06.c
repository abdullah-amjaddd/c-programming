// . Repeat problem 7 for a custom input given by the user.
#include <stdio.h>
int main()
{
    int arr[3][10];
    int mul[3];
    // Taking input from the user
    printf("Enter 3 numbers to generate their multiplication tables:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &mul[i]);
    }
    // Storing multiplication tables in 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    // Displaying the tables
    for (int i = 0; i < 3; i++)
    {
        printf("\nMultiplication Table of %d:\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
    }
    return 0;
}