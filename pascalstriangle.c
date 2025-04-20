#include <stdio.h>

int main()
{
    int rows, coef = 1, i, j;

    // Ask the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print Pascal's Triangle
    for (i = 0; i < rows; i++)
    {
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        // Calculate and print values for the current row
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1; // First and last values in a row are always 1
            }
            else
            {
                coef = coef * (i - j + 1) / j; // Calculate the next coefficient
            }
            printf("%4d", coef); // Print the coefficient with spacing
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}