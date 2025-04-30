//  Problem Statement:
// Write a C program that:
// Takes a full name input from the user (e.g., "Abdullah Amjad").
// Asks the user to enter the start and end index for slicing.
// Slices the string from the given range and stores it in a new string.
// Prints the sliced result without modifying the original string.
// 💡 Example Input/Output:
// Enter a string: Abdullah Amjad
// Enter start index: 0
// Enter end index: 8
// Sliced string: Abdullah
#include <stdio.h>
void slice(char original[], char sliced[], int m, int n) {
int i = 0;
while ((m + i) < n && original[m + i] != '\0') {
sliced[i] = original[m + i];
i++;
}
    sliced[i] = '\0'; // null-terminate the sliced string
}
int main() {
    char str[50];
    char result[50]; // for storing the sliced string
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    int startingIndex, endingIndex;
    printf("Enter start index:\n");
    scanf("%d", &startingIndex);
    printf("Enter end index:\n");
    scanf("%d", &endingIndex);
    slice(str, result, startingIndex, endingIndex);
    printf("Sliced string = %s\n", result);
    return 0;
}