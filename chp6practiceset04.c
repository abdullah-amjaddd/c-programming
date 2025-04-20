// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
#include <stdio.h>
// Function to calculate sum and average using pointers
void calculateSumAndAverage(int a, int b, int *sum, float *avg) {
    *sum = a + b;             // store sum in the pointer
    *avg = (*sum) / 2.0;      // calculate average using float division
}
int main() {
    int num1, num2, sum;
    float average;
    // Input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Function call with addresses of sum and average
    calculateSumAndAverage(num1, num2, &sum, &average);
    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}