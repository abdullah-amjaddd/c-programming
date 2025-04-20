// . Write a program using recursion to calculate nth element of Fibonacci series.
// 5. What will the following line produce in a C program:
#include <stdio.h>
// Recursive function to find nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0; // 0th term is 0
    else if (n == 1)
        return 1; // 1st term is 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}
int main()
{
    int number_of_terms;
    printf("Enter the term number: ");
    scanf("%d", &number_of_terms);

    int x = fibonacci(number_of_terms);
    printf("The %dth element of the Fibonacci series is %d\n", number_of_terms, x);

    return 0;
}
// //F(0) = 0  
// F(1) = 1  
// F(2) = 1  → (F(1) + F(0))  recursive logic
// F(3) = 2  → (F(2) + F(1))  
// F(4) = 3  → (F(3) + F(2))  
// F(5) = 5  → (F(4) + F(3))  
// F(6) = 8  → (F(5) + F(4))  
// ... and so on