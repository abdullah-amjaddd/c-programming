#include <stdio.h>
int main() {
    int rows, i, j, space;
    // Ask the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Loop to print the pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Print numbers in ascending order
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Print numbers in descending order
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}