//Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main(){
int n,fact=1;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
fact*=i;
}
//1st iteration i=1,fact*=i->fact=1
//1st iteration i=2,fact*=i->fact=2
//1st iteration i=3,fact*=i->fact=6
//1st iteration i=4,fact*=i->fact=24
printf("The factorial of the number is %d",fact);
    return 0;
 }
