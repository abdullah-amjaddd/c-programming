//  Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not a prime number!\n");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    return 0;
}