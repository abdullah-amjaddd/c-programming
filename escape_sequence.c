#include <stdio.h>
void main()
{
    int a;
    float b;
    printf("Enter an integer and a floating point number: ");
    scanf("%d %f", &a, &b);
    // Corrected formatting in printf
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
}// \n is an escape sequence character use to move the cursor to beginning of next line
