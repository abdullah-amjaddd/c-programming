#include<stdio.h>
// Write a C program that takes an integer N as input and prints 
// numbers from 1 to N using a for loop.
int main(){
int n;
printf("Enter a number:\n");
scanf("%d",&n);
for (int i=1;i<=n;i++){
printf("%d \n",i);
}
    return 0;
 }
