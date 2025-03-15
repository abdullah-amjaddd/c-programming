#include <stdio.h>
int main() {
int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);  // Removed extra space
int sum = a + b;
printf("The sum of %d and %d is %d\n", a, b, sum); // Corrected output format
return 0;
}