// Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((a > b) && (a > c) && (a > d))
    {
        printf("A is largest \n");
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        printf("B is largest\n");
    }
    else if ((c > a) && (c > b) && (c > d))
    {
        printf("C is largest\n");
    }
    else
    {
        printf("D is the largest .\n");
    }
    return 0;
}
