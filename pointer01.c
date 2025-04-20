#include<stdio.h>

int main(){
int a=72;
int *j=&a;//here j is a pointer pointing towards a variable
printf("The address of %d is %p\n",a,&a);//%p is used to print the memory address of the variable
printf("The address of %d is %p",a,j);//both output will be same
printf("%d",*(&a));//* means value at address and & means address of the variable
    return 0;//ampersand is used to obtain the memory address of the variable
 }
