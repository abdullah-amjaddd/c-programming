// .1 Write a program to print the address of a variable. Use this address to get the
// value of the variable.
#include<stdio.h>

int main(){
int a=10;
int *b=&a;
printf("The address of variable a is %p \n",&a);
printf("The value at address of a is %d \n ",*b);
    return 0;
 }
