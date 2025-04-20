//Write a C program that takes an integer input from the user
// and determines whether it is even or odd using the ternary operator.
#include<stdio.h>

int main(){
int a;
printf("Enter an integer: \n");
scanf("%d",&a);
a%2==0?printf("The number is even .\n"):printf("The number is odd .\n");
    return 0;
 }