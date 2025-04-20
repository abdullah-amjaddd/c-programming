/* 4. Repeat problem 3 for a general input provided by the user using scanf.
Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.*/
#include <stdio.h>

int main() {
    int number;
    int arr[10];

    // Take input from user
    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &number);

    // Store multiplication table in array
    for (int i = 0; i < 10; i++) {
        arr[i] = number * (i + 1);
    }

    // Print the table
    printf("Multiplication table of %d:\n", number);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", number, i + 1, arr[i]);
    }

    return 0;
}
