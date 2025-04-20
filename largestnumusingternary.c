// Write a C program that takes three integers as input
//  and determines the largest number using the ternary operator.
#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest number is %d\n", largest);
    return 0;
}