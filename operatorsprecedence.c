#include<stdio.h>

int main(){
int a=10;
int b=9;
int c=a+b-9;//here left to right associativity will be applied because + and - has same
//precedence so left operator will be evaluated first
int d=a/2*b;//division will be evaluated first
printf("The value of c is %d\n",c);
printf("The value of d is %d",d);
    return 0;
 }
