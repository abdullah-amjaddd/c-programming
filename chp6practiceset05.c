// 6. Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable
#include<stdio.h>

int main(){
int g=10;
int *h=&g;
int **i=&h;
printf("The value of variable i by using pointer to pointer type is %d\n",**i);
printf("The value of variable i by using pointer to pointer type is %d",*h);
    return 0;
 }
