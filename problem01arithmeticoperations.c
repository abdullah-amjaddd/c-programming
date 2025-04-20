#include<stdio.h>
//.	Write a C program to take two integer inputs 
//from the user and print their sum, difference, product, quotient, and remainder
int main(){
int a;
int b;
printf("Enter the first integer:");
scanf("%d",&a);
printf("Enter the second integer:");
scanf("%d",&b);
int sum=a+b;
int difference=a-b;
int product=a*b;
int quotient=a/b;
int modulus=a%b;
printf("The sum of %d and %d is %d\n",a,b,sum);
printf("The difference of %d and %d is %d\n",a,b,difference);
printf("The product of %d and %d is %d\n",a,b,product);
printf("The division of %d and %d is %d\n",a,b,quotient);
printf("The quotient of %d and %d is %d\n",a,b,modulus);
    return 0;
 }
